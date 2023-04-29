namespace AirFramework
{
    public abstract class BindableBase<T> : Unit, IValueChanged<T>
    {

        public BindableBase()
        {
            notificationList = this.PoolGet<UnitHashSet<BindableBase<T>>>();
        }

        /// <summary>
        /// 属性值：当属性值发生变化时，通知属性变更
        /// </summary>

        public abstract T Value
        {
            get;
            set;
        }



        UnitHashSet<BindableBase<T>> notificationList;


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
        public static void Bind(BindableBase<T> a, BindableBase<T> b)
        {
            a.notificationList.Value.TryAdd(b);
            b.notificationList.Value.TryAdd(a);
        }
        public static void UnBind(BindableBase<T> a, BindableBase<T> b)
        {
            a.notificationList.Value.TryRemove(b);
            b.notificationList.Value.TryRemove(a);
        }
        public static void BindTo(BindableBase<T> origin, BindableBase<T> target)
        {
            target.notificationList.Value.TryAdd(origin);
        }
        public static void BindFrom(BindableBase<T> origin, BindableBase<T> target)
        {
            origin.notificationList.Value.TryAdd(target);
        }
        public static void PublishValueChanged(BindableBase<T> a, T newValue)
        {
            foreach (var item in a.notificationList.Value)
            {
                item.Value = newValue;
            }
        }


        protected override void OnDispose()
        {
            notificationList.Dispose();
        }
    }
}
