/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 消息管理器的定义区，仅实现基础字段和定义性质的方法
 ********************************************************************************************/

using AirFramework.Internal;
using System;
namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : GlobalManager, IMessageReceiver
    {
        /// <summary>
        /// 层级容器，存储派发器
        /// </summary>
        internal readonly DynamicQueue<Type, MessageDispatcherBox<IMessage>> dispatchersContainer = new();
        public override string Name => "MessageManager";


        protected override void OnDispose()
        {
            TryRemoveAllFromGlobal();
        }

    }
}
