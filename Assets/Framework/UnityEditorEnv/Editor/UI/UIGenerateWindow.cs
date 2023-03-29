using Sirenix.OdinInspector;
using Sirenix.Utilities.Editor;
using System.Collections.Generic;
using UnityEngine;
using UIMark = AirFramework.UIMark;
namespace AirFrameworkEditor
{

    public class UIGenerateWindow
    {


        [LabelText("生成路径")]
        [FolderPath(AbsolutePath = false, RequireExistingPath = true)]
        public string path;
        [LabelText("面板名称")]
        public string name;


        [AssetsOnly]
        [OnValueChanged("SetNameByPrefabName")]
        public GameObject prefab;


        private const string KeyWord = "Panel";
        private void SetNameByPrefabName()
        {
            name = prefab.name;
            if(name.EndsWith(KeyWord))
            {
                name=name.Substring(0, name.Length - KeyWord.Length);
            }
        }



        [ButtonGroup]
        [GUIColor(0, 1, 0)]
        [LabelText("生成模板代码")]
       
        public void Generate()
        {
            if (prefab == null)
            {
                Debug.LogError("prefab cannot be null");
            }
            List<UIMark> marks = PanelAnalyser.GetMarks(prefab);

            CreateUIFileHandle.CreateVCByMarks(marks,path,name);

        }
     



    }
}
