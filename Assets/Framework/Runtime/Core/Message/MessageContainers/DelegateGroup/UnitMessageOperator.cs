using System.Runtime.InteropServices;

namespace AirFramework
{

    [StructLayout(LayoutKind.Sequential)]
    public class UnitMessageOperator : IValueContainer<MessageOperator>,IOperatorIn<IMessage>,IOperatorOut<IMessage>
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
