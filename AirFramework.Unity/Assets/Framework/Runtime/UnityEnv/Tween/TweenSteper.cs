using AirFramework.MV.RefBuild;
using System;

namespace AirFramework
{

    public interface ISteper
    {
        /// <summary>
        /// 推进步进器
        /// </summary>
        /// <param name="step"></param>
        public void MoveNext(float step);

    }

    public abstract class TweenSteper<T> : ISteper where T : IEquatable<T>
    {
        /// <summary>
        /// 步进起始
        /// </summary>
        public T ValueStart { get; set; }
        /// <summary>
        /// 步进终点
        /// </summary>
        public T ValueEnd { get; set; }

        /// <summary>
        /// 步进当前
        /// </summary>
        public BindableProperty<T> Current { get; set; } = null;

        /// <summary>
        /// 推进
        /// </summary>
        /// <param name="step"></param>
        public abstract void MoveNext(float step);




    }
}
