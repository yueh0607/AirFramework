

namespace AirFramework
{
    /// <summary>
    /// 用于实现可被单元池管理的对象
    /// </summary>
    public interface IUnitPoolable : IUnit, IPoolable
    {
        /// <summary>
        /// 当前类型对应的Unit对象池
        /// </summary>
        public IObjectPool ThisPool { get; set; }

        /// <summary>
        /// 当前对象是否已经被回收
        /// </summary>
        public bool IsRecycled { get; }
    }
}
