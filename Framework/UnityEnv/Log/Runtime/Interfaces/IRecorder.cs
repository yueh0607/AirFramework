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


        void Record(string logString, string stackTrace, LogType type);




    }
}
