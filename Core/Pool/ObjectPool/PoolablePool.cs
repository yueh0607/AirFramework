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
    public class PoolablePool<T>:GenericPool<T> where T : class,IPoolable<T>
    {
        public PoolablePool(Func<T> onCreate,Action<T> onDestroy=null) :base(onCreate,onDestroy,null,null)
        {

        }
        protected override void OnAllocateItem(object item)
        {
            (item as IPoolable<T>).OnAllocateItem();
        }
        protected override void OnReleaseItem(object item)
        {
            (item as IPoolable<T>).OnReleaseItem();
        }
    }
}
