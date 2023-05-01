using System;
using System.Collections.Generic;

namespace AirFrameworkEditor
{
    public class MethodString
    {
        public string returnType = "";
        public string parmStr = "";

        public string name = "";


        public MethodString(string returnType, string name, string parm)
        {
            this.returnType = returnType;
            this.parmStr = parm;
            this.name = name;

        }
        public string GetMethodName(string extraName)
        {
            return $"{extraName}_{name}";
        }
        public string GetMethod(string extraName, string lev = "public")
        {
            return $"{lev} {returnType} {GetMethodName(extraName)}{parmStr}";
        }
    }



    //可以在这里添加一些东西，适配生成事件
    [FilePath("Assets/Framework/Editors/UnityEnv/Configurations/Framework.MVCMap.asset")]
    public class MVCGenConfig : ScriptableSingleton<MVCGenConfig>
    {

        public Dictionary<Type, List<string>> map = new()
        {
            //Button
            {
                typeof(UnityEngine.UI.Button),
                new List<string>()
                {
                    "void OnClick()",
                }
            },

            //InputField
            {
                typeof(UnityEngine.UI.InputField),
                new List<string>()
                {
                    "void OnEndEdit(string text)",
                }
            }
            ,
            //Slider
            {
                typeof(UnityEngine.UI.Slider),
                new List<string>()
                {
                    "void OnValueChanged(float value)",
                }
            }

            ,
            //Toggle
            {
                typeof(UnityEngine.UI.Toggle),
                new List<string>()
                {
                    "void OnValueChanged(bool value)",
                }
            }
        };


        public bool TryGetList(Type type, out List<MethodString> eveList)
        {
            List<MethodString> eventList = new();

            if (map.ContainsKey(type))
            {
                foreach (string eve in map[type])
                {
                    //例如void OnAwake(int x)
                    var parts = new string[3];
                    //查找第一个空格 
                    int index = eve.IndexOf(' ');
                    //void
                    parts[0] = eve.Substring(0, index);
                    //查找第一个括号
                    int index2 = eve.IndexOf('(');
                    //计算长度
                    int len = index2 - index - 1;
                    //OnAwake
                    parts[1] = eve.Substring(index + 1, len);
                    parts[2] = eve.Substring(index2, eve.Length - index2);
                    eventList.Add(new MethodString(parts[0], parts[1], parts[2]));
                }
                eveList = eventList;
                return true;
            }
            eveList = null;
            return false;
        }


    }
}
