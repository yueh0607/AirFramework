using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RootFramework
{
    public interface IPoolable<T>
    {
        T OnCreateItem();
        void OnDestroyItem(T item);
        void OnReleaseItem(T item);
        void OnAllocateItem(T item);
    }
}
