using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

namespace AirFramework.Editor
{
    
    public class MVVMCodeGenerate
    {

  
        [LabelText("生成路径")]
        [FolderPath(AbsolutePath =false,RequireExistingPath =true)]
        public string path ;

        [AssetsOnly]
        
        public GameObject prefab;

        [ButtonGroup]
        [GUIColor(0,1,0)]
        [LabelText("生成模板代码")]
        public void Generate()
        {

        }
        [ButtonGroup]
        [GUIColor(1, 0.2f, 0.2f)]
        [LabelText("删除模板代码")]
        public void DeGenerate()
        {

        }
        [ButtonGroup]
        [GUIColor(0.5f, 0.5f, 1f)]
        [LabelText("重新生成代码")]
        public void ReGenerate()
        {

        }
    }
}
