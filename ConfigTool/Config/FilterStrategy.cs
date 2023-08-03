public static class FilterStrategy
{
    /// <summary>
    /// 策略表:在这里进行逐过程数据过滤和检查
    /// </summary>
    private static List<SyntaxFilter<string>> filters = new List<SyntaxFilter<string>>()
    {
        new NoteFilter(),
        new PrimaryKeyFilter()
    };

    public static int IgnoreDataRowCount = 3;
    public static ConfigTable<string> GetTable(ConfigTable<string> table)
    {
        var temp = table;
        foreach (var filter in filters)
        {
            temp = filter.GetNextTable(temp);
        }
        return temp;
    }
}
