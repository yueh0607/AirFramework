namespace AirFramework
{


    public class UnitMessageOperator : IValueContainer<MessageOperator>,IUnitMessageOperatorIn<IMessage>,IUnitMessageOperatorOut<IMessage>
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
