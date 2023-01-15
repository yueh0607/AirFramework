using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IModule : IUpdate
    {
        /// <summary>
        /// 模块名称
        /// </summary>
        string Name { get; }

        /// <summary>
        /// 模块优先级
        /// </summary>
        ModulePriority PriorityLevel { get; }
        /// <summary>
        /// 优先级数值
        /// </summary>
        int PriorityValue { get; }




        /// <summary>
        /// 卸载模块时调用
        /// </summary>
        void OnUnload();
        /// <summary>
        /// 模块启用时调用
        /// </summary>
        void OnEnable();
        /// <summary>
        /// 模块禁用时调用
        /// </summary>
        void OnDisable();
        /// <summary>
        /// 加载模块时调用
        /// </summary>
        void OnLoad();
    }
}
