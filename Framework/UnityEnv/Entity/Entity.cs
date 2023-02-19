
namespace AirFramework
{
    public partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {
        
        protected override void OnDispose()
        {

        }

        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            
        }

        
    }

    public partial class Entity : PoolableObject<Entity>, IMessageReceiver
    {

       


    }
}
