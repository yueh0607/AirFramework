namespace AirFramework
{
    public class RecycleHandler : LifeCycleHandler<IRecycle>
    {
        public override void OnLifeCycleRegister(IRecycle item)
        {
            item.Operator<IRecycle>().Subscribe(item.OnRecycle);
        }

        public override void OnLifeCycleUnRegister(IRecycle item)
        {
            item.Operator<IRecycle>().UnSubscribe(item.OnRecycle);
        }
    }
}
