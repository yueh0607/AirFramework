using UnityEngine;

namespace AirFramework
{
    public static class MonoSingletonProperty<T> where T : MonoBehaviour
    {

        private static T instance = null;
        public static T Instance
        {
            get
            {
                if (instance == null) InitializeAfterSceneLoad();
                return instance;
            }
        }

        public static void InitializeAfterSceneLoad()
        {
            if (instance != null) return;
            GameObject container = new GameObject(typeof(T).Name);
            UnityEngine.Object.DontDestroyOnLoad(container);
            instance = container.AddComponent<T>();
        }

        public static void Unload()
        {
            UnityEngine.Object.Destroy(instance.gameObject);
            instance = null;
        }
        public static void Reload()
        {
            Unload();
            InitializeAfterSceneLoad();
        }
    }
}
