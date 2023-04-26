using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class EventControllerCodeGen
    {

        private CodeGenBox box = new(true);

        public EventControllerCodeGen(string controllerName,string ViewType, List<MarkData> data)
        {
            Initialize($"{controllerName} : {nameof(Controller)}<{ViewType}>", data);
        }


        public void Initialize(string controlerName, List<MarkData> data)
        {
            List<string> bindCode = new List<string>();
            List<string> unbindCode = new List<string>();
            List<string> methodCode = new List<string>();

            foreach (MarkData mark in data)
            {
                bool result = MVCGenConfig.Instance.TryGetList(mark.MarkType, out var list);
                if (!result) return;


                foreach (var tag in list)
                {
                    string bindCodeTemp = $"{nameof(Controller<View>.TView)}.{mark.ViewFieldName}.Bind({tag.name}_{mark.ViewFieldName});";
                    string unbindCodeTemp = $"{nameof(Controller<View>.TView)}.{mark.ViewFieldName}.UnBind({tag.name}_{mark.ViewFieldName});";
                    string methodCodeTemp = tag.GetMethod();

                    bindCode.Add(bindCodeTemp);
                    unbindCode.Add(unbindCodeTemp);
                    methodCode.Add(methodCodeTemp);
                }
            }


            box.AddLine(TitleInfoGenerator.GetStandardNameSpaceUsing());
            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart(controlerName,true);

            box.MethodStart("protected override void OnBindEvents()");
            foreach(string bindStr in bindCode)
            {
                box.AddLine(bindStr);
            }
            box.AnyEnd();

            box.MethodStart("protected override void OnUnBindEvents()");
            foreach (string unbindStr in unbindCode)
            {
                box.AddLine(unbindStr);
            }
            box.AnyEnd();


            foreach(string method in methodCode)
            {
                box.AddEmptyMethod(method);
            }

            box.EndAll();

        }

    }
}
