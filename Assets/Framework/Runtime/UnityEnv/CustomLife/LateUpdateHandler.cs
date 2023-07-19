namespace AirFramework
{

    public class LateUpdateHandler : LifeCycleHandler<ILateUpdate>
    {
        public override void OnLifeCycleRegister(ILateUpdate item)
        {

            item.Operator<ILateUpdate>().Subscribe(item.LateUpdate);
        }

        public override void OnLifeCycleUnRegister(ILateUpdate item)
        {
            item.Operator<ILateUpdate>().UnSubscribe(item.LateUpdate);
        }
    }
}
