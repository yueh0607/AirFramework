using Sirenix.OdinInspector;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace AirFramework
{

    public class UIMark : MonoBehaviour
    {

#if UNITY_EDITOR

        public Component buildTarget = null;

        public string buildName = string.Empty;
#endif

    }
}
