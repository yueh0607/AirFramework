using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class BindablePort<T> : BindableBase<T> where T : IEqualityComparer<T>
    {

        protected override event PropertyChangedEvent<T> onValueChanged;

        private T _value;
        public override T Value
        {
            get
            {
                if (getter == null) throw new InvalidOperationException("No Getter!");
                return getter();
            }
            set
            {

                //注意，双向绑定会依赖于Equal的实现
                if (!object.Equals(value, this.getter()))
                {
                    setter(value);
                    onValueChanged?.Invoke(this.getter(), value);
                    PublishValueChanged(this, Value);
                }
            }
        }

        public BindablePort(Action<T> setter, Func<T> getter)
        {

            this.setter = setter;
            this.getter = getter;
            if (setter == null || getter == null) throw new InvalidOperationException("No Setter or getter!");
            _value = getter();
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

        public void UpdateValue()
        {
            Value = getter();
        }
    }
}
