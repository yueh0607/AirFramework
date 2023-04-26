using AirFramework;
using System;
using System.Collections.Generic;
using UnityEngine;
namespace AirFrameworkEditor
{
    public static class PanelAnalyser
    {
        /// <summary>
        /// 获取一个物体的子物体树上的全部UIMark
        /// </summary>
        /// <param name="root"></param>
        /// <returns></returns>
        public static List<ScriptMark> GetMarks(GameObject root)
        {
            List<ScriptMark> marks = new();
            Queue<Transform> queue = new();

            queue.Enqueue(root.transform);

            while (queue.Count > 0)
            {
                var node = queue.Dequeue();
                var mark = node.GetComponents<ScriptMark>();
                if (mark.Length != 0)
                {
                    foreach (var m in mark) marks.Add(m);
                }
                foreach (Transform child in node)
                {
                    queue.Enqueue(child);
                }
            }
            return marks;
        }
        public static List<MarkData> GetData(List<ScriptMark> marks)
        {
            var markData = new List<MarkData>();
            foreach (var mark in marks)
            {
                markData.Add(new MarkData(mark));
            }
            return markData;
        }
    }

    public class MarkData
    {

        public MarkData(ScriptMark mark)
        {
            this.mark = mark;
        }
        #region 基础信息

        /// <summary>
        /// 获取Mark实例
        /// </summary>
        public ScriptMark mark;

        /// <summary>
        /// 获取Mark标记的组件类型
        /// </summary>
        public Type MarkType => BuildTarget.GetType();
        /// <summary>
        /// 获取标记的组件类型的简单类名
        /// </summary>
        public string TypeName => MarkType.Name;
        /// <summary>
        /// 获取被标记的组件的完全类名
        /// </summary>
        public string FullTypeName => MarkType.FullName;
        /// <summary>
        /// 获取挂在Mark的物体名
        /// </summary>
        public string BuildName => BuildTarget.gameObject.name;
        /// <summary>
        /// 获取被构建的组件实例
        /// </summary>
        public Component BuildTarget => mark.buildTarget;
        #endregion

        #region View
        /// <summary>
        /// 获取ViewField的变量名
        /// </summary>
        public string ViewFieldName => $"{BuildName}_{TypeName}";
        /// <summary>
        /// 获取整个ViewField
        /// </summary>
        public string ViewFiledString => $"public {FullTypeName} {ViewFieldName};";

        public string ViewFindString => $"{ViewFieldName} = transform.Find({BuildName}).GetComponent<{FullTypeName}>();";

        #endregion





    }

    //public static class MarkDataExtension
    //{
    //    public static string[] GetEventList(this List<MarkData> data)
    //    {
    //        List<string> strings = new List<string>();

    //        foreach (MarkData item in data)
    //        {
    //            string x = item.EventMethodText;
    //            if (x != string.Empty)
    //            {
    //                strings.Add(x);
    //            }
    //        }
    //        return strings.ToArray();
    //    }
    //    public static string[] GetViewFieldList(this List<MarkData> data)
    //    {
    //        List<string> strings = new List<string>();

    //        foreach (MarkData item in data)
    //        {
    //            string x = item.ViewFiledString;
    //            if (x != string.Empty)
    //            {
    //                strings.Add(x);
    //            }
    //        }
    //        return strings.ToArray();
    //    }

    //    public static List<string> GetBindCode(this List<MarkData> data)
    //    {
    //        List<string> r = new List<string>();
    //        foreach (MarkData item in data)
    //        {
    //            string bindstr = item.BindStringText;
    //            if (bindstr != string.Empty)
    //                r.Add(bindstr);
    //        }
    //        return r;
    //    }
    //    public static List<string> GetUnBindCode(this List<MarkData> data)
    //    {
    //        List<string> r = new List<string>();
    //        foreach (MarkData item in data)
    //        {
    //            string bindstr = item.UnBindStringText;
    //            if (bindstr != string.Empty)
    //                r.Add(bindstr);
    //        }
    //        return r;
    //    }
    //}
}
