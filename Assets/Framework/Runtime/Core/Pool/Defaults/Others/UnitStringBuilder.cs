using System.Text;

namespace AirFramework
{
    public class UnitStringBuilder : PoolableValueObject<StringBuilder>
    {
        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Value.Clear();
        }
    }
}
