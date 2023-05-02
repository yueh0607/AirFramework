using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface ITweenMachine : IUpdate
    {
        ISteper Steper { get; set; }
        ICurve Curve { get; set; }
   
        bool Enable { get; set; }

        LoopType Loop { get; set; }
        /// <summary>
        /// 插值速度
        /// </summary>
        public float Speed { get; set; }


        public void Complete(bool stop = false);

    }
}
