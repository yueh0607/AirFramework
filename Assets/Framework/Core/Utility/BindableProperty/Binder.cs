using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class Binder<T>
    {
        Action<T> Setter = null;
        public void AddListener(Action<T> setter) => Setter += setter;
        public void Publish(T value)
        {
            Setter?.Invoke(value);
        }
    }
}
