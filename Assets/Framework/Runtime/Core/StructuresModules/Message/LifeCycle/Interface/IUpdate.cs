namespace AirFramework
{
    public interface IUpdate : IGenericMessage<float>, IMessageReceiver
    {
        void Update(float deltaTime);
    }
}
