using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class CounterCall : PoolableObject<CounterCall>
    {
        public bool OnceRecycle { get; set; } = false;
        private int _counter;
        public int Count
        {
            get => _counter;
            set
            {
                _counter = value;
                if(value==ClickValue)
                {
                    OnClick?.Invoke();
                    Dispose();
                }
            }
        }
        


        public int ClickValue { get; set; } = 0;


        public event Action OnClick=null;

        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            OnClick = null;
            _counter = 0;
            ClickValue= 0;
            OnceRecycle= true;
        }



        public Action PlusOne { get; private set; }

        public CounterCall()
        {
            PlusOne = () => { ++Count; };
        }
    }
}
