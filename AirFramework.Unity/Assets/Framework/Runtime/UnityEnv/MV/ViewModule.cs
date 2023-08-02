using System;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class ViewModule : AbstractModule
    {


        public override void OnCreate()
        {

        }

        public override void Update(float deltaTime)
        {

        }

        protected override void OnDispose()
        {

        }


 

        /// <summary>
        /// 提前加载并访问这个View
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public async AirTask<T> LoadView<T>() where T:View
        {
            //抽象检查
            var type = typeof(T);
            type.IfAbstractThrowException();
            T view = null;
            //空检查
            if (view == null)
            {
                view = Framework.Pool.Allocate<T>();
            }
            //非托管加载检查
            if (!view.IsLoaded && !view.IsLoading)
            {
                await view.LoadAsync();
            }
            //加载中等待
            if (view.IsLoading)
            {
                await AirTask.WaitUntil(() => view.IsLoaded);
            }
            return view;
        }

        /// <summary>
        /// 显示一个View，如果为空则是新的View，否则是参数View
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="view"></param>
        /// <returns></returns>
        public async AirTask<T> Show<T>(T view = null) where T : View
        {
            //抽象检查
            var type = typeof(T);
            type.IfAbstractThrowException();

            var _view = view ?? Framework.Pool.Allocate<T>();

       
            //非托管加载检查
            if (!_view.IsLoaded && !_view.IsLoading)
            {
                await _view.LoadAsync();
            }
            //加载中等待
            if (_view.IsLoading)
            {
                await AirTask.WaitUntil(() => _view.IsLoaded);
            }

            //展示事件检查
            if (_view is IViewShow)
            {
                await _view.Operator<IViewShow>().TrySendAsync();
            }
            await AirTask.CompletedTask;

            return _view;
        }
        /// <summary>
        /// 隐藏一个View
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="view"></param>
        /// <returns></returns>

        public async AirTask Hide<T>(T view) where T : View
        {
            await AirTask.CompletedTask;
            //抽象检查
            var type = typeof(T);
            type.IfAbstractThrowException();
            view.IfNullThrowException();

            if (view.IsLoading)
            {
                await AirTask.WaitUntil(() => view.IsLoaded);
            }
            if (view.IsLoaded)
            {
                if (view is IViewHide)
                {
                    
                    await view.Operator<IViewHide>().TrySendAsync();
                }
            }
            else return;
            Framework.Pool.Recycle(view);
        }

      
    }
}
