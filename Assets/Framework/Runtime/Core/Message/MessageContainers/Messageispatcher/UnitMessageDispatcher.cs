namespace AirFramework
{
    public class UnitMessageDispatcher : PoolableValueObject<MessageDispatcher>,IUnitDispatcherIn<IMessage>,IUnitDispatcherOut<IMessage>
    {
        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Value.Dispose();
        }
    }
}
