using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 实现与GenericPool相同的池，默认使用new来创建对象
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class GenericPool_<T> : GenericPool<T> where T : class, new()
    {
        public GenericPool_():base()
        {
            base.onCreate = Extensions.DefaultNewCreate<T>;
        }
    }
}
