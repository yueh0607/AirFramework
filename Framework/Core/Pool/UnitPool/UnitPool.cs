using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class UnitPool<T>: GenericPool<T>,IUnitPool<T> where T : Unit,IUnitPoolable,new()
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
        private void DefaultAllocate(T item)
        {
            item.OnAllocate();
            item.ThisPool= this;
        }
        private static void DefaultRecycle(T item)
        {
            item.OnRecycle();
        }

        /// <summary>
        /// 初始化
        /// </summary>
        public UnitPool() : base()
        {
            base.onCreate = DefaultCreate;
            base.onDestroy= DefaultDestroy;
            base.onAllocate = DefaultAllocate;
            base.onRecycle = DefaultRecycle;
        }
        public UnitPool(Func<T> onCreate,Action<T>onDestroy,Action<T> onRecycle,Action<T> onAllocate) : base(onCreate,onDestroy,onRecycle,onAllocate) { }
    
        
    }
}
