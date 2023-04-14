namespace AirFramework
{
    public class UpdateHandler : LifeCycleHandler<IUpdate>
    {
        public override void OnLifeCycleRegister(IUpdate item)
        {
            Framework.Message.Operator<IUpdate>().Subscribe(item.Update);
        }

        public override void OnLifeCycleUnRegister(IUpdate item)
        {
            Framework.Message.Operator<IUpdate>().UnSubscribe(item.Update);
        }
    }
}
