namespace AirFramework
{
    public abstract class Entity<T> : Entity where T : Entity<T>
    {
        protected override void OnCreateEntity()
        {
            Entity.Instantiate<T>();
        }

        protected override void OnDestroyEntity()
        {
            Entity.Destroy(this);
        }


    }
}
