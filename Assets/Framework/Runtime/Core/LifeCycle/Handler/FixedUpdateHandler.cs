

namespace AirFramework
{
    public class FixedUpdateHandler : LifeCycleHandler<IFixedUpdate>
    {
        public override void OnLifeCycleRegister(IFixedUpdate item)
        {
            Framework.Message.Operator<IFixedUpdate>().UnSubscribe(item.FixedUpdate);
        }

        public override void OnLifeCycleUnRegister(IFixedUpdate item)
        {
            Framework.Message.Operator<IFixedUpdate>().UnSubscribe(item.FixedUpdate);
        }
    }
} 
