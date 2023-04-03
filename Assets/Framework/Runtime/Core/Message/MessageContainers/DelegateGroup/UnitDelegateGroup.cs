namespace AirFramework
{


    public class UnitDelegateGroup : PoolableValueObject<DelegateGroup>,IUnitDelegateGroupIn<IMessage>,IUnitDelegateGroupOut<IMessage>
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
