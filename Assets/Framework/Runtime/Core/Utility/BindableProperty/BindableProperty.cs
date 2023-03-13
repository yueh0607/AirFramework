/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.16
 * Blog : https://blog.csdn.net/qq_46273241/article/details/128756164
 * Description : 
 * BindableProperty旨在实现对单一字段值的监听，在该字段值变化时自动触发监听事件
 */


using System;
using System.Collections.Generic;
using System.Diagnostics;

namespace AirFramework
{
    public delegate void PropertyChangedEvent<T>(T oldValue, T newValue);
    /// <summary>
    /// 可绑定监听事件的属性
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public sealed class BindableProperty<T>:PoolableObject<BindableProperty<T>> 
    {
        private T value;

        /// <summary>
        /// 属性值：当属性值发生变化时，通知属性变更
        /// </summary>
        
        public T Value { 
            get => value;
            set
            {
                if (!object.Equals(value,this.value))
                {
                    OnValueChanged?.Invoke(this.value,value);
                    this.value = value;
                }
            }
        }

        /// <summary>
        /// 事件列表：属性值变更时触发事件
        /// </summary>
        public event PropertyChangedEvent<T> OnValueChanged;


        /// <summary>
        /// 初始化：使用初始值初始化可绑定属性,触发实际
        /// </summary>
        /// <param name="value"></param>
        
        public BindableProperty(T value)
        {
            Value = value;
        }
        /// <summary>
        /// 初始化：使用默认值(default)初始化可绑定属性
        /// </summary>
        
        public BindableProperty()
        {
            this.value = default;
        }

        public override void OnAllocate()
        {
            value = default;
        }

        public override void OnRecycle()
        {
            OnValueChanged = null;
            value= default;
        }
    }
}
