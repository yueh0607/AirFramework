
using AirFramework.Internal;
using AirFramework.Internal.EaseCurve;
using System;
using System.Collections;
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
            tween.Machine.TimeEnd = duration;
            return tween;
        }
        public static Tween SetSpeed(this Tween tween, float speed)
        {
            tween.Machine.Speed = speed;
            return tween;
        }

        public static Tween SetDirection(this Tween tween, PlayDirection direction)
        {
            tween.Machine.Speed = Math.Abs(tween.Machine.Speed) * (int)direction;
            return tween;
        }

        public static Tween Restsrt(this Tween tween)
        {
            tween.Machine.TimeCurrent = tween.Machine.TimeStart;
            return tween;
        }

        /// <summary>
        /// 播放并(或)等待下一次完成
        /// </summary>
        /// <param name="tween"></param>
        /// <returns></returns>
        public static AsyncTask PlayAsync(this Tween tween)
        {
            var task = Framework.Pool.Allocate<AsyncTask>();
            AirEngine.StartCoroutine(AsyncTween(tween, task));
            return task;
        }
        private static IEnumerator AsyncTween(Tween tween, AsyncTask task)
        {
            bool completed = false;
            tween.Machine.OnCompleted += () => completed = true;
            tween.Play();
            while (true)
            {
                if (task.Token.IsCanceld)
                {
                    tween.Complete(true);
                    task.Finish(ETaskStatus.Failed);
                    yield break;
                }
                if (!task.Token.Authorization)
                {
                    tween.Machine.Enable = false;
                }
                if (completed) break;
                yield return null;
            }
            task.Finish(ETaskStatus.Succeed);
        }


    }
}

