using System;

namespace AirEditor.Config
{
    public interface ISyntaxAnalyser
    {


        public string TrueType { get; }
        public object StringToValue(string str, string type, int row, int column,string key);
    }

}
