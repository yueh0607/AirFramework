using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
        }

        /// <summary>
        /// 展示并返回一个Controller
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public async AsyncTask<T> Show<T>() where T : Controller
        {
            typeof(T).CheckAbstract();
            var controller = Framework.Pool.Allocate<T>();
            SafeAdd(typeof(T), controller);
            await controller;
            await controller.OnShow();
            return controller;
        }


        /// <summary>
        /// 隐藏一个Controller，
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="controller"></param>
        /// <returns></returns>
        public async AsyncTask Hide<T>(Controller controller = null) where T : Controller
        {
            typeof(T).CheckAbstract();

            if (controller == null)
            {
                await HideAll<T>();
            }
            else
            {
                await HideOne<T>(controller);
            }
            await Async.Complete();
        }


        private async AsyncTask HideOne<T>(Controller controller) where T : Controller
        {
            await controller.OnHide();
            SafeRemove(typeof(T), controller);
        }
        private async AsyncTask HideAll<T>() where T : Controller
        {
            Type type = typeof(T);
            type.CheckAbstract();
            if (container.ContainsKey(type))
            {
                var list = container[type];

                foreach(var con in list.Value)
                {
                    await HideOne<T>(con);
                }
            }
            await Async.Complete();
        }

    }
}
