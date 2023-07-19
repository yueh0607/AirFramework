namespace AirFramework
{
    public class FixedUpdateHandler : LifeCycleHandler<IFixedUpdate>
    {
        public override void OnLifeCycleRegister(IFixedUpdate item)
        {
            item.Operator<IFixedUpdate>().Subscribe(item.FixedUpdate);
        }

        public override void OnLifeCycleUnRegister(IFixedUpdate item)
        {
            item.Operator<IFixedUpdate>().UnSubscribe(item.FixedUpdate);
        }
    }
}
