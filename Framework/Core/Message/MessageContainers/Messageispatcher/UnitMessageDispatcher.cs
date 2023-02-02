namespace AirFramework
{
    public class UnitMessageDispatcher : PoolableValueObject<MessageDispatcher>
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
