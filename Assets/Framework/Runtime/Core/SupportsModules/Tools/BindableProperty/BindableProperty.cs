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
    public sealed class BindableProperty<T> : BindableBase<T> where T : IEquatable<T>
    {


        public BindableProperty(T defaultValue = default) => _value = defaultValue;
        private T _value;

        public override T Value
        {
            get => _value;
            set
            {
                //注意，双向绑定会依赖于Equal的实现

                if (!value.Equals(this._value))
                {
                    this._value = value;
                    OnValueChanged?.Invoke(this._value, value);
                    PublishValueChanged(this, value);
                }
            }
        }

        /// <summary>
        /// 事件列表：属性值变更时触发事件
        /// </summary>
        public override event PropertyChangedEvent<T> OnValueChanged;

    }
}
