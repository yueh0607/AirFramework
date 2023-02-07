
namespace AirFramework
{
    public partial class Entity : PoolableObject<Entity>, IMessage
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

    public partial class Entity : PoolableObject<Entity>, IMessage
    {

       


    }
}
