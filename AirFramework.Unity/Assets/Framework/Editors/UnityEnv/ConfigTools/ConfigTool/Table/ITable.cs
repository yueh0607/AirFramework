
namespace AirEditor.Config
{
    public interface ITable
    {
        public int RowCount { get; }
        public int ColumnCount { get; }
    }


    public interface ITable<T> : ITable
    {
        T this[int row, int column] { get; set; }
    }
}
