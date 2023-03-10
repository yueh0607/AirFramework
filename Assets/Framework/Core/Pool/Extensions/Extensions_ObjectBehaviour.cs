/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.13
 * Description : 
 * 对象在离开对象池后，不一定需要重新通过Framework的Pool管理器来进行
 * 实现不同的行为接口允许进行一些拓展，能省去调用管理器API的繁琐
 */


namespace AirFramework
{
    public static partial class Pool
    {
        /// <summary>
        /// 回收到源池，仅限回收托管对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        public static void Recycle(this IPoolable item)
        {
            item.ThisPool?.RecycleObj(item);
        }

        /// <summary>
        /// 从对象池获取对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="item"></param>
        /// <returns></returns>
        public static T PoolGet<T>(this object item) where T : class,IPoolable
        {
            return Framework.Pool.Allocate<T>();
        }


      
    }
}
