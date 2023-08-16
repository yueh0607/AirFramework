using System;
using System.Collections.Generic;
using System.Reflection;

namespace AirEditor.Config
{
    public static class FilterStrategy
    {
        /// <summary>
        /// 策略表:在这里进行逐过程数据过滤和检查
        /// </summary>
        private static SortedList<int,SyntaxFilter<string>> filters = new SortedList<int,SyntaxFilter<string>>()
    {
        //new NoteFilter(),
        //new PrimaryKeyFilter()
    };
        public static void InitFilters()
        {
            filters.Clear();
            var ass = AppDomain.CurrentDomain.GetAssemblies();
            foreach (var assembly in ass)
            {
                var types = assembly.GetTypes();
                foreach (var type in types)
                {
                    var m_filter = type.GetCustomAttribute<ExcelFilterAttribute>();
                    if (m_filter != null)
                        filters.Add(m_filter.Order,(SyntaxFilter<string>)Activator.CreateInstance(m_filter.FilterType));

                }

            }
        }


        public static int IgnoreDataRowCount = 2;
        public static ConfigTable<string> GetTable(ConfigTable<string> table)
        {
            var temp = table;
            foreach (var filter in filters)
            {
                temp = filter.Value.GetNextTable(temp);
            }
            return temp;
        }
    }
}