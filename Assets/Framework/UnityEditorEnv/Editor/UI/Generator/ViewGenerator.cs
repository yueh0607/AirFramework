using System.Collections.Generic;

namespace AirFrameworkEditor
{
    /// <summary>
    /// ����View��������
    /// </summary>
    public class ViewGenerator
    {
        private CodeGenerator generator = new();

        //��������ͳ��
        int endCount = 0;
        public void Init(string controllerName)
        {
            //д������
            generator.UsingText("System");
            generator.UsingText("System.Collections");
            generator.UsingText("System.Collections.Generic");
            generator.UsingText("AirFramework");

            generator.NameSpaceStart("MyNamespace");
            endCount++;
            //д����
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
        /// ����ֶλ���
        /// </summary>
        /// <param name="field"></param>
        public void AddField(string field)
        {
            generator.AddLine(field);
        }

        /// <summary>
        /// ��ȡstring
        /// </summary>
        /// <returns></returns>
        public string GetCode()
        {
            return generator.GetCode();
        }

        /// <summary>
        /// ��������
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
