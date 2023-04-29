using AirFramework.Internal;
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

            lifesAdd.Add((x) => { if (x is T) handler.OnLifeCycleRegister((T)x); });
            lifesRemove.Add((x) => { if (x is T) handler.OnLifeCycleUnRegister((T)x); });
        }

        #endregion
    }
}
