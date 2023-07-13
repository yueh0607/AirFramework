using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class AirCore
    {

        #region Driver
        public static float DeltaTime { get; private set; } = 0;
        public static float TimeScale = 1;
        /// <summary>
        /// 框架调用：禁止用户手动进行调用驱动器更新函数
        /// </summary>
        public static void DriveUpdate(float deltaTime)
        {
            AirCore.DeltaTime= deltaTime * TimeScale;
            _releaseQueue.Dequeue();
        }
        #endregion


        #region Module
        


        #endregion

        #region LifeCycle

        public static void ConfigLifeMap()
        {

        }

        public static void AddLifeCycle(object target)
        {

        }

        public static void RemoveLifeCycle(object target)
        {

        }

        #endregion


        #region ReferencePool

        private readonly static Queue _releaseQueue= new Queue(100);
        private readonly static Dictionary<Type, Queue> _pool = new Dictionary<Type, Queue>(100);
        /// <summary>
        /// 全局对象池对每个类型的最大容量，普通类型占用内存较少，可以统一调节
        /// </summary>
        public static int GlobalPoolMaxCount { get; set; } = 1000;
        private static Queue AddOrGetPool(Type type)
        {
            if (!_pool.ContainsKey(type)) _pool.Add(type, new Queue());
            return _pool[type];
        }

        /// <summary>
        /// 进入引用释放队列：进入前请先移除全部相关引用，否则进入无效
        /// </summary>
        /// <param name="garbage"></param>
        public static void EnReleaseQueue(object garbage)
        {
            _releaseQueue.Enqueue(garbage);
        }

        /// <summary>
        /// 回收到全局对象池，不做任何处理
        /// </summary>
        /// <param name="item"></param>
        public static void GlobalRecycle(object item)
        {
            Type type = item.GetType();
            var queue = AddOrGetPool(type);
            if (queue.Count >= GlobalPoolMaxCount) return;
            queue.Enqueue(item);
        }

        /// <summary>
        /// 从全局对象池申请，创建为同步，空池触发
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static object GlobalAllocate(Type type)
        {
            var queue = AddOrGetPool(type);
            return queue.Count == 0 ? Activator.CreateInstance(type) : queue.Dequeue();
        }
        /// <summary>
        /// 从全局对象池申请，创建为同步，空池触发
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static T GlobalAllocate<T>() => (T)GlobalAllocate(typeof(T));
        /// <summary>
        /// 对全局对象池下达减持命令，可以指定类型，可以指定数量，不指定则为全部
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static void GlobalReduce(Type type = null, int count = -1)
        {
            if (type == null) _pool.Clear();
            else
            {
                if (!_pool.ContainsKey(type)) return;
                if (count < 0) _pool.Remove(type);
                else
                {
                    var queue = _pool[type];
                    count = Math.Min(count, queue.Count);
                    for (int i = 0; i < count; ++i) queue.Dequeue();
                }

            }
        }
        /// <summary>
        /// 对全局对象池下达减持到命令，可以指定类型，可以指定数量
        /// 该命令使得全局对象池不超过指定容量
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static void GlobalReduceTo(Type type = null, int count = 1000)
        {
            if (type == null)
                foreach (var item in _pool)
                {
                    int reduceCount = item.Value.Count - count;
                    if (reduceCount <= 0) continue;
                    GlobalReduce(item.Key, reduceCount);
                }
            else if (_pool.ContainsKey(type))
            {
                int reduceCount = _pool[type].Count - count;
                if (reduceCount <= 0) return;
                GlobalReduce(type, reduceCount);
            }
        }

        #endregion


    }
}
