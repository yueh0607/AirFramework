/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 建立通用的池模板，要求所有存储引用类型的对象池都自此模板派生
 */
using System;
namespace AirFramework
{
    /// <summary>
    /// 对象池基类型
    /// </summary>
    public abstract class ObjectPoolBase : Unit, IObjectPool
    {
        /// <summary>
        /// 是否托管
        /// </summary>
        public bool IsDeposit { get; internal set; } = false;

        // 实现 IObjectPool 接口中定义的 IsDeposit 属性
        bool IPool.IsDeposit
        {
            get { return IsDeposit; }
            set { IsDeposit = value; }
        }


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
        public abstract int MaxCapacity { get; set; }
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
        /// 异步卸载
        /// </summary>
        /// <param name="count"></param>
        /// <param name="frame"></param>
        /// <returns></returns>
        public abstract AsyncTask UnloadAsync(int count, int frame = 1);

    }
}