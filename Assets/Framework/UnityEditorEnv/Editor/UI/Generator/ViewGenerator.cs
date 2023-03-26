using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class ViewGenerator
    {
        private CodeGenerator generator = new();

        int endCount = 0;
        public void Init(string controllerName)
        {
            //写入引用
            generator.UsingText("System");
            generator.UsingText("System.Collections");
            generator.UsingText("System.Collections.Generic");
            generator.UsingText("AirFramework");
         
            endCount++;
            //写入类
            generator.ClassStart(controllerName + "View",part:true);
            endCount++;

        }
        public void AddEvent(string method)
        {
            generator.AddLine(string.Empty);
            generator.MethodStart(method);
            generator.AddLine(string.Empty);
            generator.AnyEnd();
        }
        public void AddField(string field)
        {
            generator.AddLine(string.Empty);
        }
        public string GetCode()
        {
            return generator.GetCode();
        }
        public void End()
        {
            for (int i = 0; i < endCount; i++)
            {
                generator.AnyEnd();
            }
        }

    }
}
