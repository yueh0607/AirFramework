using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public abstract class PoolBase : Unit,IObjectPool
    {
        /// <summary>
        /// 池缓存数
        /// </summary>
        public abstract int Count { get; }
        /// <summary>
        /// 对象类型
        /// </summary>
        public abstract Type ObjectType { get; }
        /// <summary>
        /// 最大缓存容量
        /// </summary>
        public abstract int MaxCapacity { get; }
        /// <summary>
        /// 清空缓存
        /// </summary>
        public abstract void Clear();
        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public abstract object AllocateObj();
        /// <summary>
        /// 回收对象
        /// </summary>
        public abstract void RecycleObj(object item);
        /// <summary>
        /// 预加载缓存
        /// </summary>
        /// <param name="count"></param>

        public abstract void Preload(int count);

        /// <summary>
        /// 卸载缓存
        /// </summary>
        /// <param name="count"></param>
        public abstract void Unload(int count);
        /// <summary>
        /// 设置最大容量
        /// </summary>
        /// <param name="maxCapacity"></param>
        public abstract void SetMaxCapacity(int maxCapacity);

    }
}
