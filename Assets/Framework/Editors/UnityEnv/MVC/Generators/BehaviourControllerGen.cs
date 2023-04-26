using AirFramework;
using System.Collections.Generic;

namespace AirFrameworkEditor
{
    public class BehaviourControllerCodeGen
    {

        private CodeGenBox box = new(true);

        public BehaviourControllerCodeGen(string controllerName, string ViewType, List<MarkData> data)
        {
            Initialize($"{controllerName}: {nameof(Controller)}<{ViewType}>", data);
        }
        public void CreateFileAndClear(string relativePath)
        {
            box.CreateAndClear(relativePath);
        }

        public void Initialize(string controlerName, List<MarkData> data)
        {


            var usings = TitleInfoGenerator.GetStandardNameSpaceUsing();

            foreach (var us in usings) box.UsingText(us);
            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart(controlerName, true);

            box.AddMethod($"public override void {nameof(Controller.OnLoad)}()", new List<string>() { $"{nameof(Controller<View>.TView)}.{nameof(View.InitComponents)}();" });
            box.AddEmptyMethod($"public override void {nameof(Controller.OnUnload)}()");
            box.AddEmptyMethod($"public override void {nameof(Controller.OnShow)}()");
            box.AddEmptyMethod($"public override void {nameof(Controller.OnHide)}()");

            box.EndAll();

        }

    }
}
