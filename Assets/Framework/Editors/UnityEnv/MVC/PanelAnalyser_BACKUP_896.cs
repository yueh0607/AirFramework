using AirFramework;
using System;
using System.Collections.Generic;
using UnityEngine;
namespace AirFrameworkEditor
{
    public static class PanelAnalyser
    {
        /// <summary>
<<<<<<< HEAD
        /// 获取一个物体的子物体树上的全部UIMark.
=======
        /// 获取一个物体的子物体树上的全部UIMark。
>>>>>>> bbae47320db8f15ddc39700f18a9b08c5c05235e
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

        public static void RemoveMarks(GameObject root)
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
                    foreach (var m in mark) Component.DestroyImmediate(m,true);
                }
                foreach (Transform child in node)
                {
                    queue.Enqueue(child);
                }
            }
            Debug.Log("Remove Marks Completed!");
        }
        public static List<MarkData> GetData(List<ScriptMark> marks,GameObject root)
        {
            var markData = new List<MarkData>();
            foreach (var mark in marks)
            {
                markData.Add(new MarkData(mark,root));
            }
            return markData;
        }

        public static List<MarkData> GetData(GameObject root)
        {
            return GetData(GetMarks(root),root);
        }


    }

    public class MarkData
    {

        public GameObject Panel { get; set; }
        public MarkData(ScriptMark mark,GameObject panel)
        {
            this.Mark = mark;
            this.Panel = panel;
        }
        #region 基础信息

        /// <summary>
        /// 获取Mark实例
        /// </summary>
        public ScriptMark Mark { get; set; }

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
        /// 获取挂Mark的物体名
        /// </summary>
        public string BuildName => BuildTarget.gameObject.name;
        /// <summary>
        /// 获取被构建的组件实例
        /// </summary>
        public Component BuildTarget => Mark.buildTarget;
        #endregion

        #region View
        /// <summary>
        /// 获取ViewField的变量名
        /// </summary>
        public string ViewFieldName => $"{BuildName}_{TypeName}";
        /// <summary>
        /// 获取整个ViewField
        /// </summary>
        public string ViewFieldString => $"public {FullTypeName} {ViewFieldName};";

        public string ViewFindString
        {
            get
            {
                if(BuildName==Panel.name) return $"{ViewFieldName} = transform.GetComponent<{FullTypeName}>();";
                return $"{ViewFieldName} = transform.Find(\"{BuildName}\").GetComponent<{FullTypeName}>();";
            }
            
        }

        public bool WithProperty => !MaskHelper.IsNothing(Mark.buildProperty);
        public List<string> ViewPortString
        {
            get
            {
                return MaskHelper.SplitToMaskOptions(Mark.buildProperty);
            }
        }
        #endregion

    }

}
