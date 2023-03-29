using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AirFramework;
using Codice.Client.BaseCommands;
using System.Text;

namespace AirFrameworkEditor
{
    public static class PanelAnalyser
    {
        /// <summary>
        /// 获取一个物体的子物体树上的全部UIMark
        /// </summary>
        /// <param name="root"></param>
        /// <returns></returns>
        public static List<UIMark> GetMarks(GameObject root)
        {
            List<UIMark> marks = new();
            Queue<Transform> queue = new();

            queue.Enqueue(root.transform);

            while (queue.Count > 0)
            {
                var node = queue.Dequeue();
                var mark = node.GetComponents<UIMark>();
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
        public static List<MarkData> GetData(List<UIMark> marks)
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

        private static Dictionary<Type, string> map = new()
            {
                {typeof(UnityEngine.UI.Text),string.Empty },
                {typeof(UnityEngine.UI.Image),string.Empty},

                {typeof(UnityEngine.UI.Button),"private void #EVENT#()" },
                {typeof(UnityEngine.UI.Slider),"private void #EVENT#()"},
                {typeof(UnityEngine.UI.InputField),"private void #EVENT#(string text)"}
            };
        private static Dictionary<Type, string> map_name = new()
            {
                {typeof(UnityEngine.UI.Text),string.Empty },
                {typeof(UnityEngine.UI.Image),string.Empty},

                {typeof(UnityEngine.UI.Button),"OnClick_#NAME#_Button" },
                {typeof(UnityEngine.UI.Slider),"OnValueChnaged_#NAME#_Slider"},
                {typeof(UnityEngine.UI.InputField),"OnValueChanged_#NAME#_InputField"}
            };
        public MarkData(UIMark mark)
        {
            this.mark = mark;
        }


        public UIMark mark;

        public Type MarkType => mark.buildTarget.GetType();
        public string TypeName => MarkType.Name;
        public string FullTypeName => MarkType.FullName;

        public string BuildName => mark.buildName;

        public Component BuildTarget => mark.buildTarget;
        public string ViewFieldName => $"{BuildName}_{TypeName}";
        public string ViewFiledString => $"public {FullTypeName} {ViewFieldName};";
        public string EventName
        {
            get
            {
                string str = string.Empty;
                if (map.ContainsKey(MarkType) && map_name.ContainsKey(MarkType) && map[MarkType] != string.Empty && map_name[MarkType] != string.Empty)
                {
                    str = map_name[MarkType].Replace("#NAME#", BuildName);

                }
                return str;
            }
        }
        public string EventMethod
        {
            get
            {
                string str = string.Empty;
                if (map.ContainsKey(MarkType) && map_name.ContainsKey(MarkType) && map[MarkType] != string.Empty && map_name[MarkType] != string.Empty)
                {
                    str = map[MarkType].Replace("#EVENT#", EventName);

                }
                return str;
            }
        }

        public string BindString
        {
            get
            {
                string str = string.Empty;
                string eventName = EventName;
                if (eventName != string.Empty)
                {
                    str = $"View.{ViewFieldName}.Bind({EventName});";
                }
                return str;
            }
        }
        public string UnBindString
        {
            get
            {
                string str = string.Empty;
                string eventName = EventName;
                if (eventName != string.Empty)
                {
                    str = $"View.{ViewFieldName}.UnBind({EventName});";
                }
                return str;
            }
        }
    }

    public static class MarkDataExtension
    {
        public static string[] GetEventList(this List<MarkData> data)
        {
            List<string> strings = new List<string>();

            foreach (MarkData item in data)
            {
                string x = item.EventMethod;
                if (x != string.Empty)
                {
                    strings.Add(x);
                }
            }
            return strings.ToArray();
        }
        public static string[] GetViewFieldList(this List<MarkData> data)
        {
            List<string> strings = new List<string>();

            foreach (MarkData item in data)
            {
                string x = item.ViewFiledString;
                if (x != string.Empty)
                {
                    strings.Add(x);
                }
            }
            return strings.ToArray();
        }

        public static List<string> GetBindCode(this List<MarkData> data)
        {
            List<string> r = new List<string>();
            foreach (MarkData item in data)
            {
                string bindstr = item.BindString;
                if (bindstr != string.Empty)
                    r.Add(bindstr);
            }
            return r;
        }
        public static List<string> GetUnBindCode(this List<MarkData> data)
        {
            List<string> r = new List<string>();
            foreach (MarkData item in data)
            {
                string bindstr = item.UnBindString;
                if (bindstr != string.Empty)
                    r.Add(bindstr);
            }
            return r;
        }
    }
}
