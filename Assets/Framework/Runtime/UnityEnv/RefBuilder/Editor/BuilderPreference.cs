using UnityEditor;

namespace AirFramework.Utility.RefBuild.Editor
{

    public class BuilderPreference : ScriptableSingleton<BuilderPreference>
    {
        public string defaultNameSpace = "AirFramework.Utility.RefBuild.Cache";
        public string defaultPath = "Assets/Project/Scripts/RefBuilds";
        public bool increase = false;
        public bool part = false;
        public bool autoCreatePath = true;
        public bool awakrInit = false;
    }
}