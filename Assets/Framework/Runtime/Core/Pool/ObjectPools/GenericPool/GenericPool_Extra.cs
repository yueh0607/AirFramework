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
        /// 异步加载有GC
        /// </summary>
        /// <param name="count"></param>
        /// <returns></returns>
        public override async AsyncTask PreloadAsync(int count)
        {
            await Task.Run(()=>Preload(count));

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
        /// <summary>
        /// 异步卸载，无GC问题
        /// </summary>
        /// <param name="count">卸载总数量</param>
        /// <param name="frame">间隔帧</param>
        /// <returns></returns>
        public override async AsyncTask UnloadAsync(int count,int frame = 1)
        {
            //取小数量
            count = count > Count ? Count : count;
            for (int i = 0; i < count; ++i)
            {
                if (pool.Count != 0)
                {
                    onDestroy?.Invoke(pool.Dequeue());
                    await Async.WaitForFrame(frame);
                }
                else
                {
                    await Async.Complete();
                    break;
                }
            }
        }
        #endregion

        protected override async void OnCycleRecycle()
        {
            //空池销毁
            if (Count == 0)
            {
                Framework.Pool.UnsafeReleasePool<T>();
                return;
            }

            int delta = Count - AllocateCount;
            if (delta > 0)
            {
                 await UnloadAsync((int)(delta*RecoveryRatio));
            }
            await Async.Complete();
            AllocateCount = 0;
        }
    }
}
