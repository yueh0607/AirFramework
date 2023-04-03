namespace AirFramework
{
    public static partial class MessageExtensions
    {


        //public static MessageManager Message(this object item) => Framework.Message;

        /// <summary>
        /// 获取消息操作器
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <returns></returns>


        //public static UnitDelegateGroup Operator<T>(this IMessageReceiver receiver) where T : IMessage
        //{
        //    return Framework.Message.Operator<T>(receiver);
        //}

        /// <summary>
        /// 清空操作器
        /// </summary>
        /// <param name="container"></param>


        public static void Clear(this UnitDelegateGroup container)
        {
            container?.Clear();
        }
    }
}
