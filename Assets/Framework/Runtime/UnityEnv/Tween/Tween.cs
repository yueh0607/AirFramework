using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{

    public enum PlayDirection
    {
        Forward = 1,
        Backward = -1
    }

    public class Tween : PoolableObject
    {
        public TimeMachine Machine { get; private set; }

        public bool Enable
        {
            get
            {
                return Machine.Enable;
            }
            private set
            {
                Machine.Enable = value;
            }
        }
        public LoopType Loop
        {
            get => Machine.Loop;
            set => Machine.Loop = value;
        }
        public float Speed
        {
            get => Machine.Speed;
            set => Machine.Speed = value;
        }


        //播放
        public void Play()
        {
            Enable = true;
        }
      

        //反转播放方向
        public void Rewind(PlayDirection direction = PlayDirection.Backward)
        {
            Machine.Speed = Math.Abs(Speed) * (int)(direction);
        }

        //完成
        public void Complete(bool stop = true)
        {
            Machine.Complete(stop);
        }

        public void Pause()
        {
            Enable = false;
        }

        

        public static Tween CreateFromPool<T>(T start, T end, BindableBase<T> port) where T : IEquatable<T>
        {
            var tween = Framework.Pool.Allocate<Tween>();
            var steper = StrategyEx.GetSteperWithParm<T>(start, end, port);

            var temp_machine = Framework.Pool.Allocate<TimeMachine>();
            temp_machine.Steper = steper;

            tween.Machine = temp_machine;
            return tween;
        }

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Machine.Dispose();
        }
    }
}
