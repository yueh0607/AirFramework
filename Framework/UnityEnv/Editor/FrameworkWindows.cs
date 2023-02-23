using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using Sirenix.Utilities;
using Sirenix.Utilities.Editor;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using UnityEditor;
using UnityEngine;

namespace AirFramework.Editor
{
    
    public class FrameworkWindows :OdinMenuEditorWindow
    {
        [MenuItem("Framework/Open")]
        public static void Open()
        {
            var window = GetWindow<FrameworkWindows>();
            window.position = GUIHelper.GetEditorWindowRect().AlignCenter(800, 600);
        }

        protected override OdinMenuTree BuildMenuTree()
        {
            var tree = new OdinMenuTree(supportsMultiSelect: false);
            tree.Add("关于", new About(),EditorIcons.Info);
            tree.Add("日志管理",new LogSettings(),EditorIcons.SettingsCog);
            tree.Add("UI代码生成", new MVVMCodeGenerate(),EditorIcons.Flag);
            return tree;
        }

       
    }
}
