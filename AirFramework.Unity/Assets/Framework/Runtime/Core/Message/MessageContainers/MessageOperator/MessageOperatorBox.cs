/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 操作器实现
 ********************************************************************************************/


using AirFramework.Internal;
using System.Runtime.InteropServices;
namespace AirFramework
{

    [StructLayout(LayoutKind.Sequential)]
    public class MessageOperatorBox<T> : IValueContainer<MessageOperator>, IOperatorOut<T> where T : IMessage
    {
        public MessageOperator Value { get => value; }
        protected MessageOperator value = new();

        public MessageOperatorBox() { }

        ~MessageOperatorBox() => Value.Dispose();


    }
}
