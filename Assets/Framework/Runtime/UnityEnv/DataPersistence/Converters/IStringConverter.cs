using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface IStringConverter <T>
    {
        public string ToString(T obj);

        public T ToObject(string str);
    }
}
