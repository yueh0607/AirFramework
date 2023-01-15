using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IObjectPool : IPool 
    {
        public int MaxCapacity { get; }

        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>
        public object Allocate();
        /// <summary>
        /// 回收对象
        /// </summary>
        public void Recycle(object item);
        /// <summary>
        /// 预加载缓存
        /// </summary>
        /// <param name="count"></param>

        public void Preload(int count);

        /// <summary>
        /// 卸载缓存
        /// </summary>
        /// <param name="count"></param>
        public void Unload(int count);
    }
}
