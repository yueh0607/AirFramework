using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
namespace AirFramework
{
    public class LifeManager
    {

        #region 消息层
        private static void Publish(Type messageType) => Framework.Message.Operator(messageType).Publish();
        private static void Register(Type messageType,Action action)=>Framework.Message.Operator(messageType).Subscribe(action);
        private static void UnRegister(Type messageType, Action action) => Framework.Message.Operator(messageType).UnSubscribe(action);
        #endregion

        #region 消息层泛型
        /// <summary>
        /// 在消息层注册消息
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="action"></param>
        public void Register<T>(Action action) where T : ILifeCycle => Register(typeof(T), action);
        /// <summary>
        /// 在消息层移除
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="action"></param>
        public void UnRegister<T>(Action action) where T : ILifeCycle => UnRegister(typeof(T), action);
        /// <summary>
        /// 发布到消息层
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void Publish<T>() where T : ILifeCycle => Publish(typeof(T));
        #endregion

        #region 解析层
        /// <summary>
        /// 将对象的单一生命周期加入生命循环
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        public void Add<T>(object instance) where T : ILifeCycle
        {
            if (instance is T) ((T)instance)?.OnLifeCycleRegister();
            //UnityEngine.Debug.Log(Framework.Message.Operator<T>().Value.CountAll);
        }
        /// <summary>
        /// 将对象的单一生命周期移除生命循环
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="instance"></param>
        public void Remove<T>(object instance) where T : ILifeCycle
        {
            if (instance is T) ((T)instance)?.OnLifeCycleUnRegister();
        }

        /// <summary>
        /// 解析添加对象生命周期
        /// </summary>
        /// <param name="instance"></param>
        public void AnalyseAddAll(object instance)
        {
            if (instance == null) return;

            foreach (var add in lifesAdd)
            {
                add(instance);
            }
        }
        /// <summary>
        /// 解析移除生命周期
        /// </summary>
        /// <param name="instance"></param>
        public void AnalyseRemoveAll(object instance)
        {
            if (instance == null) return;

            foreach (var remove in lifesRemove)
            {
                remove(instance);
            }
        }

        #endregion

        #region 绑定层
        private List<Action<object>> lifesAdd = new ();
    
        private List<Action<object>> lifesRemove = new();

        /// <summary>
        /// 添加生命周期到生命容器
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddLifeCycle<T>() where T : ILifeCycle
        {
            lifesAdd.Add((x) => { Add<T>(x); });
            lifesRemove.Add((x) => { Remove<T>(x); });
        }
        /// <summary>
        /// 移除生命周期
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void RemoveLifeCycle<T>() where T : ILifeCycle
        {
            lifesAdd.Remove((x) => { Add<T>(x); });
            lifesRemove.Remove((x) => { Remove<T>(x); });
        }
        #endregion
    }
}
