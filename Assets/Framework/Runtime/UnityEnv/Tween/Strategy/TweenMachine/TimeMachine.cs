using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class TimeMachine :PoolableObject, IUpdate
    {
        /// <summary>
        /// 时间起点
        /// </summary>
        private float timeStart = 0;
        /// <summary>
        /// 时间终点
        /// </summary>
        private float timeEnd = 0;
        /// <summary>
        /// 时间插值
        /// </summary>
        private float time;
        /// <summary>
        /// 插值时
        /// </summary>
        public float Time
        {
            get => time;
            set
            {
                timeEnd = value;

            }
        }
        /// <summary>
        /// 总时
        /// </summary>
        public float TotalTime => timeEnd-timeStart;
        public float Percent=>(time-timeStart) / TotalTime;
        /// <summary>
        /// 插值速度
        /// </summary>
        public float Speed { get; set; } = 1;
        /// <summary>
        /// 步进器
        /// </summary>
        public ISteper Steper { get; set; }
        /// <summary>
        /// 曲线
        /// </summary>
        public ICurve Curve { get; set; } = LinerCurve.Instance;

        public LoopType Loop { get; set; } = LoopType.None;

        public event Action OnCompleted=null;

        /// <summary>
        /// 启动状态
        /// </summary>
        public bool Enable { get; set; } = false;

        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            Enable= false;

            Steper= null;
            Curve = null;

            Speed= 1;
            timeStart = 0;
            timeEnd = 0;
        }

        public void Complete(bool stop =true)
        {
            Steper.MoveNext(timeEnd);

            if(stop)
            {
                Enable = false;
            }
        }

        void IUpdate.Update(float deltaTime)
        {
            if (!Enable) return;
            //在起始和终点插值
            time  = Math.Clamp(time+deltaTime*Speed, timeStart,timeEnd);
            //步进
            Steper.MoveNext(Curve.Evaluate(Percent));
            //边界条件
            if (time >= timeEnd||time<=timeStart)
            {
                if(Loop == LoopType.None)
                {
                    Enable = false;
                }
                else if(Loop == LoopType.Restart)
                {
                    time = 0;
                }
                else if(Loop ==LoopType.Pingpong)
                {

                    Speed *= -1;
                }
                OnCompleted?.Invoke();
            }
        }
    }
}
