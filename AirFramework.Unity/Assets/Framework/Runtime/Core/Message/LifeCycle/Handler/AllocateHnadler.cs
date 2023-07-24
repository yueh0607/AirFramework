namespace AirFramework
{
    public class AllocateHandler : LifeCycleHandler<IAllocate>
    {
        public override void OnLifeCycleRegister(IAllocate item)
        {
            item.Operator<IAllocate>().Subscribe(item.OnAllocate);
        }

        public override void OnLifeCycleUnRegister(IAllocate item)
        {
            item.Operator<IAllocate>().UnSubscribe(item.OnAllocate);
        }
    }
}
