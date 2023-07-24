namespace AirFramework
{
    public abstract class AbstractModule : Unit, IUpdate
    {

        public abstract void OnCreate();
        public abstract void Update(float deltaTime);


    }
}
