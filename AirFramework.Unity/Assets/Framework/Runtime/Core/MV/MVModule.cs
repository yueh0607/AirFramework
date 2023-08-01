namespace AirFramework
{
    public class MVModule : AbstractModule
    {


        public override void OnCreate()
        {

        }

        public override void Update(float deltaTime)
        {

        }

        protected override void OnDispose()
        {

        }


        public string GetLocationByType<T>()
        {
            return typeof(T).Name;
        }

        public async AirTask Show<T>()
        {
            

        }

        public async AirTask Hide<T>()
        {

        }
    }
}
