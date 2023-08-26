using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace AirEditor
{

    public class LogFilterInfo : ScriptableSingleton<LogFilterInfo>
    {
        public List<string> CustomInfos = new List<string>();
        public List<string> BuiltInInfos = new List<string>();
        public bool ShowBuiltIn = false;
    }

    public static class HideLog
    {
        static bool ContainFile(string str)
        {
            bool exist = false;
            foreach (var s in LogFilterInfo.instance.BuiltInInfos)
            {
                if (exist) break;
                exist |= str.Contains(s);
            }
            foreach (var s in LogFilterInfo.instance.CustomInfos)
            {
                if (exist) break;
                exist |= str.Contains(s);
            }
            return exist;
        }

        [UnityEditor.Callbacks.OnOpenAsset(0)]
        static bool OnOpenAsset(int instanceID, int line)
        {
            string assetPath = AssetDatabase.GetAssetPath(instanceID);

            //不存在直接手动打开
            if (!ContainFile(assetPath))
            {
                UnityEditorInternal.InternalEditorUtility.OpenFileAtLineExternal(Path.Combine(
                    EditorHelper.ProjectPath, assetPath), line);
                return false;
            }
            //存在忽略信息，则反射堆栈信息
            string stackTrace = GetStackTrace();

            if (!string.IsNullOrEmpty(stackTrace))
            {
                //正则匹配切分路径，逐路径操作
                System.Text.RegularExpressions.Match matches = System.Text.RegularExpressions.Regex.Match(stackTrace, @"\(at (.+)\)", System.Text.RegularExpressions.RegexOptions.IgnoreCase);
                string pathLine = "";
                while (matches.Success)
                {
                    pathLine = matches.Groups[1].Value;
                    //忽略信息不存在，手动切分组装路径并打开
                    if (!ContainFile(pathLine))
                    {
                        int splitIndex = pathLine.LastIndexOf(":");
                        string path = pathLine.Substring(0, splitIndex);
                        line = System.Convert.ToInt32(pathLine.Substring(splitIndex + 1));
                        string fullPath = Application.dataPath.Substring(0, Application.dataPath.LastIndexOf("Assets"));
                        fullPath = fullPath + path;
                        UnityEditorInternal.InternalEditorUtility.OpenFileAtLineExternal(fullPath.Replace('/', '\\'), line);
                        break;
                    }
                    matches = matches.NextMatch();
                }
                return true;
            }
            return false;
        }

        static string GetStackTrace()
        {
            var ConsoleWindowType = typeof(UnityEditor.EditorWindow).Assembly.GetType("UnityEditor.ConsoleWindow");
            var fieldInfo = ConsoleWindowType.GetField("ms_ConsoleWindow", System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.NonPublic);
            var consoleInstance = fieldInfo.GetValue(null);
            if (consoleInstance != null)
            {
                if ((object)UnityEditor.EditorWindow.focusedWindow == consoleInstance)
                {
                    var ListViewStateType = typeof(UnityEditor.EditorWindow).Assembly.GetType("UnityEditor.ListViewState");
                    fieldInfo = ConsoleWindowType.GetField("m_ListView", System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.NonPublic);
                    var listView = fieldInfo.GetValue(consoleInstance);
                    fieldInfo = ListViewStateType.GetField("row", System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Public);
                    int row = (int)fieldInfo.GetValue(listView);
                    fieldInfo = ConsoleWindowType.GetField("m_ActiveText", System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.NonPublic);
                    string activeText = fieldInfo.GetValue(consoleInstance).ToString();
                    return activeText;
                }
            }
            return null;
        }

    }
    public class LoggerFilter : EditorWindow
    {

        [MenuItem("LoggerFilter", menuItem = "AirFramework/LoggerFilter")]
        static void ShowWindow()
        {
            var window = GetWindow<LoggerFilter>();
            window.Show();
        }

        void DrawTextPathArea(string path, bool expand = true)
        {
            string path0 = Path.Combine(EditorHelper.ProjectPath, path);
            bool exist = File.Exists(path0);
            if (!exist)
            {
                Color temp = GUI.color;
                GUI.color = Color.red;

                GUILayout.TextArea(path + "     (Invalid Path)", GUILayout.ExpandWidth(expand));
                GUI.color = temp;
            }
            else
            {
                GUILayout.TextArea(path, GUILayout.ExpandWidth(expand));
            }
        }
        void DragFileToPath(ref string str)
        {
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
                    str = draggedPath;
                    break;
                }
                Event.current.Use();
            }

        }
        void DrawList(ref List<string> list, ref Vector2 pos)
        {
            pos = EditorGUILayout.BeginScrollView(pos);
            foreach (var item in list)
            {
                GUILayout.BeginHorizontal();
                DrawTextPathArea(item);
                if (GUILayout.Button("Open", GUILayout.ExpandWidth(false)))
                {
                    Application.OpenURL(EditorHelper.ProjectPath + "/" + item);
                }
                if (GUILayout.Button("Remove", GUILayout.ExpandWidth(false)))
                {
                    removeQueue.Enqueue(item);
                }
                GUILayout.EndHorizontal();
            }
            EditorGUILayout.EndScrollView();
            while (removeQueue.Count > 0) list.Remove(removeQueue.Dequeue());
        }
        void AddTo(ref List<string> list, string str)
        {
            if (str == null || str == string.Empty) return;
            list.RemoveAll((x) => x == str);
            list.Add(str);
        }

        Vector2 POS, POS2;
        string add = null;
        Queue<string> removeQueue = new Queue<string>();
        int selected = 0;
        readonly string[] bar = new string[2] { "Custom", "BuiltIn" };



        private void OnGUI()
        {
            selected = GUILayout.Toolbar(selected, bar);
            //处理路径拖拽
            DragFileToPath(ref add);
            GUILayout.BeginHorizontal();
            //路径输入
            add = EditorGUILayout.TextField("Ignore FileName", add, GUILayout.ExpandWidth(true));


            switch (selected)
            {
                case 0:
                    {
                        if (GUILayout.Button("Add", GUILayout.ExpandWidth(false)))
                            AddTo(ref LogFilterInfo.instance.BuiltInInfos, add);
                        GUILayout.EndHorizontal();

                        DrawList(ref LogFilterInfo.instance.BuiltInInfos, ref POS);
                        break;
                    }
                case 1:
                    {
                        if (GUILayout.Button("Add", GUILayout.ExpandWidth(false)))
                            AddTo(ref LogFilterInfo.instance.CustomInfos, add);

                        GUILayout.EndHorizontal();
                        DrawList(ref LogFilterInfo.instance.CustomInfos, ref POS2);
                        break;
                    }
            }




        }


    }
}
