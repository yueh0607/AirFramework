namespace AirFramework
{
    public interface IFixedUpdate : IGenericMessage<float>
    {
        void FixedUpdate(float fixedTime);
    }
}
