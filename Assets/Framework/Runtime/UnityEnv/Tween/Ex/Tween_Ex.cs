using System;
using UnityEngine;

namespace AirFramework
{
    public static class Tween_Ex
    {
        public static Tween SetLoop(this Tween tween, LoopType loopType)
        {
            tween.Machine.Loop = loopType;
            return tween;
        }

        public static Tween SetCurve(this Tween tween, ICurve curve)
        {
            tween.Machine.Curve = curve;
            return tween;
        }

        public static Tween SetCurve(this Tween tween, EaseCurve curve)
        {
            tween.Machine.Curve = BuiltInCurve.GetCurve(curve);
            return tween;
        }

        public static Tween SetCurve(this Tween tween, Func<float, float> curve)
        {
            tween.Machine.Curve = new FuncCurve(curve);
            return tween;
        }
        public static Tween SetCurve(this Tween tween, AnimationCurve curve)
        {
            tween.Machine.Curve = new AnimCurve(curve);
            return tween;
        }

        public static Tween SetDuration(this Tween tween, float duration)
        {
            tween.Machine.Time = duration;
            return tween;
        }
        public static Tween SetSpeed(this Tween tween, float speed)
        {
            tween.Machine.Speed = speed;
            return tween;
        }

        public static Tween SetDirection(this Tween tween, PlayDirection direction)
        {
            tween.Speed = Math.Abs(tween.Speed) * (int)direction;
            return tween;
        }

        public static AsyncTask PlayAsync(this Tween tween)
        {
            tween.Play();
            return tween.WaitCompleted();
        }

        public static AsyncTask WaitCompleted(this Tween tween)
        {
            var task = Framework.Pool.Allocate<AsyncTask>();
            tween.Machine.OnCompleted += task.SetResult;
            task.OnTaskCompleted += () => tween.Machine.OnCompleted -= task.SetResult;
            return task;
        }
    }
}
