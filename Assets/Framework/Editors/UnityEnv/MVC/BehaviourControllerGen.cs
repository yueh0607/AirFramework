using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class BehaviourControllerCodeGen
    {

        private CodeGenBox box = new(true);

        public BehaviourControllerCodeGen(string controllerName,string ViewType, List<MarkData> data)
        {
            Initialize($"{controllerName}: {nameof(Controller)}<{ViewType}>", data);
        }


        public void Initialize(string controlerName, List<MarkData> data)
        {
            

            box.AddLine(TitleInfoGenerator.GetStandardNameSpaceUsing());
            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart(controlerName,true);

            box.AddMethod($"public override void {nameof(Controller.OnLoad)}()", new List<string>() { $"{nameof(Controller<View>.TView)}.{nameof(View.InitComponents)}();" });
            box.AddEmptyMethod($"public override void {nameof(Controller.OnUnload)}()");
            box.AddEmptyMethod($"public override void {nameof(Controller.OnOpen)}()");
            box.AddEmptyMethod($"public override void {nameof(Controller.OnClose)}()");

            box.EndAll();

        }

    }
}
