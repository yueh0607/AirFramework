/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 对象池接口，用于实现存储Object类型的池，所有存储Object类型的池实现该接口
 */


using System;

namespace AirFramework
{
    /// <summary>
    /// 用于实现存储引用类型对象的池
    /// </summary>
    public interface IObjectPool : IPool
    {

        public Type ObjectType { get; }
        /// <summary>
        /// 最大缓存容量
        /// </summary>
        public int MaxCapacity { get; }

        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public object AllocateObj();
        /// <summary>
        /// 回收对象
        /// </summary>
        public void RecycleObj(object item);
        /// <summary>
        /// 预加载缓存
        /// </summary>
        /// <param name="count"></param>

        public void Preload(int count);

        /// <summary>
        /// 卸载缓存
        /// </summary>
        /// <param name="count"></param>
        public void Unload(int count);




    }
}
