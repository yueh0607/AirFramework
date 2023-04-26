namespace AirFramework
{
    public delegate void PropertyChangedEvent<T>(T oldValue, T newValue);
    public interface IValueChanged<T> : IValueContainer<T>
    {
        public event PropertyChangedEvent<T> OnValueChanged;

    }

}
