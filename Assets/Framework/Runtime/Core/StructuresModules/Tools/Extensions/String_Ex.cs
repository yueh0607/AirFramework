using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class String_Ex
    {
        /// <summary>
        /// 返回区间字符串，包含首末
        /// </summary>
        /// <param name="str"></param>
        /// <param name="start"></param>
        /// <param name="end"></param>
        /// <returns></returns>
        public static string SubZone(this string str,int start,int end)
        {
            return str.Substring(start, str.Length - end);
        }

      

    }


   
}
