
namespace AirFramework
{
    public partial class Entity : PoolableObject<Entity>, IMessage
    {
        public Entity Root { get; set; }

        public Entity Parent { get; set; }

        public UnitDictionary<ulong, Entity> Children { get; set;}


        
    }
}
