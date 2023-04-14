using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    [FilePath("Assets/Framework/Editors/UnityEnv/Configurations/Framework.Setting.asset")]
    public class FrameworkSettings :ScriptableSingleton<FrameworkSettings>
    {
        public string PanelPath;
        
    }
}
