using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public abstract class Module : Unit,IModule
    {
        /// <summary>
        /// 模块名称
        /// </summary>
        public abstract string Name { get; }

        /// <summary>
        /// 模块优先层级
        /// </summary>
        public abstract ModulePriority PriorityLevel { get; internal set; }

        /// <summary>
        /// 优先级值
        /// </summary>
        public abstract int PriorityValue { get; }

        /// <summary>
        /// 禁用模块时调用
        /// </summary>
        public abstract void OnDisable();
        /// <summary>
        /// 启用模块时调用
        /// </summary>

        public abstract void OnEnable();

        /// <summary>
        /// 卸载模块时调用
        /// </summary>

        public abstract void OnUnload();

        /// <summary>
        /// 加载模块时调用
        /// </summary>

        public abstract void OnLoad();

        /// <summary>
        /// 模块更新时调用
        /// </summary>
        public abstract void Update();
        
    }
}
