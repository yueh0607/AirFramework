namespace AirFramework
{
    public class UnitDelegateGroup : PoolableValueObject<DelegateGroup>
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
