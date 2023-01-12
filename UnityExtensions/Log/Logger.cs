using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static partial class Air
    {
#if UNITY_EDITOR
        public static void L(this object obj)
        {
            Debug.Log(obj.ToString());
        }
        public static void E(this object obj)
        {
            Debug.LogError(obj.ToString());
        }
        public static void W(this object obj)
        {
            Debug.LogWarning(obj.ToString());
        }
        public static void A(this object obj)
        {
            Debug.LogAssertion(obj.ToString());
        }
#endif
    }
}
