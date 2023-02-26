using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class UpdateCall : PoolableObject<CounterCall>, IUpdate
    {
        public event Action LifeEvent = null;

        private int callPerFrameCount = 1;
        public int CallPerFrameCount
        {
            get { return callPerFrameCount; }
            set
            {
                if (value < 1)
                {
                    throw new InvalidOperationException("CallPerFrameCount must greater than 1");
                }
                callPerFrameCount = value;
            }
        }

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            LifeEvent = null;
        }


        int counter = 0;
        void IUpdate.Update()
        {
            if (++counter == CallPerFrameCount)
            {
                counter = 0;
            }
            else return;
            LifeEvent?.Invoke();
        }
    }
}
