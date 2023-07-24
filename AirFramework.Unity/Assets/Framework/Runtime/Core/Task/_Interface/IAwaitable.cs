namespace AirFramework
{
    public interface IAwaitable
    {
        public IAwaiter GetAwaiter();
    }
    public interface IAwaitable<T>
    {
        public IAwaiter<T> GetAwaiter();
    }
}
