namespace RootFramework
{
    public interface IPool<T>
    {

        /// <summary>
        /// 池当前缓存容量
        /// </summary>
        public int Count { get; }

        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        /// 
        T Allocate();

        /// <summary>
        /// 释放对象
        /// </summary>
        /// <param name="obj"></param>
        void Release(T obj);


        /// <summary>
        /// 卸载缓存
        /// </summary>
        /// <param name="count"></param>
        void Unload(int count);


        /// <summary>
        /// 提前缓存
        /// </summary>
        /// <param name="count"></param>
        void Preload(int count);
    }
}