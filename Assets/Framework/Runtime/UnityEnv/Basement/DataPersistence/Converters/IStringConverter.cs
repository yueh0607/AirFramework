namespace AirFramework
{
    public interface IStringConverter<T>
    {
        public string ToString(T obj);

        public T ToObject(string str);
    }
}
