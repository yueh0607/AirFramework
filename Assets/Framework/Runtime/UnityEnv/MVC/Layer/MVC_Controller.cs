using System;

namespace AirFramework
{

    public abstract class Controller : UnitGameObject
    {
        /// <summary>
        /// 获取View的实例
        /// </summary>
        public View View { get; set; }
        /// <summary>
        /// 在View展示时调用，可以试着在里面对V进行动画
        /// </summary>
        /// <returns></returns>
        public abstract AsyncTask OnShow();
        /// <summary>
        /// 在View隐藏时调用，可以试着在里面对V进行动画
        /// </summary>
        /// <returns></returns>
        public abstract AsyncTask OnHide();
        /// <summary>
        /// 在V加载时调用，为加载后的预处理工作
        /// </summary>
        public override void OnLoad()
        {
            View.InitComponents();
            OnBindEvents();
            OnBindProperty();
        }
        /// <summary>
        /// 在V卸载时调用，注意这个方法调用比卸载早，卸载前的准备工作
        /// </summary>
        public override void OnUnload()
        {
            OnUnBindEvents();
            OnUnBindProperty();
        }


        /// <summary>
        /// 在这个方法中写到M层的数据绑定
        /// </summary>
        public abstract void OnBindProperty();

        /// <summary>
        /// 在卸载时对数据绑定解绑
        /// </summary>
        public abstract void OnUnBindProperty();

        /// <summary>
        /// 绑定V层的事件
        /// </summary>
        public abstract void OnBindEvents();
        /// <summary>
        /// 解绑V层的事件
        /// </summary>
        public abstract void OnUnBindEvents();

        protected K GetModel<K>() where K :class, IModel
        {
            return Framework.MVC.Models.Get<K>();
        }
    }
    public abstract class Controller<T> : Controller where T : View
    {
        public Controller()
        {
            if (typeof(T).IsAbstract) throw new InvalidOperationException("Abstract classes cannot be used as generic parameters for this class");
        }
        public T TView
        {
            get => (T)View;
            set => View = value;
        }

        public override void OnLoad()
        {
            //先添加组件，再执行OnLoad 进行绑定
            View = base.gameObject.AddComponent<T>();

            base.OnLoad();

        }
        public override void OnUnload()
        {
            //先进行解绑，再置空View
            base.OnUnload();
            View = null;
        }
    }

}
