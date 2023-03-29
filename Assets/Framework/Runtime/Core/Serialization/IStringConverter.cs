namespace AirFramework
{
    public interface IStringConverter<T> : IConverter<T, string>
    {
        public new string ConvertTo(T obj);
        public new T ConvertFrom(string value);
    }
}
