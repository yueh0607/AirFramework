using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework.Editor
{
    
    

    [CreateAssetMenu(menuName = "ConfigFile/FrameworkInfo")]
    public class RuntimeConfig :ScriptableObject
    {

        public LogState logger_log_enable = LogState.Simple;
        public LogState logger_warn_enable = LogState.Simple;
        public LogState logger_exception = LogState.All;
        public LogState logger_error = LogState.All;
        public bool logger_loop_defend = true;

        public bool is_release = false;
    }
}
