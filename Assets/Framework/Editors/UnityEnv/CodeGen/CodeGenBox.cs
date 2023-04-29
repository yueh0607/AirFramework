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
        /// 获取并清除代码字符串
        /// </summary>
        /// <returns></returns>
        public string GetAndClear()
        {
            string result = base.GetCode();
            base.Clear();
            return result;
        }

        /// <summary>
        /// 创建文件并清空代码
        /// </summary>
        /// <param name="assetRelativePath"></param>
        public void CreateAndClear(string assetRelativePath)
        {
            FileCreateHelper.CreateFileInAssetPath(assetRelativePath, GetAndClear());
        }


        /// <summary>
        /// 添加空行
        /// </summary>
        public void AddEmptyLine() => AddLine(string.Empty);

        /// <summary>
        /// 添加单行注释，无须写//,只写注释内容
        /// </summary>
        /// <param name="commit"></param>
        public void AddCommit(string commit)
        {
            AddLine($"//{commit}");
        }

        /// <summary>
        /// 添加空方法，需要给出完整方法签名 如 public void add(int a,int b)
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
        /// 添加方法，需要给出完整方法签名 如 public void add(int a,int b)
        /// ，List中代码自动添加换行
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
        /// 结束输入需要调用来完成所有结构
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
