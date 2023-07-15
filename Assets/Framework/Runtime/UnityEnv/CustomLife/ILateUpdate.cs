namespace AirFramework
{
    public interface ILateUpdate : ISendEvent, IMessageReceiver
    {
        void LateUpdate();
    }
}
