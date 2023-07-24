using System;

namespace AirFramework
{
    public class TimeMachine
    {

        private float timeStart = 0, timeEnd = 0;
        /// <summary>
        /// 时间起点
        /// </summary>
        public float TimeStart
        {
            get => timeStart;
            private set => timeStart = value;

        }
        /// <summary>
        /// 时间终点
        /// </summary>
        /// </summary>
        /// </summary>
        public float TimeEnd
        {
            get => timeEnd;
            set
            {
                timeEnd = value;
                if (timeEnd < timeStart) throw new InvalidOperationException("TimeEnd must greater than strat");
                TimeCurrent = Math.Clamp(timeStart, timeStart, timeEnd);
            }
        }
        /// <summary>
        /// 时间插值
        /// </summary>
        public float TimeCurrent { get; internal set; } = 0;

        /// <summary>
        /// 总时
        /// </summary>
        public float TotalTime => TimeEnd - TimeStart;

        /// <summary>
        /// 步进百分比
        /// </summary>
        public float Percent
        {
            get
            {
                if (TotalTime == 0) return 1f;
                return Math.Clamp((TimeCurrent - TimeStart) / TotalTime, 0f, 1f);
            }
        }

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
        public ICurve Curve { get; set; } = AirFramework.Internal.EaseCurve.LinearCurve.Instance;
        /// <summary>
        /// 循环类型
        /// </summary>
        public LoopType Loop { get; set; } = LoopType.None;

        /// <summary>
        /// 完成回调
        /// </summary>
        public event Action OnCompleted = null;


        private bool enable = false;
        /// <summary>
        /// 启动状态
        /// </summary>
        public bool Enable
        {
            get
            {
                return enable;
            }
            set
            {
                enable = value;
                if (enable) MoveNext();
            }
        }

        //状态继续
        private void MoveNext() => Steper.MoveNext(Curve.Evaluate(Percent));

        /// <summary>
        /// 完成动画
        /// </summary>
        /// <param name="onlyKill"></param>
        public void Complete(bool onlyKill = true)
        {
            if (onlyKill) Enable = false;
            else TimeCurrent = Math.Clamp(TimeCurrent + Math.Sign(Speed) * TotalTime * 2, TimeStart, TimeEnd);
            MoveNext();
        }
        /// <summary>
        /// 时光机更新
        /// </summary>



        ~TimeMachine()
        {
            Framework.Update -= Update;
        }
        internal void Update(float deltaTime)
        {
       
            if (!Enable) return;
           
            //在起始和终点插值
            TimeCurrent = Math.Clamp(TimeCurrent + Framework.DeltaTime * Speed, TimeStart, TimeEnd);
            //步进
            MoveNext();
            //边界条件
            if (TimeCurrent >= TimeEnd || TimeCurrent <= TimeStart)
            {
                if (Loop == LoopType.None)
                {
                    Enable = false;
                }
                else if (Loop == LoopType.Restart)
                {
                    TimeCurrent = 0;
                }
                else if (Loop == LoopType.Pingpong)
                {
                    Speed *= -1;
                }
                OnCompleted?.Invoke();
            }
        }

        /// <summary>
        /// 重置时光机
        /// </summary>
        internal void Reset()
        {
            Enable = false;
            Framework.Update -= Update;
            Framework.Pool.Recycle(Steper);
            Steper = null;
            TimeStart = 0;
            TimeEnd = 0;
            Loop = LoopType.None;
            Speed = 1;
            OnCompleted = null;
        }
    }
}
