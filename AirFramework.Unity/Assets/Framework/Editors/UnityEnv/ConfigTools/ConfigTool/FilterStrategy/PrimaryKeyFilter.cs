using System.Collections.Generic;

namespace AirEditor.Config
{
    [ExcelFilter(typeof(PrimaryKeyFilter),3)]
    public class PrimaryKeyFilter : SyntaxFilter<string>
    {
        readonly HashSet<string> filterID = new HashSet<string>();


        public override ConfigTable<string> GetNextTable(ConfigTable<string> table)
        {
            filterID.Clear();
            for (int i = 0; i < table.RowCount; i++)
            {
                if (filterID.Contains(table[i, 0]))
                {
                    throw new System.ArgumentException($"Primary Key conflict：\"{table[i, 0]}\" Guess line:\"{i + 1}\"");
                }
                filterID.Add(table[i, 0]);
            }
            return table;
        }
    }
}