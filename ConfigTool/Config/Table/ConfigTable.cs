public class ConfigTable<T> : ITable<T>
{

    public int RowCount { get; private set; } = 0;
    public int ColumnCount { get; private set; } = 0;

#pragma warning disable CS8625 // 无法将 null 字面量转换为非 null 的引用类型。
    private T[,] data = null;
#pragma warning restore CS8625 // 无法将 null 字面量转换为非 null 的引用类型。

    public ConfigTable(int rowCount, int columnCount)
    {
        SetSizeAndCopy(rowCount, columnCount);
    }

    public ConfigTable(ConfigTable<T> table)
    {
        SetSizeAndCopy(table.RowCount, table.ColumnCount, false);
#pragma warning disable CS8604 // 引用类型参数可能为 null。
        table.data.CopyTo(data, 0);
#pragma warning restore CS8604 // 引用类型参数可能为 null。
    }


    public void SetSizeAndCopy(int newRowCount, int newColumnCount, bool copy = true)
    {
        if (RowCount < 0 || ColumnCount < 0) throw new InvalidOperationException($"Invalid New Size:[{newRowCount},{newColumnCount}]");
        RowCount = newRowCount;
        ColumnCount = newColumnCount;
        var temp = data;
        data = new T[RowCount, ColumnCount];

        if (temp != null && copy)
        {
            int minRowCount = Math.Min(RowCount, newRowCount);
            int minColumnCount = Math.Min(ColumnCount, newColumnCount);
            for (int i = 0; i < minRowCount; i++)
            {
                for (int j = 0; j < minColumnCount; j++)
                {
                    data[i, j] = temp[i, j];
                }
            }
        }
        temp = default;
    }


    private void IndexOutOfRangeCheck(int row, int column)
    {
        if (row >= RowCount || row < 0 || column >= ColumnCount || column < 0) throw new IndexOutOfRangeException();
    }
    public T this[int row, int column]
    {

        get
        {
            IndexOutOfRangeCheck(row, column);
            return data[row, column];
        }
        set
        {
            IndexOutOfRangeCheck(row, column);
            data[row, column] = value;
        }
    }
}
