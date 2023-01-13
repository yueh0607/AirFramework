using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IModule
    {
        /// <summary>
        /// 模块名称
        /// </summary>
        public string Name { get; }
        /// <summary>
        /// 模块工作状态
        /// </summary>
        public ModuleState State { get; }
        /// <summary>
        /// 模块优先层级，越小越优先
        /// </summary>

        public ModulePriority PriorityLevel { get; }

        /// <summary>
        /// 模块优先级值，越小越优先
        /// </summary>
        public int PriorityValue { get; }


        /// <summary>
        /// 更新生命周期
        /// </summary>
        public void Update();

        /// <summary>
        /// 启用
        /// </summary>
        public void Awake();

        /// <summary>
        /// 开始
        /// </summary>

        public void Start();

        /// <summary>
        /// 禁用
        /// </summary>

        public void OnDisable();


    }
}
