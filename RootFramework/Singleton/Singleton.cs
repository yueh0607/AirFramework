using System;

namespace RootFramework
{
    public class Singleton<T> where T : Singleton<T>
    {
        private static readonly object _instanceLock = new object();

        //volatile防止线程优化
        private volatile static T instance;

        private static bool initialized = false;
        public static bool Initialized => initialized;
        public static T Instance
        {
            get
            {
                //Double Check实现线程安全
                if (instance == null)
                {
                    lock (_instanceLock)
                    {
                        if (instance == null && !initialized)
                        {

                            instance = Activator.CreateInstance<T>();
                            initialized = true;
                        }
                    }
                }
                return instance;
            }
        }

        public static void Unload()
        {
            if (instance != null)
            {
                initialized = false;
                instance = null;
            }
        }
        protected Singleton() { }



    }
}