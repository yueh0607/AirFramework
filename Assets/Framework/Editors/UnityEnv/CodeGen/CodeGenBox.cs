using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class CodeGenBox : CodeGenerator
    {
        public CodeGenBox(bool genDefaultTitle = false)
        {
            if (genDefaultTitle)
                AddLine(TitleInfoGenerator.GetTitleDefault());
        }

        public string GetAndClear()
        {
            string result = base.GetCode();
            base.Clear();
            return result;
        }
        public void CreateAndClear(string assetRelativePath)
        {
            FileCreateHandle.CreateFileInAssetPath(assetRelativePath, GetAndClear());
        }


        /// <summary>
        /// ��ӿ���
        /// </summary>
        public void AddEmptyLine() => AddLine(string.Empty);

        /// <summary>
        /// ��ӵ���ע��
        /// </summary>
        /// <param name="commit"></param>
        public void AddCommit(string commit)
        {
            AddLine($"//{commit}");
        }

        /// <summary>
        /// ��ӿշ���
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
        /// ��ӷ���
        /// </summary>
        /// <param name="method"></param>
        /// <param name="code"></param>
        public void AddMethod(string method, List<string> codeLine)
        {
            AddLine(string.Empty);
            MethodStart(method);
            foreach (string line in codeLine) AddLine(line);
            AnyEnd();
        }
        /// <summary>
        /// ��������
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
