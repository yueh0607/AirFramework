namespace AirFramework
{
    public class UnitDelegateGroup : PoolableObject<DelegateGroup>
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
