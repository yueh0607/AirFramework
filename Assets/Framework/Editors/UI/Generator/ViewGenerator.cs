using System.Collections.Generic;

namespace AirFrameworkEditor
{
    /// <summary>
    /// 用于View代码生成
    /// </summary>
    public class ViewGenerator
    {
        private CodeGenerator generator = new();

        //结束次数统计
        int endCount = 0;
        public void Init(string controllerName)
        {
            //写入引用
            generator.UsingText("System");
            generator.UsingText("System.Collections");
            generator.UsingText("System.Collections.Generic");
            generator.UsingText("AirFramework");

            generator.NameSpaceStart("MyNamespace");
            endCount++;
            //写入类
            generator.ClassStart(controllerName + "View:View", part: true);
            endCount++;

        }
        public void AddEmptyEvent(string method)
        {
            generator.AddLine(string.Empty);
            generator.MethodStart(method);
            generator.AddLine(string.Empty);
            generator.AnyEnd();
        }

        public void AddEvent(string method, List<string> codeLine)
        {
            generator.AddLine(string.Empty);
            generator.MethodStart(method);
            foreach (string line in codeLine) generator.AddLine(line);
            generator.AnyEnd();
        }
        public void AddEmptyLine() => generator.AddLine(string.Empty);
        public void AddCommit(string commit)
        {
            generator.AddLine($"//{commit}");
        }
        /// <summary>
        /// 添加字段或行
        /// </summary>
        /// <param name="field"></param>
        public void AddField(string field)
        {
            generator.AddLine(field);
        }

        /// <summary>
        /// 获取string
        /// </summary>
        /// <returns></returns>
        public string GetCode()
        {
            return generator.GetCode();
        }

        /// <summary>
        /// 结束代码
        /// </summary>
        public void End()
        {
            for (int i = 0; i < endCount; i++)
            {
                generator.AnyEnd();
            }
        }

    }
}
