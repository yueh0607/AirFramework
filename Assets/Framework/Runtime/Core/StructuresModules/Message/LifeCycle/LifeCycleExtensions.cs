namespace AirFramework
{
    public static class LifeCycleExtensions
    {

        internal static void StartObjLife(this object obj)
        {
            Framework.LifeCycle.AnalyseAddAll(obj);
        }
        /// <summary>
        /// 开始生命周期
        /// </summary>
        /// <param name="obj"></param>
        public static void StartLife(this IMessageReceiver obj)
        {
            Framework.LifeCycle.AnalyseAddAll(obj);
        }
        /// <summary>
        /// 手动开启生命周期
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static T StartLife<T>(this T obj) where T : IMessageReceiver
        {
            Framework.LifeCycle.AnalyseAddAll(obj);
            return obj;
        }

        /// <summary>
        /// 关闭生命周期
        /// </summary>
        /// <param name="obj"></param>
        public static void CloseLife(this IMessageReceiver obj)
        {
            Framework.LifeCycle.AnalyseRemoveAll(obj);
        }
        /// <summary>
        /// 手动结束生命周期
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static T CloseLife<T>(this T obj) where T : IMessageReceiver
        {
            Framework.LifeCycle.AnalyseRemoveAll(obj);
            return obj;
        }

        internal static void CloseObjLife(this object obj)
        {
            Framework.LifeCycle.AnalyseRemoveAll(obj);
        }
    }
}
