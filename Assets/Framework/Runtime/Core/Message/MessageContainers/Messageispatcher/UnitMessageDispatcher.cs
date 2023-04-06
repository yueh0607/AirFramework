namespace AirFramework
{
    public class UnitMessageDispatcher : IValueContainer<MessageDispatcher>,IDispatcherIn<IMessage>,IDispatcherOut<IMessage>
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
