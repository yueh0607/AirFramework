namespace AirFramework
{
    public interface IUpdate : IGenericEvent<float>, IMessageReceiver
    {
        void Update(float deltaTime);
    }
}
