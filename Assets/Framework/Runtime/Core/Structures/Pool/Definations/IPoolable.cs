/********************************************************************************************
 * Author : YueZhenpeng
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

        /// <summary>
        /// 由Framework调用，在申请或回收时自动绑定Pool,手动修改可能引起未定义的行为
        /// </summary>
        public IObjectPool ThisPool { get; set; }
        /// <summary>
        /// 由Framework调用，在BindablePool入池时和出池时自动设置，手动修改可能引起未定义的行为
        /// </summary>
        public bool IsRecycled { get; set; }
    }

}
