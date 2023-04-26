using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using UnityEngine;
namespace AirFrameworkEditor
{

    public class MVCGenerateWindow
    {

        [AssetsOnly]
        [OnValueChanged("SaveCache")]
        public GameObject prefab;


        [LabelText("����·��")]
        [FolderPath(AbsolutePath = false, RequireExistingPath = true)]
        [OnValueChanged("SaveCache")]
        public string path;

        [LabelText("�Զ�������Ŀ¼")]
        [OnValueChanged("SaveCache")]
        public bool createChildPath = true;




        public MVCGenerateWindow()
        {
            GetCahce();
        }
        void SaveCache()
        {
            MVCGenCache.Instance.path = path;
            MVCGenCache.Instance.prefab = prefab;
            MVCGenCache.Instance.createChildPath = createChildPath;
        }
        void GetCahce()
        {
            path = MVCGenCache.Instance.path;
            prefab = MVCGenCache.Instance.prefab;
            createChildPath = MVCGenCache.Instance.createChildPath;
        }


        private void TryCreateChildPath(string childPath)
        {
            if (!createChildPath) return;
            FileCreateHandle.CreateAssetFolder(childPath);
        }
        private string GenPath
        {
            get
            {
                string genpath = path;

                if (createChildPath)
                {
                    genpath += "/";
                    genpath += prefab.name;
                    TryCreateChildPath(genpath);
                }
                return genpath;
            }
        }






        private bool Check()
        {
            if (path == null) throw new ArgumentNullException("Path cannot be null");
            if (prefab == null) throw new ArgumentNullException("Prefab cannot be null");

            return true;
        }




        [ButtonGroup]
        [GUIColor(0, 1, 0)]
        [LabelText("View And Controller")]

        public void GenerateVC()
        {
            Check();

            List<MarkData> data = PanelAnalyser.GetData(prefab);
            string viewName = $"{prefab.name}View";
            ViewCodeGen viewGen = new(viewName, data);
            string virePath = $"{GenPath}/{viewName}.cs";

            string controllerName = $"{prefab.name}Controller";


            BehaviourControllerCodeGen controllerCodeGenBehaviour = new(controllerName, viewName, data);
            string behaviourPath = $"{GenPath}/{controllerName}.Behaviour.cs";

            UpdateControllerCodeGen controllerCodeGenUpdate = new(controllerName, viewName, data);
            string updatePath = $"{GenPath}/{controllerName}.Update.cs";
            EventControllerCodeGen controllerCodeGenEvent = new(controllerName, viewName, data);
            string eventPath = $"{GenPath}/{controllerName}.Event.cs";


            viewGen.CreateFileAndClear(virePath);
            controllerCodeGenBehaviour.CreateFileAndClear(behaviourPath);
            controllerCodeGenEvent.CreateFileAndClear(eventPath);
            controllerCodeGenUpdate.CreateFileAndClear(updatePath);

            FileCreateHandle.Refresh();

        }

        [ButtonGroup]
        [GUIColor(0, 1, 0)]
        [LabelText("Only View")]

        public void GenerateView()
        {
            Check();

            List<MarkData> data = PanelAnalyser.GetData(prefab);
            string viewName = $"{prefab.name}View";
            ViewCodeGen viewGen = new(viewName, data);
            string virePath = $"{GenPath}/{viewName}.cs";

            viewGen.CreateFileAndClear(virePath);

            FileCreateHandle.Refresh();

        }



    }
}
