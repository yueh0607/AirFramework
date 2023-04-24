namespace AirFramework
{
    public abstract class Entity<T> : Entity where T : Entity<T>
    {
        protected override void OnCreateEntity()
        {
            Entity.Instantiate<Entity<T>>(this);
        }

        protected override void OnDestroyEntity()
        {
            Entity.Destroy(this);
        }


    }
}
