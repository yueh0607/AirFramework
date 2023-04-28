using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class HashSet_Ex 
    {
        #region HashSet

        public static bool TryAdd<T>(this ISet<T> set, T key)
        {
            if (set.Contains(key))
            {
                return false;
            }
            set.Add(key); return true;
        }
        public static bool TryRemove<T>(this ISet<T> set, T key)
        {
            if (set.Contains(key))
            {
                set.Remove(key); return true;
            }
            return false;
        }


        #endregion
    }
}
