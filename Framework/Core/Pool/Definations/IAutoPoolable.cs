
/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 实现该接口，将在GenericPool内自动为ThisPool绑定并更新IsRecycled的值，用IsRecycled取代Disposed的有效性
 */

using System;

namespace AirFramework
{
    public interface IAutoPoolable : IDisposable
    {
        public IObjectPool ThisPool { get; set; }
        public bool IsRecycled { get; set; }
        
    }
}
