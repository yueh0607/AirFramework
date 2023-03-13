using System.Collections;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 用于创建任意集合类型的可回收对象
    /// </summary>
    /// <typeparam name="CollectionType">集合类型</typeparam>
    /// <typeparam name="ElementsType">元素类型</typeparam>
    public class UnitCollection<CollectionType,ElementsType> : PoolableValueObject<CollectionType>  where CollectionType : class,ICollection<ElementsType>,new()
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
