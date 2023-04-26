using UnityEngine;

namespace AirFrameworkEditor
{
    [FilePath("Assets/Framework/Editors/UnityEnv/Configurations/Framework.MVCChache.asset")]
    public class MVCGenCache : ScriptableSingleton<MVCGenCache>
    {
        public GameObject prefab = null;
        public string path = "Assets/Project/Scripts/MVC";
        public bool createChildPath = true;
    }
}
