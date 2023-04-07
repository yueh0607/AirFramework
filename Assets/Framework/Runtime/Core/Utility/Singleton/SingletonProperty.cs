using System;

namespace AirFramework
{
    public static class SingletonProperty<T> where T : class
    {

        private static readonly object locker = new object();
        private volatile static T instance = null;
        public static T Instance
        {
            get
            {
                if (instance == null)
                {
                    lock (locker)
                    {
                        if (instance == null)
                        {
                            instance = Activator.CreateInstance<T>();
                        }
                    }
                }
                return instance;
            }
        }

        public static void Unload() => instance = null;
        public static void Reload() => instance = Activator.CreateInstance<T>();
    }
}
