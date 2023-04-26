using AirFramework;
using System.Collections.Generic;

namespace AirFrameworkEditor
{
    public class UpdateControllerCodeGen
    {

        private CodeGenBox box = new(true);
        public void CreateFileAndClear(string relativePath)
        {
            box.CreateAndClear(relativePath);
        }
        public UpdateControllerCodeGen(string controllerName, string ViewType, List<MarkData> data)
        {
            Initialize($"{controllerName} :  {nameof(Controller)}<{ViewType}>", data);
        }


        public void Initialize(string controlerName, List<MarkData> data)
        {

            var usings = TitleInfoGenerator.GetStandardNameSpaceUsing();

            foreach (var us in usings) box.UsingText(us);

            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart(controlerName, true);

            box.AddEmptyMethod($"protected override void {nameof(Controller.OnBindProperty)}()");
            box.AddEmptyMethod($"protected override void {nameof(Controller.OnUnBindProperty)}()");


            box.EndAll();

        }

    }
}
