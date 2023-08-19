using UnityEditor;
using UnityEngine;
using System.IO;

namespace AirEditor
{
    public class FileBrowserWindow : EditorWindow
    {
        [MenuItem("AirFramework/FileBrowser")]
        public static void ShowWindow()
        {
            EditorWindow.GetWindow(typeof(FileBrowserWindow), false, "File Browser");
        }

        private void OnGUI()
        {
            GUILayout.BeginHorizontal();
            GUILayout.Label("Persistent Data Path: " + Application.persistentDataPath,GUILayout.ExpandWidth(true));
            var color = GUI.color;
            GUI.color = Color.cyan;
            if (GUILayout.Button("Open",GUILayout.ExpandWidth(false)))
            {
                Application.OpenURL(Application.persistentDataPath);
            }
            GUI.color = color;
            GUILayout.EndHorizontal();
            ListFilesInPersistentDataPath();
          
        }

        private void ListFilesInPersistentDataPath()
        {
            string persistentDataPath = Application.persistentDataPath;

            if (Directory.Exists(persistentDataPath))
            {
                string[] files = Directory.GetFiles(Application.persistentDataPath, "*", SearchOption.AllDirectories);

                if (files.Length > 0)
                {
                    foreach (string filePath in files)
                    {
                        GUILayout.BeginHorizontal();
                        var color = GUI.color;
                        GUI.color = Color.yellow;
                        GUILayout.Label(Path.GetRelativePath(Application.persistentDataPath,filePath), new GUIStyle(EditorStyles.textArea), GUILayout.Width(EditorGUIUtility.currentViewWidth * 0.7f));


                        GUI.color = Color.green;
                        if (GUILayout.Button("Open"))
                        {
                            Application.OpenURL(filePath);
                        }
              
                        GUI.color = Color.red;
                        if (GUILayout.Button("Delete"))
                        {
                            File.Delete(filePath);
                        }
                        GUI.color = color;
                        GUILayout.EndHorizontal();
                    }
                }
                else
                {
                    GUILayout.Label("No files found in the persistent data path.");
                }
            }
            else
            {
                GUILayout.Label("Persistent data path does not exist.");
            }
        }
    }
}