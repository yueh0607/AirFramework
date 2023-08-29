using AirEditor;
using UnityEngine;

namespace AirFramework.MV.RefBuild.Editor
{
    [FilePath("FrameworkPerference/RefBuilderCache.asset",FilePathAttribute.LocationType.AssetsFolder)]
    public class BuilderPreference : ScriptableObjectSingleton<BuilderPreference>
    {
        public GameObject buildPrefab = null;
        public string className = "";
        public string defaultNameSpace = "AirFramework.MV.RefBuild.Cache";
        public string defaultPath = "Assets/Project/Scripts/RefBuilds";
        public bool increase = false;
        public bool part = false;
        public bool autoCreatePath = true;
        public bool awakrInit = false;

        public bool Language_CN = true;
    }
}