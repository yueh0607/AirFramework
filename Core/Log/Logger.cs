using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static partial class Air
    {
#if !UNITY_EDITOR
        public static void L(this object obj)
        {
            Console.WriteLine($"Log:{$"Log:{obj.ToString()}"}");
        }
        public static void E(this object obj)
        {
            Console.WriteLine($"Error:{obj.ToString()}");
        }
        public static void W(this object obj)
        {
            Console.WriteLine($"Warn:{obj.ToString()}");
        }
        public static void A(this object obj)
        {
            throw new Exception($"Assert:{obj.ToString()}");
        }
#endif
    }
}
