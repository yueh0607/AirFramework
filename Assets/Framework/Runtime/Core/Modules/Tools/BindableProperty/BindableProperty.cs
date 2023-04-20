/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.16
 * Blog : https://blog.csdn.net/qq_46273241/article/details/128756164
 * Description : 
 * BindableProperty旨在实现对单一字段值的监听，在该字段值变化时自动触发监听事件
 */


using System;
namespace AirFramework
{

    /// <summary>
    /// 可绑定监听事件的属性
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public sealed class BindableProperty<T> : PoolableObject<BindableProperty<T>>,IValueChanged<T>
    {
        private T value;

        /// <summary>
        /// 属性值：当属性值发生变化时，通知属性变更
        /// </summary>

        public T Value
        {
            get => value;
            set
            {
                //注意，双向绑定会依赖于Equal的实现
                if (!object.Equals(value, this.value))
                {
                    OnValueChanged?.Invoke(this.value, value);
                    this.value = value;
                }
            }
        }

        /// <summary>
        /// 事件列表：属性值变更时触发事件
        /// </summary>
        public event PropertyChangedEvent<T> OnValueChanged ;

        /// <summary>
        /// 绑定两个属性
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        public static void Bind(IValueChanged<T> a,IValueChanged<T> b)
        {
          //这里的实现依赖于相同值不会调用ValueChanged事件，所以才能避免循环调用
            a.OnValueChanged += (oldV, newV) =>
            {
                b.Value = newV;
            };
            b.OnValueChanged += (oldV, newV) =>
            {
                a.Value = newV;
            };
        }
        /// <summary>
        /// 绑定到属性
        /// </summary>
        /// <param name="target"></param>
        public void BindTo(IValueChanged<T> target)
        {
            target.OnValueChanged += (oldV, newV) =>
            {
                this.Value = newV;
            };
        }
        /// <summary>
        /// 从属性绑定，将当前属性绑定到
        /// </summary>
        /// <param name="target"></param>
        public void BindFrom(IValueChanged<T> target)
        {
            this.OnValueChanged += (oldV, newV) =>
            {
                target.Value = newV;
            };
        }
        /// <summary>
        /// 绑定当前与某个属性
        /// </summary>
        /// <param name="target"></param>
        public void Bind(IValueChanged<T> target)
        {
            Bind(this, target);
        }

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
            value = default;
        }


        private Func<T> getter = null;
        private Action<T> setter = null;
        /// <summary>
        /// 获取Value的Getter
        /// </summary>
        public Func<T> Getter
        {
            get
            {
                if (getter == null)
                {
                    getter = () => Value;
                }
                return getter;
            }
        }
        /// <summary>
        /// 获取Value的Setter
        /// </summary>
        public Action<T> Setter
        {
            get
            {
                if (setter == null)
                {
                    setter = (value) => { Value = value; };
                }
                return setter;
            }
        }
    }
}
