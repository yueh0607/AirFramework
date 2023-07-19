namespace AirFramework
{
    public class UpdateHandler : LifeCycleHandler<IUpdate>
    {
        public override void OnLifeCycleRegister(IUpdate item)
        {
            item.Operator<IUpdate>().Subscribe(item.Update);
        }

        public override void OnLifeCycleUnRegister(IUpdate item)
        {
            item.Operator<IUpdate>().UnSubscribe(item.Update);
        }
    }
}
