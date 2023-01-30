/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 实现该接口，就允许使用全局对象池托管，对象应该负责自己的申请和回收时行为
 */


namespace AirFramework
{
    /// <summary>
    /// 用于实现托管池对象类型
    /// </summary>
    public interface IPoolable
    {
        /// <summary>
        /// 回收时
        /// </summary>
        void OnRecycle();
        /// <summary>
        /// 申请时
        /// </summary>
        void OnAllocate();
    }
}
