using AirFramework;
using System.Collections.Generic;

namespace AirFrameworkEditor
{
    public class ViewCodeGen
    {

        private CodeGenBox box = new(true);

        public void CreateFileAndClear(string relativePath)
        {
            box.CreateAndClear(relativePath);
        }
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
            var usings = TitleInfoGenerator.GetStandardNameSpaceUsing();

            foreach (var us in usings) box.UsingText(us);
            box.NameSpaceStart(FrameworkSettings.Instance.defaultNamespace);

            box.ClassStart($"{viewName} : {nameof(View)}");


            foreach (var field in data)
            {
                box.AddLine(field.ViewFiledString);
            }


            box.MethodStart($"public override void {nameof(View.InitComponents)}()");
            foreach (var field in data)
            {
                box.AddLine(field.ViewFindString);
            }


            box.EndAll();

        }

    }
}
