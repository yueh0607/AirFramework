using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 可绑定变更事件的属性监听者
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class BindableProperty<T> where T :IEqualityComparer<T>
    {
        private T value;

        public T Value { 
            get => value;
            set
            {
                if (!Equals(value,this.value))
                {
                    this.value = value;
                    OnValueChanged(value);
                }
            }
        }

        public event Action<T> OnValueChanged;

        public BindableProperty(T value)
        {
            this.value = value;
        }
        public BindableProperty()
        {
            this.value = default;
        }
    }
}
