using System.Collections.Generic;

namespace AirFrameworkEditor
{
    public class CodeGenBox : CodeGenerator
    {
        public CodeGenBox(bool genDefaultTitle = false)
        {
            if (genDefaultTitle)
                AddLine(TitleInfoGenerator.GetTitleDefault());
        }

        /// <summary>
        /// ��ȡ����������ַ���
        /// </summary>
        /// <returns></returns>
        public string GetAndClear()
        {
            string result = base.GetCode();
            base.Clear();
            return result;
        }

        /// <summary>
        /// �����ļ�����մ���
        /// </summary>
        /// <param name="assetRelativePath"></param>
        public void CreateAndClear(string assetRelativePath)
        {
            FileCreateHandle.CreateFileInAssetPath(assetRelativePath, GetAndClear());
        }


        /// <summary>
        /// ��ӿ���
        /// </summary>
        public void AddEmptyLine() => AddLine(string.Empty);

        /// <summary>
        /// ��ӵ���ע�ͣ�����д//,ֻдע������
        /// </summary>
        /// <param name="commit"></param>
        public void AddCommit(string commit)
        {
            AddLine($"//{commit}");
        }

        /// <summary>
        /// ��ӿշ�������Ҫ������������ǩ�� �� public void add(int a,int b)
        /// </summary>
        /// <param name="method"></param>
        public void AddEmptyMethod(string method)
        {
            AddLine(string.Empty);
            MethodStart(method);
            AddLine(string.Empty);
            AnyEnd();
        }

        /// <summary>
        /// ��ӷ�������Ҫ������������ǩ�� �� public void add(int a,int b)
        /// ��List�д����Զ���ӻ���
        /// </summary>
        /// <param name="method"></param>
        public void AddMethod(string method, List<string> codeLine)
        {
            AddLine(string.Empty);
            MethodStart(method);
            foreach (string line in codeLine) AddLine(line);
            AnyEnd();
        }
        /// <summary>
        /// ����������Ҫ������������нṹ
        /// </summary>
        public void EndAll()
        {
            while (EndCount != 0)
            {
                AnyEnd();
            }
        }
    }
}
