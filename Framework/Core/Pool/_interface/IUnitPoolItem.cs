

namespace AirFramework
{
    /// <summary>
    /// 用于实现可被单元池管理的对象
    /// </summary>
    public interface IUnitPoolable : IUnit,IPoolable
    {
        new void Dispose();
        IObjectPool thisPool { get; set; }

        bool isRecycled { get; set; }
    }
}
