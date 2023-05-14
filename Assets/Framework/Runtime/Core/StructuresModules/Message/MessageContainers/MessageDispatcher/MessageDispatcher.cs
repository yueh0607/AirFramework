/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 派发器定义，存储一些强制性声明的方法，以及受限访问的字段
 ********************************************************************************************/

using AirFramework.Internal;
namespace AirFramework
{

    public partial class MessageDispatcher : Unit
    {
        public int Count => EventsContainer.Count;

        internal DynamicQueue<IMessageReceiver, MessageOperatorBox<IMessage>> EventsContainer { get; private set; } = new();

        /// <summary>
        /// 清空全部委托派发
        /// </summary>
        internal void Clear()
        {
            EventsContainer.Clear();
        }

        protected override void OnDispose()
        {
            Clear();
        }



    }
}
