namespace AirFramework
{
    public static partial class Extensions
    {
        /// <summary>
        /// 回收到源池，仅限托管池使用
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        public static void Recycle<T>(this T item) where T : class,IPoolable
        {
            Framework.Pool.Recycle(item);
        }

        /// <summary>
        /// 允许任意实现IAutoPoolable且从源池申请的对象将自己回收到源池内
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        public static void RecycleSelf<T>(this T item) where T : class,IAutoPoolable
        {
            if(item.ThisPool!= null&&item.ThisPool.Disposed==false&&item.IsRecycled==false)
                item.ThisPool.RecycleObj(item);
        }
   
    }
}
