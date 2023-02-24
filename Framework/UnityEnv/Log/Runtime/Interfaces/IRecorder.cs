using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public interface IRecorder
    {
        public Dictionary<LogType,LogState> StateList { get; set; }
        /// <summary>
        /// 用于记录日志，在该方法内自行判断合适需要记录，完善到何种程度
        /// </summary>
        /// <param name="logString"></param>
        /// <param name="stackTrace"></param>
        /// <param name="type"></param>
        void Record(string logString, string stackTrace, LogType type);




    }
}
