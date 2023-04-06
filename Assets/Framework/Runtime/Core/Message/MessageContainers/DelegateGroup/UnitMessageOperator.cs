using System.Runtime.InteropServices;

namespace AirFramework
{

    [StructLayout(LayoutKind.Sequential)]
    public class UnitMessageOperator<T> : IValueContainer<MessageOperator>,IOperatorOut<T> where T : IMessage
    {
        public MessageOperator Value { get => value; }
        protected MessageOperator value = new();

        public UnitMessageOperator()
        {

        }

        ~UnitMessageOperator()
        {
            Value.Dispose();
        }
    }
}
