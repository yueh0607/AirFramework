using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial interface IMessageManager
    {
        #region RespondModule

        /// <summary>
        /// 回复消息
        /// </summary>
        /// <typeparam name="RespondType"></typeparam>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        /// <param name="message"></param>
        public void Reply< MessageType>(IMessageReceiver receiver, Delegate message) where MessageType : class, IMessage
;       /// <summary>
        /// 撤回回复
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <param name="receiver"></param>
        public void Recall<MessageType>(IMessageReceiver receiver) where MessageType : class, IMessage
;        /// <summary>
/// 撤回全部
/// </summary>
/// <param name="receiver"></param>
        public void RecallAll(IMessageReceiver receiver)
 ;      /// <summary>
        /// 提问
        /// </summary>
        /// <typeparam name="MessageType"></typeparam>
        /// <typeparam name="RespondType"></typeparam>
        /// <param name="receiver"></param>
        /// <returns></returns>
        public RespondType Ask<MessageType, RespondType>(IMessageReceiver receiver) where MessageType : class, IMessage
;       /// <summary>
/// 提问
/// </summary>
/// <typeparam name="MessageType"></typeparam>
/// <typeparam name="RespondType"></typeparam>
/// <typeparam name="A"></typeparam>
/// <param name="receiver"></param>
/// <param name="a"></param>
/// <returns></returns>
        public RespondType Ask<MessageType, RespondType, A>(IMessageReceiver receiver, A a) where MessageType : class, IMessage
;       /// <summary>
/// 提问
/// </summary>
/// <typeparam name="MessageType"></typeparam>
/// <typeparam name="RespondType"></typeparam>
/// <typeparam name="A"></typeparam>
/// <typeparam name="B"></typeparam>
/// <param name="receiver"></param>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
        public RespondType Ask<MessageType, RespondType, A, B>(IMessageReceiver receiver, A a, B b) where MessageType : class, IMessage
        ;/// <summary>
         /// 提问
         /// </summary>
         /// <typeparam name="MessageType"></typeparam>
         /// <typeparam name="RespondType"></typeparam>
         /// <typeparam name="A"></typeparam>
         /// <typeparam name="B"></typeparam>
         /// <typeparam name="C"></typeparam>
         /// <param name="receiver"></param>
         /// <param name="a"></param>
         /// <param name="b"></param>
         /// <param name="c"></param>
         /// <returns></returns>
        public RespondType Ask<MessageType, RespondType, A, B, C>(IMessageReceiver receiver, A a, B b, C c) where MessageType : class, IMessage
        ;/// <summary>
         /// 提问
         /// </summary>
         /// <typeparam name="MessageType"></typeparam>
         /// <typeparam name="RespondType"></typeparam>
         /// <typeparam name="A"></typeparam>
         /// <typeparam name="B"></typeparam>
         /// <typeparam name="C"></typeparam>
         /// <typeparam name="D"></typeparam>
         /// <param name="receiver"></param>
         /// <param name="a"></param>
         /// <param name="b"></param>
         /// <param name="c"></param>
         /// <param name="d"></param>
         /// <returns></returns>
        public RespondType Ask<MessageType, RespondType, A, B, C, D>(IMessageReceiver receiver, A a, B b, C c, D d) where MessageType : class, IMessage
        ;/// <summary>
         /// 提问
         /// </summary>
         /// <typeparam name="MessageType"></typeparam>
         /// <typeparam name="RespondType"></typeparam>
         /// <typeparam name="A"></typeparam>
         /// <typeparam name="B"></typeparam>
         /// <typeparam name="C"></typeparam>
         /// <typeparam name="D"></typeparam>
         /// <typeparam name="E"></typeparam>
         /// <param name="receiver"></param>
         /// <param name="a"></param>
         /// <param name="b"></param>
         /// <param name="c"></param>
         /// <param name="d"></param>
         /// <param name="e"></param>
         /// <returns></returns>
        public RespondType Ask<MessageType, RespondType, A, B, C, D, E>(IMessageReceiver receiver, A a, B b, C c, D d, E e) where MessageType : class, IMessage
        ;
        #endregion
    }
}
