namespace AirFramework
{
    public static partial class Extensions
    {
        /// <summary>
        /// 获取消息操作器
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public static UnitMessageDispatcherContanier Operator<MessageType>(this IMessageReceiver receiver) where MessageType : IMessage
        {
            return Framework.Message.Operator<MessageType>(receiver);
        }


    }
}
