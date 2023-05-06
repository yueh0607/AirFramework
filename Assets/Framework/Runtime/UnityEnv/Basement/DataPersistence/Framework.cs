using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static partial class Framework 
    {
        public static DataManager Data => SingletonProperty<DataManager>.Instance;
    }
}
