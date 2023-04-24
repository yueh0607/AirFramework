using System;
using System.Collections.Generic;
namespace AirFramework
{
    public sealed class CounterCall : PoolableObject<CounterCall>
    {
        /// <summary>
        /// 是否达到一次ClickValue就自动回收到对象池或者销毁
        /// </summary>
        public bool OnceRecycle { get; set; } = false;
        private int _counter;
        /// <summary>
        /// 当前计数数量
        /// </summary>
        public int Count
        {
            get => _counter;
            set
            {
                _counter = value;
                if (value == ClickValue)
                {
                    OnClick?.Invoke();
                    if (OnceRecycle) Dispose();
                }
            }
        }


        /// <summary>
        /// 预期触发值
        /// </summary>
        public int ClickValue { get; set; } = 0;

        /// <summary>
        /// 触发事件
        /// </summary>
        public event Action OnClick = null;

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            OnClick = null;
            _counter = 0;
            ClickValue = 0;
            OnceRecycle = false;
        }


        private Action plusOne = null;
        /// <summary>
        /// 默认实现的加一行为，第一次访问产生GC，代替自定义lambda减少GC产出
        /// </summary>
        public Action PlusOne
        {
            get
            {
                if (plusOne == null)
                {
                    plusOne = () => { ++Count; };
                }
                return plusOne;
            }
        }


    }


    public class CounterCall<T> : PoolableObject<CounterCall<T>>
    {
        /// <summary>
        /// 是否达到一次ClickValue就自动回收到对象池或者销毁
        /// </summary>
        public bool OnceRecycle { get; set; } = false;
        private int _counter;
        /// <summary>
        /// 当前计数数量
        /// </summary>
        public int Count
        {
            get => _counter;
            set
            {
                _counter = value;
                if (value == ClickValue)
                {
                    OnClick?.Invoke(Results);
                    if (OnceRecycle) Dispose();
                }
            }
        }


        /// <summary>
        /// 预期触发值
        /// </summary>
        public int ClickValue { get; set; } = 0;

        /// <summary>
        /// 触发事件
        /// </summary>
        public event Action<List<T>> OnClick = null;

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            OnClick = null;
            _counter = 0;
            ClickValue = 0;
            OnceRecycle = false;
            Results.Clear();
        }

        public List<T> Results { get; set; } = new List<T>();

        private Action<T> plusOne = null;
        /// <summary>
        /// 默认实现的加一行为，第一次访问产生GC，代替自定义lambda减少GC产出
        /// </summary>
        public Action<T> PlusOne
        {
            get
            {
                if (plusOne == null)
                {
                    plusOne = (x) => { ++Count; Results.Add(x); };
                }
                return plusOne;
            }
        }


    }
}
