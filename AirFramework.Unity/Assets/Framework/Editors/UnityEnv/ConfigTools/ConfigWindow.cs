﻿using AirEditor.Config;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using UnityEditor;
using UnityEngine;



namespace AirEditor
{
    public class ConfigCache : ScriptableSingleton<ConfigCache>
    {
        public string generatePath = "Assets/Project/Scripts/ConstModels";
        public string originPath = "ConfigDataTable";


    }

    public class ConfigWindow : EditorWindow
    {
        [MenuItem("ConfigTool", menuItem = "AirFramework/ConfigTool")]
        static void Open()
        {
            var window = GetWindow<ConfigWindow>();
            window.Show();

        }

        bool locked = false;
        Vector2 pos = Vector2.zero;
        private void OnGUI()
        {
            GUILayout.BeginHorizontal();
            ConfigCache.instance.generatePath = EditorGUILayout.TextField("GeneratePath", ConfigCache.instance.generatePath, GUILayout.ExpandWidth(true));
            if (GUILayout.Button("Open", GUILayout.ExpandWidth(false)))
            {
                Application.OpenURL(ConfigCache.instance.generatePath);
            }
            GUILayout.EndHorizontal();

            GUILayout.BeginHorizontal();
            ConfigCache.instance.originPath = EditorGUILayout.TextField("OriginPath", ConfigCache.instance.originPath);
            if (GUILayout.Button("Open", GUILayout.ExpandWidth(false)))
            {
                Application.OpenURL(ConfigCache.instance.originPath);
            }
            GUILayout.EndHorizontal();

            if (GUILayout.Button("Generate All"))
            {
                GenerateAll();
            }


            pos = GUILayout.BeginScrollView(pos);

            locked = false;
            string path = Path.Combine(EditorHelper.ProjectPath, ConfigCache.instance.originPath);
            if (Directory.Exists(path))
                EditorHelper.ForeachDFS(path, (x) =>
                {
                    GUILayout.BeginHorizontal();

                    GUILayout.TextArea(Path.GetFileName(x), GUILayout.ExpandWidth(true));
                    if (GUILayout.Button("Open", GUILayout.ExpandWidth(false)))
                    {
                        Application.OpenURL(x);
                    }
                    GUILayout.EndHorizontal();
                },
                (p) =>
                {
                    string str = Path.GetExtension(p);
                    bool isEditing = Path.GetFileName(p).StartsWith("~");
                    bool isXlsx = (str == ".xlsx");
                    bool result = isXlsx && !isEditing;

                    locked = locked || isEditing;

                    return result;
                });

            GUILayout.EndScrollView();


        }

        private void GenerateAll()
        {
            if (locked) throw new InvalidOperationException("Please close excel");
            //EditorHelper.NotExistCreate(ConfigCache.instance.generatePath);

            string path = Path.Combine(EditorHelper.ProjectPath, ConfigCache.instance.originPath);
            EditorHelper.NotExistCreate(path);
            EditorHelper.ForeachDFS(path, (x) =>
            {
                ExcelStream stream = new ExcelStream(x);
                stream.Read();

                FilterStrategy.InitFilters();
                SyntaxStrategy.InitTypes();

                ITable<string> table = FilterStrategy.GetTable(stream.Data);
                var modelName = Path.GetFileNameWithoutExtension(x);


                modelName = modelName[0].ToString().ToUpper() + modelName.Substring(1, modelName.Length - 1);


                string code = TableToModel.GetCode(table, modelName, modelName);
                stream.Dispose();

                string genPath = Path.Combine(EditorHelper.ProjectPath, ConfigCache.instance.generatePath, modelName + "Model.cs");
                EditorHelper.NotExistCreate(genPath);
                StreamWriter writer = new StreamWriter(genPath, false, System.Text.Encoding.UTF8);
                writer.Write(code);
                writer.Close();
            },
            (p) =>
            {
                string str = Path.GetExtension(p);
                bool result = (str == ".xlsx") && (!Path.GetFileName(str).StartsWith("~"));
                return result;
            });
            AssetDatabase.Refresh();
        }
    }
}