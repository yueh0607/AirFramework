using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFrameworkEditor.Assets.Framework.UnityEditorEnv.Editor.UI.Generator
{
    public class ControllerGenerator
    {
        int endCount = 0;
        CodeGenerator generator = new();
        public void Init(string controllerName)
        {
            //写入引用
            generator.UsingText("System");
            generator.UsingText("System.Collections");
            generator.UsingText("System.Collections.Generic");
            generator.UsingText("AirFramework");
            //写入命名空间
            generator.NameSpaceStart("AirFrameworkEditor");
            endCount++;
            //写入类
            generator.ClassStart(controllerName+"Controller");
            endCount++;
            
        }
        public void AddEvent(string method)
        {
            generator.AddLine(string.Empty);
            generator.MethodStart(method);
            generator.AddLine(string.Empty);
            generator.AnyEnd();
        }
        public string GetCode()
        {
            return generator.GetCode();
        }
        public void End()
        {
            for(int i=0;i<endCount; i++)
            {
                generator.AnyEnd();
            }
        }

    }
}
