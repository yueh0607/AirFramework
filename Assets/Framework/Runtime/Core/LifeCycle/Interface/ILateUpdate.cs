namespace AirFramework
{
    public interface ILateUpdate : IGenericMessage,IMessageReceiver
    {
        void LateUpdate();
    }
}
