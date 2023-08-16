using OfficeOpenXml;
using System;
using System.IO;

namespace AirEditor.Config
{
    public class ExcelStream : IDisposable, ITable<string>
    {

        public string SourcePath { get; set; } = string.Empty;

        public int Sheet { get; set; } = 1;
        private ConfigTable<string> data = null;

        public ConfigTable<string> Data
        {
            get
            {
                if (data == null) throw new NullReferenceException("Please read the data before accessing it");
                return data;
            }
        }

#pragma warning disable CS8602 // 解引用可能出现空引用。
        public int RowCount => data.RowCount;


        public int ColumnCount => data.ColumnCount;
#pragma warning restore CS8602 // 解引用可能出现空引用。
        public string this[int row, int column]
        {
            get => Data[row, column];
            set => Data[row, column] = value;

        }

        public ExcelStream(string location, int sheet = 1)
        {
            SourcePath = location;
            Sheet = sheet;
        }

        public void Read()
        {
            using (var package = new ExcelPackage(new FileInfo(SourcePath)))
            {
                // 获取工作表
                ExcelWorksheet worksheet = package.Workbook.Worksheets[Sheet]; // 默认读取第一个工作表
                //初始化数据表
                int rowCount = worksheet.Dimension.Rows;
                int columnCount = worksheet.Dimension.Columns;

                data = new ConfigTable<string>(rowCount, columnCount);

                //初始化单元格值
                for (int i = 0; i < rowCount; i++)
                {
                    for (int j = 0; j < columnCount; j++)
                    {
                        data[i, j] = worksheet.Cells[i + 1, j + 1].Text;
                    }
                }
            }
        }
        public void Write()
        {
            using (var package = new ExcelPackage(new FileInfo(SourcePath)))
            {
                ExcelWorksheet worksheet = package.Workbook.Worksheets[Sheet];

#pragma warning disable CS8602 // 解引用可能出现空引用。
                for (int i = 0; i < data.RowCount; i++)
                {
                    for (int j = 0; j < data.ColumnCount; j++)
                    {
                        worksheet.Cells[i + 1, j + 1].Value = data[i, j];
                    }
                }
#pragma warning restore CS8602 // 解引用可能出现空引用。

                package.Save();
            }
        }

        public void Dispose()
        {
            data = null;
        }
    }
}
