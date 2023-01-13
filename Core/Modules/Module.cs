using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public abstract class Module : IModule
    {

        /// <summary>
        /// 模块名称
        /// </summary>
        public abstract string Name { get; }


        private ModuleState moduleState = ModuleState.Rest;
        /// <summary>
        /// 模块工作状态
        /// </summary>
        public ModuleState State { internal set => moduleState = value; get => moduleState; }


        /// <summary>
        /// 调用优先层级
        /// </summary>
        public abstract ModulePriority PriorityLevel { get; }


        /// <summary>
        /// 调用优先级值
        /// </summary>
        public int PriorityValue => throw new NotImplementedException();


        /// <summary>
        /// 唤醒时调用
        /// </summary>
        public abstract void Awake();

        /// <summary>
        /// 禁用时调用
        /// </summary>
        public abstract void OnDisable();

        /// <summary>
        /// 开始时调用
        /// </summary>
        public abstract void Start();

        /// <summary>
        /// 更新时调用
        /// </summary>
        public abstract void Update();
       
    }
}
