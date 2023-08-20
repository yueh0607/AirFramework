using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Scripting;

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


        static bool Contain(string str)
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
            string stackTrace = GetStackTrace();


            if (!string.IsNullOrEmpty(stackTrace))
            {
                System.Text.RegularExpressions.Match matches = System.Text.RegularExpressions.Regex.Match(stackTrace, @"\(at (.+)\)", System.Text.RegularExpressions.RegexOptions.IgnoreCase);
                string pathLine = "";
                while (matches.Success)
                {
                    pathLine = matches.Groups[1].Value;

                    if (!Contain(pathLine))
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

        bool showBuiltIn = false;
        Vector2 POS, POS2;
        string add = null;
        Queue<string> removeQueue = new Queue<string>();
        int selected = 0;
        string[] bar = new string[2] { "Custom", "BuiltIn" };
        private void OnGUI()
        {
            GUILayout.BeginHorizontal();

            add = EditorGUILayout.TextField("Ignore FileName", add, GUILayout.ExpandWidth(true));

            if (GUILayout.Button("Add"))
                if (add != null && add != string.Empty)
                {
                    if (selected==1)
                    {
                        //add = add.TrimStart('&');
                        LogFilterInfo.instance.BuiltInInfos.RemoveAll((x) => x == add);
                        LogFilterInfo.instance.BuiltInInfos.Add(add);
                    }
                    else if(selected==0) 
                    {
                        LogFilterInfo.instance.CustomInfos.RemoveAll((x) => x == add);
                        LogFilterInfo.instance.CustomInfos.Add(add);
                    }
                }
                else
                {
                    throw new InvalidOperationException("Ignore FileName cannot be null");
                }
            GUILayout.EndHorizontal();

            //LogFilterInfo.instance.ShowBuiltIn = EditorGUILayout.Toggle("Show BuiltIn", LogFilterInfo.instance.ShowBuiltIn);

            selected = GUILayout.Toolbar(selected, bar);


            if (selected == 1)
            {


                POS = EditorGUILayout.BeginScrollView(POS);
                foreach (var item in LogFilterInfo.instance.BuiltInInfos)
                {
                    GUILayout.BeginHorizontal();
                    GUILayout.TextArea(item, GUILayout.ExpandWidth(true));
                    if (GUILayout.Button("Remove", GUILayout.ExpandWidth(false)))
                    {
                        removeQueue.Enqueue(item);
                    }
                    GUILayout.EndHorizontal();
                }
                EditorGUILayout.EndScrollView();

                while (removeQueue.Count > 0) LogFilterInfo.instance.BuiltInInfos.Remove(removeQueue.Dequeue());

            }

            else if (selected == 0)
            {

                POS2 = EditorGUILayout.BeginScrollView(POS2);
                foreach (var item in LogFilterInfo.instance.CustomInfos)
                {
                    GUILayout.BeginHorizontal();
                    GUILayout.TextArea(item, GUILayout.ExpandWidth(true));
                    if (GUILayout.Button("Remove", GUILayout.ExpandWidth(false)))
                    {
                        removeQueue.Enqueue(item);
                    }
                    GUILayout.EndHorizontal();
                }

                EditorGUILayout.EndScrollView();

                while (removeQueue.Count > 0) LogFilterInfo.instance.CustomInfos.Remove(removeQueue.Dequeue());
            }
        }


    }
}
