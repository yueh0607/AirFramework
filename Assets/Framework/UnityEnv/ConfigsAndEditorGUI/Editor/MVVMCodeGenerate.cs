using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

namespace AirFramework.Editor
{
    
    public class MVVMCodeGenerate
    {

  
        [LabelText("����·��")]
        [FolderPath(AbsolutePath =false,RequireExistingPath =true)]
        public string path ;

        [AssetsOnly]
        
        public GameObject prefab;

        [ButtonGroup]
        [GUIColor(0,1,0)]
        [LabelText("����ģ�����")]
        public void Generate()
        {

        }
        [ButtonGroup]
        [GUIColor(1, 0.2f, 0.2f)]
        [LabelText("ɾ��ģ�����")]
        public void DeGenerate()
        {

        }
        [ButtonGroup]
        [GUIColor(0.5f, 0.5f, 1f)]
        [LabelText("�������ɴ���")]
        public void ReGenerate()
        {

        }
    }
}
