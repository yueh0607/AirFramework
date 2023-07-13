using System;

namespace AirFramework
{
    public class BindablePort<T> : BindableBase<T> where T : IEquatable<T>
    {

        protected override event PropertyChangedEvent<T> onValueChanged;
        public override T Value
        {
            get
            {

                return getter();
            }
            set
            {

                //注意，双向绑定会依赖于Equal的实现
                if (!value.Equals(this.getter()))
                {
                    setter(value);
                    onValueChanged?.Invoke(this.getter(), value);

                }
            }
        }

        public BindablePort(Action<T> setter, Func<T> getter)
        {

            this.setter = setter;
            this.getter = getter;
            if (setter == null || getter == null) throw new InvalidOperationException("No Setter or getter!");

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
