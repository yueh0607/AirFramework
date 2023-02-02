
namespace AirFramework
{
    public class Entity : PoolableObject<Entity>, IMessage
    {
        private ulong id;
        public ulong ID => id;

        private static UIDPool uid_pool = Framework.Pool.CreateGUIDPool(100);

        public Entity()
        {
            id = uid_pool.Allocate();
        }

        protected override void OnDispose()
        {

        }

        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            
        }

        ~Entity()
        {
            uid_pool.Recycle(id);
        }
    }
}
