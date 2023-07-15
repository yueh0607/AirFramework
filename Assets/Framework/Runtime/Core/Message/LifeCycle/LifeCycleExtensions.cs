namespace AirFramework
{
    public static class LifeCycleExtensions
    {

        internal static void StartObjLife(this object obj)
        {
            Framework.Message.LifeCycle.AnalyseAddAll(obj);
        }

        /// <summary>
        /// 手动开启生命周期
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static T StartLife<T>(this T obj) where T : IMessageReceiver
        {
            Framework.Message.LifeCycle.AnalyseAddAll(obj);
            return obj;
        }

        /// <summary>
        /// 手动结束生命周期
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static T CloseLife<T>(this T obj) where T : IMessageReceiver
        {
            Framework.Message.LifeCycle.AnalyseRemoveAll(obj);
            return obj;
        }

        internal static void CloseObjLife(this object obj)
        {
            Framework.Message.LifeCycle.AnalyseRemoveAll(obj);
        }
    }
}
