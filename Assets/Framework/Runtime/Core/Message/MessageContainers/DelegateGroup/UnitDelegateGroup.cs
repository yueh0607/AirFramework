namespace AirFramework
{


    public class UnitDelegateGroup : IValueContainer<DelegateGroup>,IUnitDelegateGroupIn<IMessage>,IUnitDelegateGroupOut<IMessage>
    {
        public DelegateGroup Value { get => value; }
        protected DelegateGroup value = new();

        public UnitDelegateGroup()
        {

        }

        ~UnitDelegateGroup()
        {
            Value.Dispose();
        }
    }
}
