/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.16
 * Blog : https://blog.csdn.net/qq_46273241/article/details/128756164
 * Description : 
 * 
 */ 


using System;
namespace AirFramework
{

    /// <summary>
    /// 可绑定监听事件的属性
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public sealed class BindableProperty<T> :BindableBase<T>,IPoolable
    {
        private T value;

        /// <summary>
        /// 属性值：当属性值发生变化时，通知属性变更
        /// </summary>

        public override T Value
        {
            get => value;
            set
            {
                //注意，双向绑定会依赖于Equal的实现
                if (!object.Equals(value, this.value))
                {
                    this.value = value;
                    OnValueChanged?.Invoke(this.value, value);
                }
            }
        }

        /// <summary>
        /// 事件列表：属性值变更时触发事件
        /// </summary>
        public override event PropertyChangedEvent<T> OnValueChanged ;


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

        public void OnAllocate()
        {
            value = default;
        }

        public void OnRecycle()
        {
            OnValueChanged = null;
            value = default;
        }

        public IObjectPool ThisPool { get ; set ; }
        public bool IsRecycled { get ; set; }
    }
}
