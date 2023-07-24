using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class FloatExtensions
    {
        /// <summary>
        /// float在指定位小数内相等
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="bitCount"></param>
        /// <returns></returns>
        public static bool RoundEqual(this float a, float b, int bitCount = 6)
        {
            
            return Math.Abs(a - b) < Math.Pow(10D, -bitCount);
        }
        /// <summary>
        /// double在指定位小数内相等
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="bitCount"></param>
        /// <returns></returns>
        public static bool RoundEqual(this double a, double b, int bitCount = 15)
        {
            
            return Math.Abs(a - b) < Math.Pow(10D, -bitCount);
        }
        /// <summary>
        /// 四舍五入到整数
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <param name="bitCount"></param>
        /// <returns></returns>
        public static int RoundToInt(this float a)
        {
            return (int)(Math.Round(a) + 0.5D);
        }
        /// <summary>
        /// 四舍五入到整数
        /// </summary>
        /// <param name="a"></param>
        /// <returns></returns>
        public static int RoundToInt(this double a)
        {
            return (int)(Math.Round(a)+0.5D);
        }



    }
}
