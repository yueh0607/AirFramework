namespace AirFramework
{
    public class UnitMessageDispatcher<T> : IValueContainer<MessageDispatcher>, IDispatcherOut<T> where T : IMessage
    {

        public MessageDispatcher Value { get; } = new MessageDispatcher();
       

        public UnitMessageDispatcher() 
        {

        }

        ~UnitMessageDispatcher()
        {
            Value.Dispose();
        }
    }
}
