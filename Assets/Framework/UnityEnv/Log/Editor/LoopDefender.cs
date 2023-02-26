using AirFramework.Editor;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace AirFramework
{
    public class LoopDefender : UnityEditor.Editor
    {

        [DidReloadScripts]
        public static async void OnScriptsReloaded()
        {
            RuntimeConfig config = FrameworkEditor.RuntimeGetRuntimeConfig();

            if (!config.defend_enable) return;

            if(EditorApplication.isPlaying)
            {  
                EditorApplication.isPlaying = false;
                if (config.restart_when_compile)
                {     
                    while(Time.frameCount>1)
                    {
                        await Async.Delay(config.loop_time_out);
                         
                        if(Time.frameCount<=1)
                        {
                            EditorApplication.isPlaying = true;
                            break;
                        }
                    }
                }

            }
        }

    }
}
