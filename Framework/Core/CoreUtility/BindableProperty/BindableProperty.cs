using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework.Assets.Framework.Core.BindableProperty
{
    public class BindableProperty<T> where T :IEqualityComparer<T>
    {
        private T value = default(T);

        
        protected T Value { 
            get => value;
            set
            {
                if (!Equals(value,this.value))
                {
                    this.value = value;
                    OnValueChanged(value);
                }
                

            }
        }

        public event Action<T> OnValueChanged;

        public BindableProperty(T value)
        {
            this.value = value;
        }
        public BindableProperty()
        {

        }
    }
}
