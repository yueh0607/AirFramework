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
        /// 添加空行
        /// </summary>
        public void AddEmptyLine() => AddLine(string.Empty);

        /// <summary>
        /// 添加单行注释
        /// </summary>
        /// <param name="commit"></param>
        public void AddCommit(string commit)
        {
            AddLine($"//{commit}");
        }

        /// <summary>
        /// 添加空方法
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
        /// 添加方法
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
        /// 结束输入
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
