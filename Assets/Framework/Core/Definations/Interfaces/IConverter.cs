using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IConverter<T,K>
    {
        public K ConvertTo(T obj);
        public T ConvertFrom(K obj);
    }
}
