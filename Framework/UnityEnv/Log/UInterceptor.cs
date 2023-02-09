using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class UInterceptor : IInterceptor
    {
        private void CurrentDomain_UnhandledException(object sender, UnhandledExceptionEventArgs e)
        {
            recorder.Record("", new StackTrace((Exception)(e.ExceptionObject)).ToString(),LogType.Exception);
        }
        IRecorder recorder;

        public void Intercept(IRecorder recorder)
        {
            this.recorder = recorder;
            Application.logMessageReceived += recorder.Record;
            AppDomain.CurrentDomain.UnhandledException += CurrentDomain_UnhandledException;
        }
        public void UnIntercept(IRecorder recorder)
        {
            Application.logMessageReceived -= recorder.Record;
            AppDomain.CurrentDomain.UnhandledException -= CurrentDomain_UnhandledException;
        }
    }
}
