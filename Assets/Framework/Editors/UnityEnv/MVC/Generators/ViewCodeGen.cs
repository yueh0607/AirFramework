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
                box.AddLine(field.ViewFieldString);

                if (!field.WithProperty) continue;
                foreach (var port in field.ViewPortString)
                {
                    //获取绑定端口类型
                    string type = ReflectionHelper.GetFieldOrPropertyTypeByName(port, field.MarkType).Name;
                    //端口提升命名
                    string portName =port.Length>1? char.ToUpper(port[0]) + port.Substring(1):port.ToUpper();
                    //生成端口字段
                    string bindanlePortStr = $"public BindablePort<{type}> {field.ViewFieldName}_{portName};";
                    box.AddLine(bindanlePortStr);
                }
            }

            box.MethodStart($"public override void {nameof(View.InitComponents)}()");
            foreach (var field in data)
            {
                box.AddLine(field.ViewFindString);

                if (!field.WithProperty) continue;
                foreach (var port in field.ViewPortString)
                {
                    //反射端口类型
                    string type = ReflectionHelper.GetFieldOrPropertyTypeByName(port, field.MarkType).Name;
                    //提升端口命名
                    string portName = port.Length > 1 ? char.ToUpper(port[0]) + port.Substring(1) : port.ToUpper();
                    string portField = $"{field.ViewFieldName}_{portName}";
                    //生成初始化端口代码
                    string bindanlePortStr = $"{portField} = new((value)=>{field.ViewFieldName}.{port}=value,()=>{field.ViewFieldName}.{port});";
                    box.AddLine(bindanlePortStr);
                }
            }


            box.EndAll();

        }

    }
}
