﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public delegate void PropertyChangedEvent<T>(T oldValue, T newValue);
    public  interface IValueChanged<T>
    {
        public event PropertyChangedEvent<T> OnValueChanged;
        public T Value { get; set; }
    }
 
}
