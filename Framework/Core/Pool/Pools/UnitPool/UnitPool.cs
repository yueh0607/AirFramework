using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class UnitPool<T>: GenericPool<T> where T : Unit,IUnitPoolable,new()
    {
        /// <summary>
        /// 默认的创建方法
        /// </summary>
        /// <returns></returns>
        private static T DefaultCreate()
        {
            return new T();
        }
        /// <summary>
        /// 默认的销毁方法
        /// </summary>
        /// <param name="item"></param>
        private static void DefaultDestroy(T item)
        {
            
        }
        private static void DefaultAllocate(T item)
        {
            item.OnAllocate();
        }
        private static void DefaultRecycle(T item)
        {
            item.OnRecycle();
        }

        /// <summary>
        /// 初始化
        /// </summary>
        public UnitPool() : base(DefaultCreate,DefaultDestroy,DefaultRecycle,DefaultAllocate)
        {

        }

    }
}
