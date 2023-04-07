namespace AirFramework
{
    public abstract class Singleton<T> where T : Singleton<T>
    {
        public static T Instance => SingletonProperty<T>.Instance;
        protected Singleton() { }


        public static void Unload() => SingletonProperty<T>.Unload();
        public static void Reload() => SingletonProperty<T>.Reload();
    }
}
