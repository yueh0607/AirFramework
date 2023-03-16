using AirFramework;
using Sirenix.OdinInspector.Editor;
using Sirenix.Utilities;
using Sirenix.Utilities.Editor;
using UnityEditor;
using UnityEngine;

namespace AirFrameworkEditor
{

    public class FrameworkEditor : OdinMenuEditorWindow
    {
        //[SerializeField]
        //RuntimeConfig config_runtime;

    

        [MenuItem("Framework/Open")]
        public static void Open()
        {

            var window = GetWindow<FrameworkEditor>();
            window.position = GUIHelper.GetEditorWindowRect().AlignCenter(800, 600);
        }

        protected override OdinMenuTree BuildMenuTree()
        {
            var tree = new OdinMenuTree(supportsMultiSelect: false);
            tree.Add("����", new About(),EditorIcons.Info);
            //tree.Add("��־����",new LogSettings(),EditorIcons.SettingsCog);
            tree.Add("UI��������", new MVVMCodeGenerate(),EditorIcons.Flag);
            return tree;
        }



        //private static RuntimeConfig instance_Config = null;
        //public static RuntimeConfig RuntimeGetRuntimeConfig()
        //{

        //    if (instance_Config == null)
        //    {
        //        instance_Config  = Resources.Load<RuntimeConfig>("RuntimeInfo");
        //    }
        //    return instance_Config;
        //}
       
    }
}
