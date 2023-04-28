/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 通过实现IPooable和IAutoPoolable来实现托管池和自回收，再通过Dispose实现using释放
 * 实现本模板可以快捷创建密封类和非密封类的完整托管池类型，通过Value封装调用
 * 直接调用Dispose方法直接回收到池内，如果是通过PoolManager申请，回收时将自动重置
 */

namespace AirFramework
{
    /// <summary>
    /// 用于实现支持using释放，可以自主回收到池的类型
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public abstract class PoolableValueObject<T> : PoolableObject where T : class, new()
    {
        /// <summary>
        /// 模板对象的真实值
        /// </summary>
        public T Value { get; private set; } = new();



    }
}
