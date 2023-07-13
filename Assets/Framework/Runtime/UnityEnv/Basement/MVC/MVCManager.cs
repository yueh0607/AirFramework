using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class MVCManager
    {

        private Dictionary<Type, UnitList<Controller>> container = new();

        private void SafeAdd(Type type, Controller controller)
        {
            if (!container.ContainsKey(type))
                container.Add(type, Framework.Pool.Allocate<UnitList<Controller>>());
            container[type].Value.Add(controller);
        }
        private void SafeRemove(Type type, Controller controller)
        {
            if (!container.ContainsKey(type))
                return;
            container[type].Value.Remove(controller);
            if (container[type].Value.Count == 0) container.RemoveAndDispose(type);
        }

        /// <summary>
        /// 展示并返回一个Controller
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public async AsyncTask<T> Show<T>() where T : Controller
        {
            typeof(T).IfAbstractThrowException();
            var controller = Framework.Pool.Allocate<T>();
            SafeAdd(typeof(T), controller);
            if (!controller.IsAlive) await controller.BindAsync<T>();
            else await Async.CompletedTask();
            await controller.OnShow();
            return controller;
        }


        /// <summary>
        /// 隐藏一个Controller，如果参数为null则隐藏全部同类型Controller
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="controller"></param>
        /// <returns></returns>
        public async AsyncTask Hide<T>(Controller controller) where T : Controller
        {
            Type type = typeof(T);
            type.IfAbstractThrowException();
            if (controller == null) throw new InvalidOperationException("Null reference of controller");
            await HideOne(type, controller);
            await Async.CompletedTask();
        }
        public async AsyncTask Hide<T>() where T : Controller
        {
            Type type = typeof(T);
            type.IfAbstractThrowException();
            await HideAll(type);
        }
        /// <summary>
        /// 隐藏一个Controller
        /// </summary>
        /// <param name="controller"></param>
        /// <returns></returns>
        public async AsyncTask Hide(Controller controller)
        {
            await HideOne(controller.GetType(), controller);
        }
        private async AsyncTask HideOne(Type type, Controller controller)
        {
            await controller.OnHide();
            controller.Dispose();
            SafeRemove(type, controller);
        }
        private async AsyncTask HideAll(Type type)
        {

            type.IfAbstractThrowException();
            if (container.ContainsKey(type))
            {
                var list = container[type];

                foreach (var con in list.Value)
                {
                    await HideOne(type, con);
                }
            }
            await Async.CompletedTask();
        }

    }
}
