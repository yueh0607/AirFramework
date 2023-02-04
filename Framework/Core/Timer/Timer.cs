using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class Timer : IUpdate,IFixedUpdate
    {
        int curent;
        public Timer()
        {
            curent = GetEnvTime();
        }

        internal int GetEnvTime()
        {
            return Environment.TickCount&int.MaxValue;
        }

        void IUpdate.Update()
        {

        }
        void IFixedUpdate.FixedUpdate()
        {

        }

    }
}
