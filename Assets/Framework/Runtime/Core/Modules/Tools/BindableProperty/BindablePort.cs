using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class BindablePort<T>:IValueChanged<T>
    {
        /// <summary>
        /// 属性值：当属性值发生变化时，通知属性变更
        /// </summary>

        public T Value
        {
            get
            {
                if (getter == null) throw new InvalidOperationException("No Getter!");
                return getter();
            }
            set
            {
                if (setter == null || getter == null) throw new InvalidOperationException("No Setter or getter!");
                //注意，双向绑定会依赖于Equal的实现
                if (!object.Equals(value, this.getter()))
                {
                    OnValueChanged?.Invoke(this.getter(), value);
                    setter(value);
                }
            }
        }

        /// <summary>
        /// 事件列表：属性值变更时触发事件
        /// </summary>
        public event PropertyChangedEvent<T> OnValueChanged;

        /// <summary>
        /// 绑定两个属性
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        public static void Bind(IValueChanged<T> a, IValueChanged<T> b)
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

    

        public BindablePort(Action<T> setter, Func<T> getter)
        {
            this.setter = setter;
            this.getter = getter;
        }

        private Func<T> getter = null;
        private Action<T> setter = null;
        /// <summary>
        /// 获取Value的Getter
        /// </summary>
        public Func<T> Getter => getter;
        /// <summary>
        /// 获取Value的Setter
        /// </summary>
        public Action<T> Setter => setter;

    }
}
