using AirFramework.Internal;
using AirFramework.Utility;
using System;
using System.Collections.Generic;
namespace AirFramework
{
    public class LifeCycleManager
    {


        #region 解析层
        /// <summary>
        /// 解析并注册对象所有生命周期
        /// </summary>
        /// <param name="instance"></param>
        public void AnalyseAddAll(object instance)
        {
            //UnityEngine.Debug.Log(lifesAdd.EventCount);
            foreach (var item in lifesAdd)
            {
                item(instance);
            }
        }
        /// <summary>
        /// 取消对象身上全部生命周期
        /// </summary>
        /// <param name="instance"></param>
        public void AnalyseRemoveAll(object instance)
        {
            foreach (var item in lifesRemove)
            {
                item(instance);
            }
        }
        #endregion

        #region 绑定层

        private readonly List<Action<object>> lifesAdd = new(), lifesRemove = new();



        /// <summary>
        /// 添加生命周期,每个生命周期都应该通过此函数添加，从而支持对象生命周期的解析
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddLifeCycle<T, K>() where T : IMessage where K : LifeCycleHandler<T>
        {
            var handler = Activator.CreateInstance<K>();

            lifesAdd.Add((x) => { if (x is T t) handler.OnLifeCycleRegister(t); });
            lifesRemove.Add((x) => { if (x is T t) handler.OnLifeCycleUnRegister(t); });
        }

        /// <summary>
        /// T是生命接口，K是处理器
        /// </summary>
        /// <param name="t"></param>
        /// <param name="k"></param>
        internal void AddLifeCycle(Type t, Type k)
        {
            if (!t.IsInterface) throw new InvalidOperationException("T must be interface!");
            var handler = (LifeCycleHandler)Activator.CreateInstance(k);
            lifesAdd.Add((x) =>
            {
                if (ReflectionHelper.HasInterface(x.GetType(), t))
                {
                    handler.OnLifeCycleRegister(x);
                    //UnityEngine.Debug.Log($"{x.GetType().Name}有生命：{t.Name}");
                }


            });
            lifesRemove.Add((x) =>
            {
                if (ReflectionHelper.HasInterface(x.GetType(), t))
                    handler.OnLifeCycleUnRegister(x);
            });
        }
        #endregion
    }
}
