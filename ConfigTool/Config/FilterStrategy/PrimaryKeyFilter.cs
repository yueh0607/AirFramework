public class PrimaryKeyFilter : SyntaxFilter<string>
{
    readonly HashSet<string> filterID = new HashSet<string>();


    public override ConfigTable<string> GetNextTable(ConfigTable<string> table)
    {

        for (int i = 0; i < table.RowCount; i++)
        {
            if (filterID.Contains(table[i, 0]))
            {
                throw new System.ArgumentException($"Primary Key conflict：{table[i, 0]} Guess line:{i}");
            }
            filterID.Add(table[i, 0]);
        }
        return table;
    }
}
