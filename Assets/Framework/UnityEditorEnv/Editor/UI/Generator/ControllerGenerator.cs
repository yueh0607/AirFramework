using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFrameworkEditor.Assets.Framework.UnityEditorEnv.Editor.UI.Generator
{
    /// <summary>
    /// 用于Controller代码生成
    /// </summary>
    public class ControllerGenerator
    {
        //结束次数统计
        int endCount = 0;
        CodeGenerator generator = new();
        /// <summary>
        /// 此方法生成using，命名空间，类
        /// </summary>
        /// <param name="controllerName"></param>
        public void Init(string controllerName)
        {
            //写入引用
            generator.UsingText("System");
            generator.UsingText("System.Collections");
            generator.UsingText("System.Collections.Generic");
            generator.UsingText("AirFramework");
            //写入命名空间
            generator.NameSpaceStart("MyNamespace");
            endCount++;
            //写入类
            generator.ClassStart($"{controllerName}Panel:Controller<{controllerName}View>",part:true);
            endCount++;
            
        }

        /// <summary>
        /// 添加空行
        /// </summary>
        public void AddEmptyLine() => generator.AddLine(string.Empty);

        /// <summary>
        /// 添加单行注释
        /// </summary>
        /// <param name="commit"></param>
        public void AddCommit(string commit)
        {
            generator.AddLine($"//{commit}");
        }

        /// <summary>
        /// 添加空方法
        /// </summary>
        /// <param name="method"></param>
        public void AddEmptyEvent(string method)
        {
            generator.AddLine(string.Empty);
            generator.MethodStart(method);
            generator.AddLine(string.Empty);
            generator.AnyEnd();
        }

        /// <summary>
        /// 添加方法
        /// </summary>
        /// <param name="method"></param>
        /// <param name="code"></param>
        public void AddEvent(string method,List<string> codeLine)
        {
            generator.AddLine(string.Empty);
            generator.MethodStart(method);
            foreach(string line in codeLine)generator.AddLine(line);
            generator.AnyEnd();
        }
        /// <summary>
        /// 获取string代码
        /// </summary>
        /// <returns></returns>
        public string GetCode()
        {
            return generator.GetCode();
        }

        /// <summary>
        /// 结束输入
        /// </summary>
        public void End()
        {
            for(int i=0;i<endCount; i++)
            {
                generator.AnyEnd();
            }
        }

    }
}
