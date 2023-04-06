/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.30
 * Description : 
 * 抽象模型消息派发器，负责处理每类消息的派发任务，可以指定接收者与派发类型
 */


using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 消息分发器
    /// </summary>
    public partial class MessageDispatcher : Unit
    {
        public int Count => m_events.Count;

        internal DynamicQueue<IMessageReceiver,UnitMessageOperator> m_events { get; private set; }

        /// <summary>
        /// 清空全部委托派发
        /// </summary>
        public void Clear()
        {
            m_events.Clear();
        }

        protected override void OnDispose()
        {
            Clear();
        }
    }
}
