using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace AirFramework
{

    public class UIManager
    {
        public UnitGameObject UIRoot { get; private set; }
        public UnitGameObject UIEventSystem { get; private set; }

        public UIManager()
        {
            UIRoot = Framework.Pool.Allocate<EmptyUnitGameObject>();
            UIRoot.gameObject.name = "UIRoot";
            UIEventSystem= Framework.Pool.Allocate<EmptyUnitGameObject>();
            UIEventSystem.gameObject.name = "EventSystem";
            UIEventSystem.AddComponent<EventSystem>();
            UIEventSystem.AddComponent<StandaloneInputModule>();
        }

        private Stack<Controller> panel_stack = new();
        private Dictionary<Type, int> indexMap = new Dictionary<Type, int>();

        
        private async AsyncTask<bool> TryEnStack<T>() where T : Controller
        {
            Type type = typeof(T);
            if (indexMap.ContainsKey(type))
            {
                return false;
            }
            var controller = await Framework.MVC.Show<T>();
            controller.SetParent(UIRoot);
            indexMap.Add(type, panel_stack.Count);
            panel_stack.Push(controller);
            return true;
        }
        private async AsyncTask<bool> TryDeStack<T>() where T : Controller
        {
            Type type = typeof(T);
            if (!indexMap.ContainsKey(type))
            {
                return false;
            }
            int count = panel_stack.Count - indexMap[type];
            for (int i = 0; i < count; i++)
            {
                var con = panel_stack.Pop();
               
                indexMap.Remove(con.GetType ());
                await Framework.MVC.Hide<T>(con);
            
            }
            return true;
        }

        /// <summary>
        /// 打开一个面板，用栈管理
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        /// <exception cref="InvalidOperationException"></exception>
        public async  AsyncTask Open<T>() where T : Controller
        {
            if (await TryEnStack<T>()) { } 
            else throw new InvalidOperationException("Cannot open panels of the same type.");

        }
        /// <summary>
        /// 关闭一个栈面板
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public async AsyncTask Close<T>() where T : Controller
        {
            await TryDeStack<T>();

        }
        /// <summary>
        /// 关闭最顶层栈面板
        /// </summary>
        /// <returns></returns>
        public async AsyncTask CloseTop()
        {
            if (panel_stack.Count <= 0) return;
            var con = panel_stack.Pop();
            Type type = con.GetType();
            indexMap.Remove(type);
           
            await Framework.MVC.Hide(con);
        }
        /// <summary>
        /// 打开一个自由面板
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public async AsyncTask<Controller> OpenFree<T>() where T : Controller
        {
            var controller = await Framework.MVC.Show<T>();
            controller.SetParent(UIRoot);
            return controller;
        }
        /// <summary>
        /// 关闭自由面板
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="controller"></param>
        /// <returns></returns>
        public async AsyncTask CloseFree<T>(Controller controller=null) where T : Controller
        {
            await Framework.MVC.Hide<T>(controller);
        }
        /// <summary>
        /// 获取一个栈面板
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public Controller GetPanel<T>()
        {
            if (!indexMap.ContainsKey(typeof(T))) return default;
            int index = indexMap[typeof(T)];
            foreach(var con in panel_stack)
            {
                if(index--==0) return con;
            }
            return default;
        }

    }
}
