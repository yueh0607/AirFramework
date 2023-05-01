using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace AirFrameworkEditor
{
    public static class MaskHelper
    {
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
        public static int GetMaskFromIndex(List<int> indexList)
        {
            int mask = 0;
            foreach (int index in indexList)
            {
                mask |= (1 << index);
            }
            return mask;
        }


        public static List<string> GetStringFromIndex(List<string> origin, List<int> index)
        {
            List<string> result = new List<string>();

            foreach (int id in index)
            {
                result.Add(origin[id]);
            }

            return result;
        }


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
        public static List<string> SplitToMaskOptions(string maskString)
        {
            return maskString.Split('|').ToList();
        }
        public static bool IsNothing(string str)
        {
            if(str == null) return true;
            if(str==string.Empty) return true;
            
            return false;
        }
    }
}
