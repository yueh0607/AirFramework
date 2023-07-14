using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace AirFramework.Utility
{
    public static class MaskHelper
    {
        /// <summary>
        /// 根据多选Mask的选项数量和mask获取第几项被选中
        /// </summary>
        /// <param name="mask"></param>
        /// <param name="len"></param>
        /// <returns></returns>
        public static List<int> GetIndexFromMask(int mask, int len)
        {
            List<int> selectedIndexes = new List<int>();
            int maskTemp = mask;

            for (int i = 0; i < len; i++)
            {
                if ((maskTemp & (1 << i)) != 0)
                {
                    selectedIndexes.Add(i);
                }
            }
            return selectedIndexes;
        }
        /// <summary>
        /// 通过第几项被选中，获取mask值
        /// </summary>
        /// <param name="indexList"></param>
        /// <returns></returns>
        public static int GetMaskFromIndex(List<int> indexList)
        {
            int mask = 0;
            foreach (int index in indexList)
            {
                mask |= (1 << index);
            }
            return mask;
        }

        /// <summary>
        /// 通过选项序列，返回选中的选项
        /// </summary>
        /// <param name="origin"></param>
        /// <param name="index"></param>
        /// <returns></returns>
        public static List<T> GetStringFromIndex<T>(List<T> origin, List<int> index)
        {
            List<T> result = new List<T>();

            foreach (int id in index)
            {
                result.Add(origin[id]);
            }

            return result;
        }

        /// <summary>
        /// 通过选中的选项，获取选项索引
        /// </summary>
        /// <param name="origin">不完全选项表</param>
        /// <param name="index">完全选项表</param>
        /// <returns></returns>
        public static List<int> GetIndexFromString(List<string> origin, List<string> index)
        {
            List<int> result = new List<int>();

            foreach (string target in index)
            {
                int id = origin.IndexOf(target);
                if (id < 0) continue;
                result.Add(id);
            }
            return result;
        }

        /// <summary>
        /// 合并字符串
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public static string MergeToMaskString(List<string> str)
        {
            StringBuilder builder = new StringBuilder();
            foreach (var x in str)
            {
                builder.Append(x);
                builder.Append("|");
            }
            return builder.ToString().Trim('|');
        }
        /// <summary>
        /// 分割字符串
        /// </summary>
        /// <param name="maskString"></param>
        /// <returns></returns>
        public static List<string> SplitToMaskOptions(string maskString)
        {
            return maskString.Split('|').ToList();
        }
        /// <summary>
        /// 字符串为null或者empty
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public static bool IsNothing(string str)
        {
            if (str == null) return true;
            if (str == string.Empty) return true;

            return false;
        }
    }
}
