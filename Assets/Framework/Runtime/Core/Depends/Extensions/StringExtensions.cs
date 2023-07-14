using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static partial class StringExtensions
    {
        /// <summary>
        /// 返回区间字符串，包含首末
        /// </summary>
        /// <param name="str"></param>
        /// <param name="startIndex"></param>
        /// <param name="endIndex"></param>
        /// <returns></returns>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static string SubSection(this string str, int startIndex, int endIndex)
        {
            return str.Substring(startIndex, str.Length - endIndex);
        }

        /// <summary>
        /// 是否两端包含目标字符串(也就是StartWith||EndWith)
        /// </summary>
        /// <param name="str"></param>
        /// <param name="target"></param>
        /// <returns></returns>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool BothEndContain(this string str, string target)
        {
            return str.StartsWith(target) || str.EndsWith(target);
        }

    }



}
