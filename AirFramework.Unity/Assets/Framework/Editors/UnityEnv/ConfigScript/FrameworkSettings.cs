using UnityEditor;

namespace AirEditor
{
    [FilePath("FrameworkPerference/FrameworkEditorGlobalCache.asset",FilePathAttribute.LocationType.AssetsFolder)]
    public class FrameworkSettings : ScriptableObjectSingleton<FrameworkSettings>
    {
        public string authorName = "#unknown#";
        public string defaultNamespace = "MyNamespace";

    }
}
