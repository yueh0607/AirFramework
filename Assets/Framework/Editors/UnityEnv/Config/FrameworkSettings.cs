using UnityEditor;

namespace AirFramework.Editor
{
    //[FilePath("Assets/Framework/Editors/UnityEnv/Configurations/Framework.Setting.asset")]
    public class FrameworkSettings : ScriptableSingleton<FrameworkSettings>
    {
        public string authorName = "#unknown#";
        public string defaultNamespace = "MyNamespace";

    }
}
