namespace AirFramework
{
    public class UnitMessageDispatcherContanier : PoolableObject<MessageDispatcherContanier>
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
