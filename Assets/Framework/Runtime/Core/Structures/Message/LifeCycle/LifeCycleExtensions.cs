﻿namespace AirFramework
{
    public static class LifeCycleExtensions
    {
        /// <summary>
        /// 开始生命周期
        /// </summary>
        /// <param name="obj"></param>
        public static void StartLifeCycle<T>(this object obj)
        {
            Framework.LifeCycle.AnalyseAddAll(obj);
        }

        public static T StartLifeCycle<T>(this T obj)
        {
            Framework.LifeCycle.AnalyseAddAll(obj);
            return obj;
        }

        /// <summary>
        /// 关闭生命周期
        /// </summary>
        /// <param name="obj"></param>
        public static void CloseLifeCycle(this object obj)
        {
            Framework.LifeCycle.AnalyseRemoveAll(obj);
        }
        public static T CloseLifeCycle<T>(this T obj)
        {
            Framework.LifeCycle.AnalyseRemoveAll(obj);
            return obj;
        }
    }
}