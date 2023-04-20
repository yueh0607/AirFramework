using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public abstract class BindableBase<T>:IValueChanged<T>
    {

        /// <summary>
        /// 属性值：当属性值发生变化时，通知属性变更
        /// </summary>

        public abstract T Value
        {
            get;
            set;
        }

        /// <summary>
        /// 事件列表：属性值变更时触发事件
        /// </summary>
        public abstract event PropertyChangedEvent<T> OnValueChanged;

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

    }
}
