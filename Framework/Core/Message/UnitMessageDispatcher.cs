namespace AirFramework
{
    public class UnitMessageDispatcher : PoolableObject<MessageDispatcher>
    {
        public override void OnAllocateItem()
        {
            
        }

        public override void OnRecycleItem()
        {
            Value.Dispose();
        }
    }
}
