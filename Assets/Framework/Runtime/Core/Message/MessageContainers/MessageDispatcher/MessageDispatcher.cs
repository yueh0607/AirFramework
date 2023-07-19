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
        /// <summary>
        /// 带有该事件的对象数量
        /// </summary>
        public int Count => EventsContainer.Count;

        internal DynamicDictionary<IMessageReceiver, MessageOperatorBox<IMessage>> EventsContainer { get; private set; } = new();

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
