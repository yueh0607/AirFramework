﻿
using AirEditor;
using AirFramework.Utility;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;

namespace AirFramework.MV.RefBuild.Editor
{
    public class MarkBuilder : EditorWindow
    {


        [MenuItem("AirFramework", menuItem = "AirFramework/RefBuilder")]
        static void Open()
        {
            var window = GetWindow<MarkBuilder>();
            window.Show();
        }

        GameObject target = null;
        string path = string.Empty;
        bool increase = false;
        bool part = false;
        string nameSpaceName = "";
        string className;
        bool autoCreatePath = false;
        private const string binderName = "AirFramework.MV.RefBuild.BindableProperty";
        bool awakeInit = false;

        bool language_cn = true;
        private void OnEnable()
        {
            //target = BuilderPreference.instance.buildPrefab;
            //className = BuilderPreference.instance.className;
            language_cn = BuilderPreference.instance.Language_CN;
            path = BuilderPreference.instance.defaultPath;
            increase = BuilderPreference.instance.increase;
            part = BuilderPreference.instance.part;
            nameSpaceName = BuilderPreference.instance.defaultNameSpace;
            autoCreatePath = BuilderPreference.instance.autoCreatePath;
            awakeInit = BuilderPreference.instance.awakrInit;
        }
        private void OnDisable()
        {
            //BuilderPreference.instance.buildPrefab = target;
            //BuilderPreference.instance.className = className;
            BuilderPreference.instance.Language_CN = language_cn;
            BuilderPreference.instance.defaultPath = path;
            BuilderPreference.instance.increase = increase;
            BuilderPreference.instance.part = part;
            BuilderPreference.instance.defaultNameSpace = nameSpaceName;
            BuilderPreference.instance.autoCreatePath = autoCreatePath;
            BuilderPreference.instance.awakrInit = awakeInit;

        }


        private void OnGUI()
        {
            var tempT = (GameObject)EditorGUILayout.ObjectField(language_cn ? "生成目标" : "BuildTarget", target, typeof(GameObject), true);
            if (tempT != target)
            {
                className = tempT.name;
            }
            target = tempT;


            path = EditorGUILayout.TextField(language_cn ? "生成路径" : "BuildPath", path);

            className = EditorGUILayout.TextField(language_cn ? "生成类名" : "ClassName", className);

            GUILayout.BeginHorizontal();
            autoCreatePath = GUILayout.Toggle(autoCreatePath, language_cn ? "自动创建目录" : "TryCreateBuildPath");
            GUILayout.EndHorizontal();

            //一个物体有多个相同组件时，开启增量生成将使得组件名唯一，但是名字会更长
            GUILayout.BeginHorizontal();
            increase = GUILayout.Toggle(increase, language_cn ? "增量名称模式" : "IncreaseNameMode");
            GUILayout.EndHorizontal();

            //表明将引用生成为分部类，不会自动调用初始化，否则生成为Mono
            GUILayout.BeginHorizontal();
            part = GUILayout.Toggle(part, language_cn ? "是分部类" : "IsPartialClass");
            GUILayout.EndHorizontal();

            //表明是否生成Awake自动调用
            GUILayout.BeginHorizontal();

            awakeInit = GUILayout.Toggle(awakeInit, language_cn ? "唤醒初始化" : "InitOnAwake");
            GUILayout.EndHorizontal();

            //表明是否生成Awake自动调用
            GUILayout.BeginHorizontal();

            language_cn = GUILayout.Toggle(language_cn, language_cn ? "中文" : "CN");
            GUILayout.EndHorizontal();


            // 路径拖拽
            if (Event.current.type == EventType.DragUpdated)
            {
                DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
                Event.current.Use();
            }
            else if (Event.current.type == EventType.DragPerform)
            {
                DragAndDrop.AcceptDrag();
                foreach (string draggedPath in DragAndDrop.paths)
                {
                    path = draggedPath;
                    break;
                }
                Event.current.Use();
            }


            if (GUILayout.Button("Build"))
            {
                //参数检查
                if (target == null)
                {
                    EditorUtility.DisplayDialog("Target Error", "Target cannot be null", "OK");
                    return;
                }
                if (!autoCreatePath)
                    if (Path.HasExtension(path))
                    {
                        EditorUtility.DisplayDialog("Path Error", "Files with extension names cannot be used as a directory for storing reference scripts", "OK");
                        return;
                    }
                if (!autoCreatePath)
                    if (!Directory.Exists(Path.GetDirectoryName(path)))
                    {
                        EditorUtility.DisplayDialog("Path Error", "Please enter a valid path that exists to store the built reference script", "OK");
                        return;
                    }

                //路径合成
                string filePath = Application.dataPath.Substring(0, Application.dataPath.Length - "Assets".Length)
                    + path.TrimEnd('/') + "/" + className + ".cs";
                //构建写入
                Build(filePath, target, nameSpaceName, className, increase, part);
                //导入资源
                //AssetDatabase.ImportAsset(filePath);
                AssetDatabase.Refresh();
                Debug.Log("Mark Ref Build Completed!");
            }


        }



        const string inhernt = "UnityEngine.MonoBehaviour";
        void Build(string buildPath, GameObject buildTarget, string _namespace, string _class, bool increase, bool part)
        {

            //生成容器
            List<string> buildField = new List<string>();
            List<string> buildInit = new List<string>();

            List<ScriptMark> marks = GetMarks(buildTarget);
            int index = 0;
            foreach (ScriptMark mark in marks)
            {
                //Mark数据准备
                var properties = MaskHelper.SplitToMaskOptions(mark.buildProperty);
                var com = mark.buildTarget;

                //组件属性构建
                string componentFiled = increase ?
                $"public {com.GetType().FullName} {com.gameObject.name}_{com.GetType().Name}_{index} {{ get; set; }} = default;" :
                $"public {com.GetType().FullName} {com.gameObject.name}_{com.GetType().Name} {{ get; set; }} = default;";
                buildField.Add(componentFiled);
                string componentInit = string.Empty;

                //逻辑生成分类
                if (mark.buildTarget.gameObject == buildTarget)
                {
                    //组件初始化
                    componentInit = increase ?
                        $"{com.gameObject.name}_{com.GetType().Name}_{index} = GetComponent<{com.GetType().FullName}>();" :
                        $"{com.gameObject.name}_{com.GetType().Name} = GetComponent<{com.GetType().FullName}>();";
                }
                else
                {
                    //组件初始化
                    componentInit = increase ?
                        $"{com.gameObject.name}_{com.GetType().Name}_{index} = transform.Find(\"{com.gameObject.name}\").GetComponent<{com.GetType().FullName}>();" :
                        $"{com.gameObject.name}_{com.GetType().Name} = transform.Find(\"{com.gameObject.name}\").GetComponent<{com.GetType().FullName}>();";
                }
                buildInit.Add(componentInit);
                foreach (string property in properties)
                {
                    var memberType = ReflectionHelper.GetFieldOrPropertyTypeByName(property, com);
                    string filed = increase ?
                        $"public {binderName}<{memberType.FullName}> {com.gameObject.name}_{com.GetType().Name}_{index}_{property} {{get;set;}}=default;" :
                        $"public {binderName}<{memberType.FullName}> {com.gameObject.name}_{com.GetType().Name}_{property} {{get;set;}}=default;";
                    string init = increase ?
                        $"{com.gameObject.name}_{com.GetType().Name}_{index}_{property} = new {binderName}<{memberType.FullName}>(()=>{com.gameObject.name}_{com.GetType().Name}_{index}.{property},(x)=>{com.gameObject.name}_{com.GetType().Name}_{index}.{property}=x,false);" :
                        $"{com.gameObject.name}_{com.GetType().Name}_{property} = new {binderName}<{memberType.FullName}>(()=>{com.gameObject.name}_{com.GetType().Name}.{property},(x)=>{com.gameObject.name}_{com.GetType().Name}.{property}=x,false);";

                    buildField.Add(filed);
                    buildInit.Add(init);
                }
                index++;
            }



            if (!Directory.Exists(Path.GetDirectoryName(buildPath))) Directory.CreateDirectory(Path.GetDirectoryName(buildPath));
            if (!File.Exists(buildPath)) File.Create(buildPath);
            Debug.Log("TryBuild :" + buildPath);
            using (StreamWriter writer = new StreamWriter(buildPath, false, Encoding.ASCII))
            {
                StringBuilder fields_builder = new StringBuilder();
                foreach (string str in buildField)
                {
                    fields_builder.Append("        ");
                    fields_builder.AppendLine(str);
                }
                StringBuilder init_builder = new StringBuilder();
                foreach (string str in buildInit)
                {
                    init_builder.Append("            ");
                    init_builder.AppendLine(str);
                }

                string model =
@"
/*******************************************************
 * Code Generated By AirFramework
 * DateTime : #DATETIME#
 * UVersion : #VERSION#
 *******************************************************/
using UnityEngine;

namespace #NAMESPACE#
{
    public #PART#class #CLASS# : #INHE#
    {
#FIELDS#

        public void InitRefs()
        {
#INIT#
        }

        #NEWFUNC#
    }
    
}
";
                model = model.Replace("#INHE#", inhernt);
                model = model.Replace("#VERSION#", Application.unityVersion);
                model = model.Replace("#DATETIME#", DateTime.Now.ToString());
                model = model.Replace("#FIELDS#", fields_builder.ToString());
                model = model.Replace("#INIT#", init_builder.ToString());
                model = model.Replace("#NAMESPACE#", _namespace);
                model = model.Replace("#CLASS#", _class);
                model = model.Replace("#PART#", part ? "partial " : string.Empty);
                model = model.Replace("NAMESPACE", FrameworkSettings.instance.defaultNamespace);
                model = model.Replace("#NEWFUNC#", awakeInit ?
@"
        private void Awake()
        {
            InitRefs();
        }
" : string.Empty);




                writer.Write(model);

            }

        }


        List<ScriptMark> GetMarks(GameObject gameObject)
        {
            Queue<Transform> queue = new Queue<Transform>();
            queue.Enqueue(gameObject.transform);
            List<ScriptMark> marks = new List<ScriptMark>();
            while (queue.Count > 0)
            {
                var node = queue.Dequeue();
                foreach (Transform t in node.transform)
                {
                    queue.Enqueue(t);
                }
                var mks = node.GetComponents<ScriptMark>();
                for (int i = 0; i < mks.Length; i++)
                {
                    marks.Add(mks[i]);
                }
            }
            return marks;
        }



    }
}