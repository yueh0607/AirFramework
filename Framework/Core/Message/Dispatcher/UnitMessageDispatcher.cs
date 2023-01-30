namespace AirFramework
{
    public class UnitMessageDispatcher : PoolableObject<MessageDispatcher>
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
