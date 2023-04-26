using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class UpdateControllerCodeGen
    {

        private CodeGenBox box = new(true);

        public UpdateControllerCodeGen(string controllerName,string ViewType, List<MarkData> data)
        {
            Initialize($"{controllerName} :  {nameof(Controller)}<{ViewType}>", data);
        }


        public void Initialize(string controlerName, List<MarkData> data)
        {
            

            box.AddLine(TitleInfoGenerator.GetStandardNameSpaceUsing());
            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart(controlerName,true);

            box.AddEmptyMethod("protected override void OnBindProperty()");
            box.AddEmptyMethod("protected override void OnUnBindProperty()");


            box.EndAll();

        }

    }
}
