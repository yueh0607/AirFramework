using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IValueContainer
    {
    }
    public interface IValueContainer<T>:IValueContainer
    {
        T Value { get;}
    }
}
