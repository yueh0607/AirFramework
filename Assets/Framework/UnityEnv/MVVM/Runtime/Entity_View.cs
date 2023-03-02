using UnityEngine;
using System.Runtime.CompilerServices;
using UnityEngine.UI;
using UnityEngine.Events;
using System;

namespace AirFramework
{
    /// <summary>
    /// 该层内只允许做一些用户输入控制，以及UI参数的更新，值将会自动更新到Model
    /// </summary>
    public abstract partial class View : EntityMono
    {
        /* 这里将会生成一些字段，Value为Panel上的MonoBehaviour组件，
         * 这些组件代表全部UI类型，这些东西将会自行生成
         * */
        //-------------------------------------------------------------------------------------------------

        ///// <summary>
        ///// 在打开面板时调用
        ///// </summary>
        //public abstract void OnOpen();
        ///// <summary>
        ///// 关闭时调用
        ///// </summary>
        //public abstract void OnClose();
        ///// <summary>
        ///// 卸载时调用
        ///// </summary>
        //public abstract void OnUnload();
        ///// <summary>
        ///// 加载时调用
        ///// </summary>
        //public abstract void OnLoad();


        protected readonly BindableProperty<ViewModel> ViewModelProperty = new();
        public View() => ViewModelProperty.OnValueChanged += OnBindingContextChanged;
        ~View() => ViewModelProperty.OnValueChanged -= OnBindingContextChanged;

        protected virtual void OnBindingContextChanged(ViewModel oldViewModel, ViewModel newViewModel)
        {
            //解绑oldVM，绑定newVM
        }
    }

    public abstract partial class View<T> : View where T : ViewModel
    {
       
        public T BindingContext
        {
            get => ViewModelProperty.Value as T;
            set => ViewModelProperty.Value = value;
        }


        protected abstract override void OnBindingContextChanged(ViewModel oldViewModel, ViewModel newViewModel);
       

    }
    
}
