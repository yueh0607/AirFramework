using AirEditor;
using System.Collections.Generic;
using UnityEngine;

namespace AirEditor
{

    [FilePath("FrameworkPerference/LogFilterInfo.asset", FilePathAttribute.LocationType.AssetsFolder)]
    public class LogFilterInfo : ScriptableObjectSingleton<LogFilterInfo>
    {
        [SerializeField]
        public List<string> CustomInfos = new List<string>();

        public List<string> BuiltInInfos = new List<string>();
        public bool ShowBuiltIn = false;
    }
}