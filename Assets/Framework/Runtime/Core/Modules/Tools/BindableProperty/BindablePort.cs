using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class BindablePort<T>:BindableBase<T>
    {

        public override event PropertyChangedEvent<T> OnValueChanged;
        public override T Value
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
                    setter(value);
                    OnValueChanged?.Invoke(this.getter(), value);
                   
                }
            }
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
