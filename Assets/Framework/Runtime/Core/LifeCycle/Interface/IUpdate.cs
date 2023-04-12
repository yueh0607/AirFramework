namespace AirFramework
{
    public interface IUpdate : IGenericMessage<float>
    {
        void Update(float deltaTime);
    }
}
