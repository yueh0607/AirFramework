using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class UnitPool<T>: GenericPool<Unit> where T : Unit,IUnitPoolable,new()
    {
        /// <summary>
        /// 默认的创建方法
        /// </summary>
        /// <returns></returns>
        public static Unit DefaultCreate()
        {
            return new T();
        }
        /// <summary>
        /// 默认的销毁方法
        /// </summary>
        /// <param name="item"></param>
        private static void DefaultDestroy(Unit item)
        {
            item.Dispose();
        }
        /// <summary>
        /// 初始化
        /// </summary>
        public UnitPool() : base(DefaultCreate,DefaultDestroy,null,null)
        {

        }

    }
}
