namespace AirFramework
{
    public class UnitMessageDispatcher : IValueContainer<MessageDispatcher>,IDispatcherIn<IMessage>,IDispatcherOut<IMessage>
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
