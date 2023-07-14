namespace AirFramework
{
    public interface IFixedUpdate : IGenericEvent<float>, IMessageReceiver
    {
        void FixedUpdate(float fixedTime);
    }
}
