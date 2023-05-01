namespace AirFramework
{
    public abstract partial class BindableBase<T> : Unit, IValueChanged<T>
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
        protected abstract event PropertyChangedEvent<T> onValueChanged;

        public event PropertyChangedEvent<T> OnValueChanged
        {
            add
            {

                onValueChanged += value;
                value?.Invoke(Value, Value);
            }
            remove
            {
                onValueChanged -= value;
                value?.Invoke(Value, Value);
            }
        }

        /// <summary>
        /// 绑定两个属性
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        public static void BindTwoWay(BindableBase<T> a, BindableBase<T> b)
        {
            a.OnValueChanged += (oldV, newV) =>
            {
                b.Value = newV;
            };
            b.OnValueChanged += (oldV, newV) =>
            {
                a.Value = newV;
            };
        }
        public static void UnBindTwoWay(BindableBase<T> a, BindableBase<T> b)
        {
            a.OnValueChanged -= (oldV, newV) =>
            {
                b.Value = newV;
            };
            b.OnValueChanged -= (oldV, newV) =>
            {
                a.Value = newV;
            };
        }
        public static void Bind(BindableBase<T> origin, BindableBase<T> target)
        {
            target.OnValueChanged += (oldV, newV) =>
            {
                origin.Value = newV;
            };
        }
        public static void UnBind(BindableBase<T> origin, BindableBase<T> target)
        {
            target.OnValueChanged -= (oldV, newV) =>
            {
                origin.Value = newV;
            };
        }
        protected override void OnDispose()
        {

        }
    }

    public abstract partial class BindableBase<T>

    {
        public void BindTwoWay(BindableBase<T> b)
        {
            BindTwoWay(this, b);
        }
        public void UnBindTwoWay(BindableBase<T> a)
        {
            UnBindTwoWay(this, a);
        }
        public void Bind(BindableBase<T> target)
        {
            Bind(this, target);
        }
        public void UnBind(BindableBase<T> target)
        {
            target.OnValueChanged -= (oldV, newV) =>
            {
                this.Value = newV;
            };
        }


    }
}
