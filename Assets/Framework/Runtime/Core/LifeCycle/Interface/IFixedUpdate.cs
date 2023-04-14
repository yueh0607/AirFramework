namespace AirFramework
{
    public interface IFixedUpdate : IGenericMessage<float>,IMessageReceiver
    {
        void FixedUpdate(float fixedTime);
    }
}
