using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IStringConverter<T>
    {
        public string ConvertToString(T obj);
        public T ConvertFromString(string value);
    }
}
