using UnityEditor;
using UnityEngine;

namespace AirFramework.MV.RefBuild.Editor
{

    public class BuilderPreference : ScriptableSingleton<BuilderPreference>
    {
        public GameObject buildPrefab = null;
        public string className = "";
        public string defaultNameSpace = "AirFramework.MV.RefBuild.Cache";
        public string defaultPath = "Assets/Project/Scripts/RefBuilds";
        public bool increase = false;
        public bool part = false;
        public bool autoCreatePath = true;
        public bool awakrInit = false;
    }
}