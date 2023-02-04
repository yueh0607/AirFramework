using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
namespace AirFramework
{
    public class LifeCycleManager: GlobalManager
    {

        #region 消息层
        private static void Publish(Type messageType) => Framework.Message.Operator(messageType).Publish();
        private static void Register(Type messageType,Action action)=>Framework.Message.Operator(messageType).Subscribe(action);
        private static void UnRegister(Type messageType, Action action) => Framework.Message.Operator(messageType).UnSubscribe(action);
        #endregion
        #region 注册层
        public void Register<T>(Action cycleMethod)=>Register(typeof(T), cycleMethod);
        public void UnRegister<T>(Action cycleMethod) => UnRegister(typeof(T), cycleMethod);
        #endregion
        #region 解析层
        public void AnalyseAddAll(object instance)
        {
            foreach (var item in lifesAdd)
            {
                item(instance);
            }
        }
        public void AnalyseRemoveAll(object instance)
        {
            foreach(var item in lifesRemove)
            {
                item(instance);
            }
        }

        #endregion
        #region 绑定层

        private List<Action<object>> lifesAdd= new (),lifesRemove = new();


        private Dictionary<Type, IHandler> cycles = new Dictionary<Type, IHandler>();

        public override string Name =>"LifeCycleManager";



        /// <summary>
        /// 添加生命周期,每个生命周期都应该通过此函数添加，从而支持对象生命周期的解析
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddLifeCycle<T, K>() where T : ILifeCycle where K : Handler<T>
        {
            var handler = Activator.CreateInstance<K>();
            cycles.Add(typeof(T), handler);
            lifesAdd.Add((x) => { if(x is T) handler.OnLifeCycleRegister((T)x); }) ;
            lifesAdd.Add((x) => { if (x is T) handler.OnLifeCycleUnRegister((T)x); });
        }
        /// <summary>
        /// 每个生命周期都应该在其他位置调用Publish，否则该生命虽然被解析但是不会生效
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void Publish<T>() where T : ILifeCycle
        {
            Publish(typeof(T));
        }

        protected override void OnDispose()
        {
            lifesAdd.Clear();
            lifesRemove.Clear();
            cycles.Clear();
        }
        #endregion
    }
}
