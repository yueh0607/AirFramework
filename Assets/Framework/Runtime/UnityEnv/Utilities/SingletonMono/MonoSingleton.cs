using UnityEngine;

namespace AirFramework
{
    public class MonoSingleton<T> : MonoBehaviour where T : MonoSingleton<T>
    {

        protected MonoSingleton() { }
        public static T Instance => MonoSingletonProperty<T>.Instance;


        public static void InitializeAfterSceneLoad() => MonoSingletonProperty<T>.InitializeAfterSceneLoad();

        public static void Unload() => MonoSingletonProperty<T>.Unload();
        public static void Reload() => MonoSingletonProperty<T>.Reload();
    }
}
