/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 建立PoolManager来管理托管池类型，允许全局申请和释放托管对象
 * 同时支持创建非托管池类型，要求用户自行取得实例并管理
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public partial class PoolManager : GlobalManager
    {


        #region 非托管池 - Factory
        /// <summary>
        /// 创建非托管通用池
        /// </summary>
        public GenericPool<T> CreateGenericPool<T>(Func<T> onCreate = null, Action<T> onDestroy = null) where T : class, IPoolable
        {
            return CreateGenericPool<T>(onCreate, (item) => { item.OnRecycle(); },(item)=>item.OnAllocate(), onDestroy);
        }
        /// <summary>
        /// 创建非托管通用池
        /// </summary>
        public GenericPool<T> CreateGenericPool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class
        {
            GenericPool<T> pool = new GenericPool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );
            return pool;
        }
        


        /// <summary>
        /// 创建高效纯净池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        public PurePool<T> CreatePurePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null) where T:class,IPoolable
        {
            return CreatePurePool<T>(onCreate, (item) => { item.OnRecycle(); }, (item) => item.OnAllocate(), onDestroy);
        }
        /// <summary>
        /// 创建高效纯净池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        public PurePool<T> CreatePurePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class
        {
            PurePool<T> pool = new PurePool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );
            return pool;
        }



        /// <summary>
        /// 创建带自动绑定的对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        public AutoBindPool<T> CreateAutoBindablePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null) where T : class,IPoolable,IPoolBindable
        {
            return CreateAutoBindablePool(onCreate, (item) => { item.OnRecycle(); }, (item) => item.OnAllocate(), onDestroy);
        }

        /// <summary>
        /// 创建带自动绑定的对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>        
        public AutoBindPool<T> CreateAutoBindablePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null)
            where T :class, IPoolBindable
        { 
            
            AutoBindPool<T> pool = new AutoBindPool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );

            return pool;
        }




        /// <summary>
        /// 创建带自动绑定且可以自动处理生命周期的池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns>
        public LifeCyclePool<T> CreateLifeCyclePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null) where T:class,IPoolable,ILifeCycle
        {
            return CreateLifeCyclePool(onCreate, (item) => { item.OnRecycle(); }, (item) => item.OnAllocate(), onDestroy);
        }

        /// <summary>
        /// 创建带自动绑定且可以自动处理生命周期的池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="onCreate"></param>
        /// <param name="onDestroy"></param>
        /// <param name="onRecycle"></param>
        /// <param name="onAllocate"></param>
        /// <returns></returns> 
        public LifeCyclePool<T> CreateLifeCyclePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class,ILifeCycle
        {
            LifeCyclePool<T> pool = new LifeCyclePool<T>(
                        onCreate ?? Extensions.DefaltActivatorCreate<T>,
                        onDestroy,
                        onRecycle,
                        onAllocate
                        );
            return pool;
        }
       
        
        /// <summary>
        /// 创建ID池
        /// </summary>
        /// <param name="repeatCount"></param>
        /// <returns></returns>
        
        public UIDPool CreateGUIDPool(int repeatCount=100)
        {
            return new UIDPool(repeatCount);
        }
        #endregion

    }
}
