using System;

namespace AirFramework.Utility.RefBuild
{
    public class BindableProperty<T> where T : IEquatable<T>
    {


        private T _value = default;
        private readonly Func<T> _getter = null;
        private readonly Action<T> _setter = null;

        private readonly bool mode = true;
        public T Value
        {
            get
            {
                if (mode)
                {
                    return _getter();
                }
                return _value;
            }
            set
            {
                if (_value.Equals(value)) return;
                T oldValue = _value;
                if (mode)
                {
                    _setter(value);
                }
                _value = value;
                OnPropertyChanged?.Invoke(oldValue, _value);
            }
        }

        public event Action<T, T> OnPropertyChanged = null;

        private bool _loopListen = false;
        public BindableProperty(Func<T> getter, Action<T> setter, bool loopListen = false)
        {
            mode = true;
            _getter = getter;
            _setter = setter;
            _loopListen = loopListen;
            if (loopListen)
            {
                Framework.Update += ListenChanged;
            }
        }
        public BindableProperty(T initValue)
        {
            mode = false;
            _value = initValue;
        }
        ~BindableProperty()
        {
            if (_loopListen) Framework.Update -= ListenChanged;
        }

        T oldValue;
        void ListenChanged(float deltaTime)
        {
            _value = _getter();
            if (!oldValue.Equals(_value))
            {
                OnPropertyChanged?.Invoke(oldValue, _value);
            }
            oldValue = _value;
        }

    }
}
