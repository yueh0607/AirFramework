using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class ViewCodeGen
    {

        private CodeGenBox box = new(true);

        public ViewCodeGen(string viewName, List<MarkData> data)
        {
            Initialize(viewName, data);
        }

        public string GetFieldName(MarkData data)
        {
            return $"{data.BuildName}_{data.TypeName}";
        }



        public void Initialize(string viewName, List<MarkData> data)
        {
            box.AddLine(TitleInfoGenerator.GetStandardNameSpaceUsing());
            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart(viewName);


            foreach (var field in data)
            {
                box.AddLine(field.ViewFiledString);
            }


            box.MethodStart($"public void {nameof(View.InitComponents)}()");
            foreach (var field in data)
            {
                box.AddLine(field.ViewFindString);
            }


            box.EndAll();

        }

    }
}
