using AirFramework.Utility.RefBuild;
using System;
using UnityEngine;

namespace AirFramework
{

    public enum PlayDirection
    {
        Forward = 1,
        Backward = -1
    }

    public class Tween:Unit
    {
        /// <summary>
        /// 时光机器-穿梭时空！！！欧耶！￥%呀呼
        /// </summary>
        public TimeMachine Machine { get; private set; } = null;



        /// <summary>
        /// 播放
        /// </summary>
        public void Play()
        {
            Machine.Enable = true;

        }


        /// <summary>
        /// 反转播放方向
        /// </summary>
        /// <param name="direction"></param>
        public void Rewind(PlayDirection direction = PlayDirection.Backward)
        {
            Machine.Speed = Math.Abs(Machine.Speed) * (int)(direction);
        }

        /// <summary>
        /// 完成
        /// </summary>
        /// <param name="onlyKill"></param>
        public void Complete(bool onlyKill = true) => Machine.Complete(onlyKill);
        /// <summary>
        /// 暂停
        /// </summary>
        public void Pause() => Machine.Enable = false;


        internal static Tween CreateFromPool<T>(T start, T end, BindableProperty<T> port) where T : IEquatable<T>
        {
            Debug.Log("AAA");
            var tween = Framework.Pool.Allocate<Tween>();
            var steper = StrategyEx.GetSteperWithParm<T>(start, end, port);
            var temp_machine = Framework.Pool.Allocate<TimeMachine>();
            Framework.Update += temp_machine.Update;

            temp_machine.Steper = steper;

            tween.Machine = temp_machine;
            return tween;
        }

        public void RecycleSelf()
        {
            Machine.Reset();
            Machine = null;
            Framework.Pool.Recycle(this);
        }

        protected override void OnDispose()
        {
            throw new NotImplementedException();
        }

        ~Tween()
        {
            Machine.Reset();
            Machine = null;
        }

    
        
    }
}
