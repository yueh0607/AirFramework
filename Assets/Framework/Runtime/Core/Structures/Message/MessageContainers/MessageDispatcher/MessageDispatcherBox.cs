/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 派发器盒子，用来实现协变转换和unsafe转换的容器
 ********************************************************************************************/

using AirFramework.Internal;
using System.Runtime.InteropServices;
namespace AirFramework
{
    [StructLayout(LayoutKind.Sequential)]
    public class MessageDispatcherBox<T> : IValueContainer<MessageDispatcher>, IDispatcherOut<T> where T : IMessage
    {

        public MessageDispatcher Value { get; } = new MessageDispatcher();


        public MessageDispatcherBox()
        {

        }

        ~MessageDispatcherBox()
        {
            Value.Dispose();
        }
    }
}
