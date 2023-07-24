namespace AirFramework
{
    public interface ILifeEvent<T> : ISendEvent
    {
        public void OnRegister()
        {

        }
    }
}
