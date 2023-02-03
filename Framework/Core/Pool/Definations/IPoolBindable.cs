
/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 实现该接口，将在GenericPool内自动为ThisPool绑定并更新IsRecycled的值，用IsRecycled取代Disposed的有效性
 * 设计该接口允许从池内取出的对象自我进行回收，直接寻找到源池
 */

using System;

namespace AirFramework
{
    public interface IPoolBindable : IDisposable
    {
        /// <summary>
        /// 由Framework调用，在申请或回收时自动绑定Pool
        /// </summary>
        public IObjectPool ThisPool { get; set; }
        /// <summary>
        /// 由Framework调用，在BindablePool入池时和出池时自动设置
        /// </summary>
        public bool IsRecycled { get; set; }
        
    }
}
