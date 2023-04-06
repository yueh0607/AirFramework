namespace AirFramework
{
    public class UnitMessageDispatcher : IValueContainer<MessageDispatcher>,IUnitDispatcherIn<IMessage>,IUnitDispatcherOut<IMessage>
    {

        public MessageDispatcher Value { get => value; }
        protected MessageDispatcher value = new();

        public UnitMessageDispatcher() 
        {

        }

        ~UnitMessageDispatcher()
        {
            Value.Dispose();
        }
    }
}
