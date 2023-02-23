using AirFramework;
using Sirenix.OdinInspector;
using Sirenix.Utilities;
using System.Collections.Generic;
using UnityEngine;



public class MyTest1 : SerializedMonoBehaviour
{
   
    [DictionaryDrawerSettings(KeyLabel ="Key",ValueLabel ="Value")]
    public Dictionary<string, string> xxx = new();

    public void Start()
    {
        xxx.ForEach((x) => x.L());
    }

}


