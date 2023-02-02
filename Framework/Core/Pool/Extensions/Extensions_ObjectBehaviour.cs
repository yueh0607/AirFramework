/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.13
 * Description : 
 * 对象在离开对象池后，不一定需要重新通过Framework的Pool管理器来进行
 * 实现不同的行为接口允许进行一些拓展，能省去调用管理器API的繁琐
 */


namespace AirFramework
{
    public static partial class Extensions
    {
        /// <summary>
        /// 回收到源池，仅限回收托管对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        public static void Recycle<T>(this T item) where T : class,IPoolable
        {
            Framework.Pool.Recycle(item);
        }

        /// <summary>
        /// 允许任意实现IAutoPoolable且从源池申请的对象将自己回收到源池内，
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        public static void RecycleSelf<T>(this T item) where T : class,IPoolBindable
        {
            if(item.ThisPool!= null&&item.ThisPool.Disposed==false&&item.IsRecycled==false)
                item.ThisPool.RecycleObj(item);
        }
   
    }
}
