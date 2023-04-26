using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class MethodString
    {
        public string returnType = "void";
        public string parmStr = "(string a)";
       
        public string name = "name";


        public MethodString(string returnType,string name,string parm) 
        {
            this.returnType= returnType;
            this.parmStr = parm;
            this.name = name;
        
        }

        public string GetMethod(string lev="public")
        {
            return $"{lev} {returnType} {name}{parmStr}";
        }
    }


    [FilePath("Assets/Framework/Editors/UnityEnv/Configurations/Framework.MVC.asset")]
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
                    "int OnPress(float value,int x)"
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

                    var parts = new string[3];

                    var temp0 = eve.Split(' ');
                    parts[0] = temp0[0];
                    temp0 = eve.Split('(');
                    parts[2] = '('+temp0[1];
                    parts[1] = temp0[0];

                    eventList.Add(
                    new MethodString(parts[0], parts[1], parts[2]));
                }
                eveList = eventList;
                return true;
            }
            eveList = null;
            return false;
        }


    }
}
