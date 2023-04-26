using System.Text;
namespace AirFrameworkEditor
{
    /// <summary>
    /// 用于简单代码生成，要求每个需要使用{的结构都需要在适当时候调用AnyEnd
    /// </summary>
    public class CodeGenerator
    {
    


        private StringBuilder builder = new();
        private int tabCount = 0;

        public int EndCount { get; protected set; }

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
            EndCount++;
        }

        /// <summary>
        /// 完成一个结构
        /// </summary>
        public void AnyEnd()
        {

            AddTab(--tabCount);
            builder.AppendLine("}");
            EndCount--;

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
            EndCount++;
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
            EndCount++;
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
            EndCount= 0;
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
