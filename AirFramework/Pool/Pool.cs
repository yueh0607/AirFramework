using System;

namespace AirFramework
{
    public static class Pool
    {
        public static T Allocate<T>() where T : new()
        {
            return GenricPool<T>.Instance.Allocate();
        }
        public static void Release<T>(T item) where T : new()
        {
            GenricPool<T>.Instance.Release(item);
        }
        public static void Dispose<T>() where T : new()
        {
            GenricPool<T>.Instance.Unload(GenricPool<T>.Instance.Count);
            GenricPool<T>.Unload();
        }
        public static void Custom<T>(Func<T> onCreateItem,Action<T> onDestroyItem = null,Action<T> onReleaseItem=null,Action<T> onAllocateItem=null) where T : new()
        {
            GenricPool<T>.Instance.Custom(onCreateItem, onDestroyItem, onReleaseItem, onAllocateItem);
        }
    }
}