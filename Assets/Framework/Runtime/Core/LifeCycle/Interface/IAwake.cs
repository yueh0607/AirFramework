namespace AirFramework
{
    public interface IAwake : ILifeCycle
    {
        void Awake();

        public void SetActive(bool active)
        {
            if(active)
            {
                Awake();
            }
        }
    }

     
}
