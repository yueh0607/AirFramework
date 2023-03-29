using System.Text;

namespace AirFrameworkEditor
{
    /// <summary>
    /// 用于简单代码生成
    /// </summary>
    public class CodeGenerator
    {
        private StringBuilder builder = new();
        private int tabCount = 0;

        /// <summary>
        /// 加入using
        /// </summary>
        /// <param name="np"></param>
        public void UsingText(string np)
        {
            AddTab(tabCount);
            builder.Append("using ");
            builder.Append(np);
            AddTab(tabCount);
            builder.AppendLine(";");
        }

        /// <summary>
        /// namespace开始
        /// </summary>
        /// <param name="name"></param>
        public void NameSpaceStart(string name)
        {
            AddTab(tabCount);
            builder.Append("namespace ");
            builder.AppendLine(name);
            AddTab(tabCount);
            builder.AppendLine("{");
            tabCount++;
        }

        /// <summary>
        /// 完成结构
        /// </summary>
        public void AnyEnd()
        {

            AddTab(--tabCount);
            builder.AppendLine("}");


        }

        /// <summary>
        /// 类开始
        /// </summary>
        /// <param name="name"></param>
        /// <param name="part"></param>
        public void ClassStart(string name, bool part = false)
        {
            AddTab(tabCount);
            builder.Append(part ? "public partial class " : "public class ");
            builder.AppendLine(name);
            AddTab(tabCount);
            builder.AppendLine("{");
            tabCount++;
        }

        /// <summary>
        /// 加行
        /// </summary>
        /// <param name="filed"></param>
        public void AddLine(string filed)
        {
            AddTab(tabCount);
            builder.AppendLine(filed);
        }
        /// <summary>
        /// 方法开始
        /// </summary>
        /// <param name="method"></param>
        public void MethodStart(string method)
        {
            AddTab(tabCount);
            builder.AppendLine(method);
            AddTab(tabCount);
            builder.AppendLine("{");
            tabCount++;
        }


        /// <summary>
        /// 返回代码
        /// </summary>
        /// <returns></returns>
        public string GetCode()
        {
            string code = builder.ToString();
            return code;
        }
        public void Clear()
        {
            builder.Clear();
            tabCount = 0;

        }
        /// <summary>
        /// 添加TAB
        /// </summary>
        /// <param name="count"></param>
        private void AddTab(int count)
        {
            for (int i = 0; i < count; i++)
            {

                builder.Append("\t");
            }

        }
    }
}
