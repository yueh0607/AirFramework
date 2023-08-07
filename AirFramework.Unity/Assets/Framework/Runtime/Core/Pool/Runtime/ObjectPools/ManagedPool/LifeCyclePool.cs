﻿/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 该池的行为自动添加生命解析,如果非生命对象加入，不会解析
 */

using System;

namespace AirFramework
{
    /// <summary>
    /// 能自动绑定生命的池
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class LifeCyclePool<T> : TimeManagedPool<T> where T : class
    {
        protected override T OnItemCreate()
        {
            var item = base.OnItemCreate();

            //Debug .Log($"生成事件：{item.GetType().FullName}");
            //Framework.Message.LifeCycle.AnalyseAddAll(item);

            return item;
        }
        protected override void OnItemAllocate(T item)
        {
            base.OnItemAllocate(item);

            //注册生命周期
            if (item is IMessageReceiver receiver)
            {
                //receiver.SetActive(true);
                Framework.Message.LifeCycle.AnalyseAddAll(item);
                if (item is IAllocate)
                    receiver.Operator<IAllocate>().Publish();
               
            }

        }

        protected override void OnItemRecycle(T item)
        {
            base.OnItemRecycle(item);

            //注册生命周期
            if (item is IMessageReceiver receiver)
            {
                if (item is IAllocate )
                    receiver.Operator<IRecycle>().Publish();
                //receiver.SetActive(false);

                Framework.Message.LifeCycle.AnalyseRemoveAll(item);
            }
        }

        public LifeCyclePool(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) : base(onCreate, onDestroy, onRecycle, onAllocate)
        {


        }

    }
}
