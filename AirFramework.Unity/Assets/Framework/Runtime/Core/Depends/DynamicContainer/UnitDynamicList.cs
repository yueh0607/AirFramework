namespace AirFramework
{
    public class UnitDynamicList<T> : PoolableValueObject<DynamicList<T>>
    {
        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Value.Clear();
        }
    }
}
