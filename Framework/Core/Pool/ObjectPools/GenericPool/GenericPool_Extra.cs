using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class GenericPool<T>: ObjectPoolBase, IGenericPool<T> where T : class
    {





        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        
        public virtual T Allocate()=>(T)AllocateObj();

        /// <summary>
        /// 回收对象到该池
        /// </summary>
        /// <param name="item"></param>
        
        public virtual void Recycle(T item)=>RecycleObj(item);

        #region 拓展行为
        /// <summary>
        /// 清空缓存
        /// </summary>

        public override void Clear()
        {
            while (pool.Count != 0) onDestroy?.Invoke(pool.Dequeue());
        }

        /// <summary>
        /// 同步预加载
        /// </summary>
        /// <param name="count">缓存数量</param>

        public override void Preload(int count)
        {
            T item;
            for (int i = 0; i < count; ++i)
            {
                item = onCreate();
                pool.Enqueue(item);
            }
        }

        /// <summary>
        /// 同步卸载缓存
        /// </summary>
        /// <param name="count">缓存数量</param>

        public override void Unload(int count)
        {
            //取小数量
            count = count > Count ? Count : count;
            for (int i = 0; i < count; ++i)
            {
                if(pool.Count != 0)
                onDestroy?.Invoke(pool.Dequeue());
            }
        }
        #endregion
    }
}
