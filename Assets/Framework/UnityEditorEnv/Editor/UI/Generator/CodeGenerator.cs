using Sirenix.Utilities.Editor;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFrameworkEditor
{
    public class CodeGenerator
    {
        private StringBuilder builder = new();
        private int tabCount = 0;
        public void UsingText(string np)
        {
            AddTab(tabCount);
            builder.Append("using ");
            builder.Append(np);
            AddTab(tabCount);
            builder.AppendLine(";");
        }
        public void NameSpaceStart(string name)
        {
            AddTab(tabCount);
            builder.Append("namespace ");
            builder.AppendLine(name);
            AddTab(tabCount);
            builder.AppendLine("{");
            tabCount++;
        }
        public void AnyEnd()
        {

            AddTab(--tabCount);
            builder.AppendLine("}");
            
    
        }
        public void ClassStart(string name,bool part= false)
        {
            AddTab(tabCount);
            builder.Append(part?"public partial class ":"public class ");
            builder.AppendLine(name);
            AddTab(tabCount);
            builder.AppendLine("{");
            tabCount++;
        }
        public void AddLine(string filed)
        {
            AddTab(tabCount);
            builder.AppendLine(filed);
        }

        public void MethodStart(string method)
        {
            AddTab(tabCount);
            builder.AppendLine(method);
            AddTab(tabCount);
            builder.AppendLine("{");
            tabCount++;
        }
        public string GetCode()
        {
            string code = builder.ToString();
            builder.Clear();
            return code;
        }
        private void AddTab(int count)
        {
            for (int i = 0; i < count; i++)
            {
                
                builder.Append("\t");
            }
            
        }
    }
}
