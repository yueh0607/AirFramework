using System;
using System.Collections.Generic;
namespace AirFramework
{
    public class LifeCycleManager : GlobalManager
    {

        #region 消息层
        //private static void Publish(Type messageType) => Framework.Message.Operator(messageType).Publish();
        //private static void Register(Type messageType, Action action) => Framework.Message.Operator(messageType).Subscribe(action);
        //private static void UnRegister(Type messageType, Action action) => Framework.Message.Operator(messageType).UnSubscribe(action);
        #endregion




        #region 消息层
        /// <summary>
        /// 注册某函数到生命周期
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="cycleMethod"></param>
        public void Register<T>(Action cycleMethod) where T : ILifeCycle
        {
            ((IOperatorOut<ISendMessage>)Framework.Message.Operator<T>()).Subscribe(cycleMethod);
        }
        /// <summary>
        /// 取消某函数从生命周期
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="cycleMethod"></param>
        public void UnRegister<T>(Action cycleMethod) where T : ILifeCycle=> ((IOperatorOut<ISendMessage>)Framework.Message.Operator<T>()).UnSubscribe(cycleMethod);

        /// <summary>
        /// 每个生命周期都应该在其他位置调用Publish，否则该生命虽然被解析但是不会生效
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void Publish<T>() where T : ILifeCycle
        {
            ((IOperatorOut<ISendMessage>)Framework.Message.Operator<T>()).Publish();
        }
        #endregion

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

        private List<Action<object>> lifesAdd = new(), lifesRemove = new();


        private Dictionary<Type, ILifeCycleHandler> cycles = new Dictionary<Type, ILifeCycleHandler>();

        public override string Name => "LifeCycleManager";



        /// <summary>
        /// 添加生命周期,每个生命周期都应该通过此函数添加，从而支持对象生命周期的解析
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddLifeCycle<T, K>() where T : ILifeCycle where K : LifeCycleHandler<T>
        {
            var handler = Activator.CreateInstance<K>();
            cycles.Add(typeof(T), handler);
            lifesAdd.Add((x) => { if (x is T) handler.OnLifeCycleRegister((T)x); });
            lifesRemove.Add((x) => { if (x is T) handler.OnLifeCycleUnRegister((T)x); });
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
