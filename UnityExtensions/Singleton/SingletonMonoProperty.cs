using UnityEngine;

namespace AirFramework
{
    public sealed class SingletonMonoProperty<T> where T:MonoBehaviour
    {
        private static T instance = null;
        private static bool initialized = false;
        public static bool Initialized => initialized;
        private static bool autoReset = false;
        //Set this value will reset the Instance
        public static bool AutoReset
        {
            get => autoReset;
            set
            {
                if (value)
                {
                    Unload();
                }
                autoReset = value;
            }
        }
        public static T Instance
        {
            get
            {
                //不保证线程安全
                if (instance == null && !initialized)
                {
                    GameObject container = new GameObject();
                    container.name = "Mono(" + typeof(T) + ")";
                    instance = container.AddComponent<T>();
                    if (!autoReset) UnityEngine.Object.DontDestroyOnLoad(container);
                    initialized = true;
                }
                return instance;
            }
        }
        public static void Load()
        {
            _ = Instance;
        }
        public static void Unload()
        {
            if (instance != null)
            {
                UnityEngine.Object.Destroy(instance.gameObject);
                initialized = false;
                instance = null;
            }
        }
        protected SingletonMonoProperty() { }
    }
}
