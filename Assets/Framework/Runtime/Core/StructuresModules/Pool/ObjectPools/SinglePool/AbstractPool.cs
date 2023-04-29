/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 通过继承该抽象类，并实现四种池行为，可以定义模板化的非托管对象池
 */

namespace AirFramework
{
    /// <summary>
    /// 抽象通用泛型池类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class AbstractPool<T> : GenericPool<T> where T : class
    {

        /// <summary>
        /// 当创建对象时调用，返回T实例
        /// </summary>
        /// <returns></returns>
        public abstract T OnCreateItem();
        /// <summary>
        /// 申请对象时调用
        /// </summary>
        /// <param name="item"></param>
        public abstract void OnAllocateItem(T item);
        /// <summary>
        /// 销毁对象时调用
        /// </summary>
        /// <param name="item"></param>
        public abstract void OnDestroyItem(T item);
        /// <summary>
        /// 回收对象时调用
        /// </summary>
        /// <param name="item"></param>
        public abstract void OnRecycleItem(T item);

        public AbstractPool() : base()
        {
            base.OnCreate = OnCreateItem;
            base.OnDestroy += OnDestroyItem;
            base.OnAllocate += OnAllocateItem;
            base.OnDestroy += OnDestroyItem;
        }

    }
}
