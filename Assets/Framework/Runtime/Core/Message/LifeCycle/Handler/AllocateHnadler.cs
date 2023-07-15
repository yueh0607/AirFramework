namespace AirFramework
{
    public class AllocateHandler : LifeCycleHandler<IAllocate>
    {
        public override void OnLifeCycleRegister(IAllocate item)
        {
            Framework.Message.Operator<IAllocate>().Subscribe(item.OnAllocate);
        }

        public override void OnLifeCycleUnRegister(IAllocate item)
        {
            Framework.Message.Operator<IAllocate>().UnSubscribe(item.OnAllocate);
        }
    }
}
