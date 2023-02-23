using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace AirFramework
{
    public static class LoopDefender
    {

        public static bool isReloadedRun = true;

        [DidReloadScripts]
        public static async void OnScriptsReloaded()
        {
            if(EditorApplication.isPlaying)
            {
                EditorApplication.isPlaying = false;
                if (isReloadedRun)
                {     
                    while(Time.frameCount>1)
                    {
                        await Async.Delay(0.1f);

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
