namespace AirFramework
{
    public interface ITaskContinue : ISendEvent
    {
        void OnTaskContinue();
    }

    public class TaskContinueHandler : LifeCycleHandler<ITaskContinue>
    {
        public override void OnLifeCycleRegister(ITaskContinue item)
        {
            item.Operator<ITaskContinue>().Subscribe(item.OnTaskContinue);
        }

        public override void OnLifeCycleUnRegister(ITaskContinue item)
        {
            item.Operator<ITaskContinue>().UnSubscribe(item.OnTaskContinue);
        }
    }
}
