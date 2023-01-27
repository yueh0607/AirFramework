using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class MessageDispatcher :Unit
    {
        /// <summary>
        /// 存储Question
        /// </summary>
        private Dictionary<Type, Delegate> questions = new Dictionary<Type, Delegate>();
        /// <summary>
        /// 回复问题
        /// </summary>
        /// <typeparam name="RespondType"></typeparam>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="message"></param>
        public void Reply<MessageType>(Delegate message)
        {
            lock (questions)
            {
                Type tp = typeof(MessageType);
                if (questions.ContainsKey(tp))
                {
                    questions[tp] = message;
                }
                else
                {
                    questions.Add(tp, message);
                }
            }
        }
        /// <summary>
        /// 取消回复
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        public void Recall<MessageType>() where MessageType : IMessage
        {
            lock (questions)
            {
                if (questions.ContainsKey(typeof(MessageType)))
                {
                    questions.Remove(typeof(MessageType));
                }
            }
        }
        /// <summary>
        /// 获取问答委托
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <returns></returns>
        public Delegate GetRespondFunc<MessageType>() where MessageType : IMessage
        {
            Type tp = typeof(MessageType);
            if (questions.ContainsKey(tp))
            {
                return questions[tp];
            }
            return null;
        }
        /// <summary>
        /// 取消全部问答
        /// </summary>
        public void RecallAll()
        {
            lock (questions)
            {
                foreach (var tp in pool)
                {
                    tp.Value.Dispose();
                }
                questions.Clear();
            }
        }


    }
}
