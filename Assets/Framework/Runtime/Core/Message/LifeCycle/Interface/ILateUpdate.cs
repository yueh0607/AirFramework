namespace AirFramework
{
    public interface ILateUpdate : IGenericEvent, IMessageReceiver
    {
        void LateUpdate();
    }
}
