/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * Framework为框架全局管理器，存储多个核心管理器只允许用户访问，如果对单一管理器调用Dispose则会释放管理器管理的一切资源
 * 但是对单一管理器进行Dispose不会导致管理器不可用，而是导致从之前管理器取得的任何资源和操作无效
 * 同时该类为分部类，和UnityExtensions部分的Framework.cs合并实现Unity部分与.NetCore部分分离
 * 打造这样一个静态管理器方便用户快捷的调用每一个模块，而无需记忆各种管理器的名称
 */

using System.Diagnostics;
namespace AirFramework
{

    /// <summary>
    /// AirFramework-全局管理器
    /// </summary>
    public static partial class Framework
    {

        /// <summary>
        ///  生命周期管理器
        /// </summary>
        [DebuggerHidden]
        public static LifeCycleManager LifeCycle { get; } = new LifeCycleManager();




    }
}
