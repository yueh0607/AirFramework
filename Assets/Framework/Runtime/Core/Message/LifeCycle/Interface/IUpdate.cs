namespace AirFramework
{
    public interface IUpdate : ISendEvent<float>, IMessageReceiver
    {
        void Update(float deltaTime);
    }
}
