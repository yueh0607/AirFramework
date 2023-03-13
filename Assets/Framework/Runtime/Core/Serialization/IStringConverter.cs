using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IStringConverter<T> : IConverter<T,string>
    {
        public new string ConvertTo(T obj);
        public new T ConvertFrom(string value);
    }
}
