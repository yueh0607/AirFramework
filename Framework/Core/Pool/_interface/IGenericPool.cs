using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public interface IGenericPool<T> : IObjectPool
    {
        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public T Allocate();
        /// <summary>
        /// 回收对象
        /// </summary>
        /// <param name="item"></param>
        public void Recycle(T item);
    }
}
