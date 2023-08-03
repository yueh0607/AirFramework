using AirFramework.Internal;

namespace AirFramework
{
    public static class Extensions_EnableAll
    {
        /// <summary>
        /// 对全局的事件进行Publish
        /// </summary>
        public static void SetActive(this IDispatcherOutBase container, bool enable)
        {
            if (container is null) return;
            //获取动态队列
            var dic = ((MessageDispatcherBox<IMessage>)container).Value.EventsContainer;
            //刷新动态队列数量
            dic.ResetTraversalCount();
            for (int i = 0; i < dic.TraversalCount; i++)
            {
                //尝试出列
                if (dic.TryDequeue(out var operations, out var key))
                {
                    operations.Value.Enable = enable;

                    //归队
                    dic.TryEnqueue(key, operations);

                }
            }
        }

        public static void SetActive(this IMessageReceiver receiver, bool enable)
        {
            var dispatchersContainer = Framework.Message.dispatchersContainer;

            foreach (var tempDispatcher in dispatchersContainer)
            {
                var op = tempDispatcher.Value.Value.GetOperatorOrDefault(receiver);
                if (op == null) continue;
                op.Value.Enable = enable;
            }


        }
    }
}
