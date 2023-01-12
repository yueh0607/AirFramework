using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 提供可被池管理行为的对象池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class PoolablePool_<T>:PoolablePool<T> where T : class,IPoolable<T>,new()
    {
        public PoolablePool_(Action<T> onDestroy=null) : base(() => { return new T(); },onDestroy)
        {

        }
        
    }
}
