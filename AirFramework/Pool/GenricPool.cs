using System;
using System.Collections.Generic;

namespace AirFramework
{
    internal class GenricPool<T> : Singleton<GenricPool<T>> ,IPool<T> where T : new()
    {
        public int Count => pool.Count;

        private Func<T> onCreateItem = DefaultCreate;
        private Action<T> onDestroyItem = null;
        private Action<T> onAllocateItem = null;
        private Action<T> onReleaseItem = null;

        private Stack<T> pool = new Stack<T>();

        private static T DefaultCreate()
        {
            return new T();
        }
        public T Allocate()
        {
            if(pool.Count == 0)
            {
                pool.Push(onCreateItem());
            }
            return pool.Pop();
        }

        public void Preload(int count)
        {
            for(int i=0; i<count; i++) pool.Push(onCreateItem());
        }

        public void Release(T obj)
        {
            onReleaseItem?.Invoke(obj);
            pool.Push(obj);
        }

        public void Unload(int count)
        {
            for (int i = 0; i < count; i++)
            {
                T temp = pool.Pop();
                onDestroyItem?.Invoke(temp);
            }
        }
      
        public void Custom(Func<T> onCreateItem, Action<T> onDestroyItem , Action<T> onReleaseItem , Action<T> onAllocateItem )
        {
            this.onCreateItem = onCreateItem == null ? DefaultCreate : onCreateItem;
            this.onReleaseItem = onReleaseItem;
            this.onAllocateItem = onAllocateItem;
            this.onDestroyItem = onDestroyItem;
        }
    }
}