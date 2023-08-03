public abstract class SyntaxFilter<T>
{
    public abstract ConfigTable<T> GetNextTable(ConfigTable<T> table);
}
