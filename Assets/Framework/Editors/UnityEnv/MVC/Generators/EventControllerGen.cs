using AirFramework;
using System.Collections.Generic;

namespace AirFrameworkEditor
{
    public class EventControllerCodeGen
    {

        private CodeGenBox box = new(true);

        public EventControllerCodeGen(string controllerName, string ViewType, List<MarkData> data)
        {
            Initialize($"{controllerName} : {nameof(Controller)}<{ViewType}>", data);
        }
        public void CreateFileAndClear(string relativePath)
        {
            box.CreateAndClear(relativePath);
        }

        public void Initialize(string controlerName, List<MarkData> data)
        {
            List<string> bindCode = new List<string>();
            List<string> unbindCode = new List<string>();
            List<string> methodCode = new List<string>();

            foreach (MarkData mark in data)
            {
                bool result = MVCGenConfig.Instance.TryGetList(mark.MarkType, out var list);
                if (!result) continue;


                foreach (var tag in list)
                {
                    string bindCodeTemp = $"{nameof(Controller<View>.TView)}.{mark.ViewFieldName}.Bind({tag.GetMethodName(mark.ViewFieldName)});";
                    string unbindCodeTemp = $"{nameof(Controller<View>.TView)}.{mark.ViewFieldName}.UnBind({tag.GetMethodName(mark.ViewFieldName)});";
                    string methodCodeTemp = tag.GetMethod(mark.ViewFieldName, "private");

                    bindCode.Add(bindCodeTemp);
                    unbindCode.Add(unbindCodeTemp);
                    methodCode.Add(methodCodeTemp);
                }
            }



            var usings = TitleInfoGenerator.GetStandardNameSpaceUsing();
            foreach (var us in usings) box.UsingText(us);

            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart(controlerName, true);

            box.MethodStart($"public override void {nameof(Controller.OnBindEvents)}()");
            foreach (string bindStr in bindCode)
            {
                box.AddLine(bindStr);
            }
            box.AnyEnd();

            box.MethodStart($"public override void {nameof(Controller.OnUnBindEvents)}()");
            foreach (string unbindStr in unbindCode)
            {
                box.AddLine(unbindStr);
            }
            box.AnyEnd();


            foreach (string method in methodCode)
            {
                box.AddEmptyMethod(method);
            }

            box.EndAll();

        }

    }
}
