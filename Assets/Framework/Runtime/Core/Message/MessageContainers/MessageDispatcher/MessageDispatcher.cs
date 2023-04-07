/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 派发器定义，存储一些强制性声明的方法，以及受限访问的字段
 ********************************************************************************************/

namespace AirFramework
{

    public partial class MessageDispatcher : Unit
    {
        public int Count => eventsContainer.Count;

        internal DynamicQueue<IMessageReceiver, MessageOperatorBox<IMessage>> eventsContainer { get; private set; } = new();

        /// <summary>
        /// 清空全部委托派发
        /// </summary>
        internal void Clear()
        {
            eventsContainer.Clear();
        }

        protected override void OnDispose()
        {
            Clear();
        }



        /// <summary>
        /// 移除：为接收者移除全部委托派发
        /// </summary>
        /// <param name="receiver"></param>
        /// <param name="deleType"></param>
        /// <param name="dele"></param>
        public bool TryRemoveAllFromReceiver(IMessageReceiver receiver)
        {
            eventsContainer.TryRemove(receiver);
            return true;
        }

    }
}
