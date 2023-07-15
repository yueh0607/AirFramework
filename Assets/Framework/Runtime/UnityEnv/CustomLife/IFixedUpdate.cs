namespace AirFramework
{
    public interface IFixedUpdate : ISendEvent<float>, IMessageReceiver
    {
        void FixedUpdate(float fixedTime);
    }
}
