/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 所有池的基类型，要求来自AirFramework的全部池均实现该接口
 */

namespace AirFramework
{
    /// <summary>
    /// 用于实现所有池类型
    /// </summary>
    public interface IPool: IUnit
    {
        /// <summary>
        /// 池容量
        /// </summary>
        int Count { get; }

        /// <summary>
        /// 清空缓存
        /// </summary>
        void Clear();
        
    }
}
