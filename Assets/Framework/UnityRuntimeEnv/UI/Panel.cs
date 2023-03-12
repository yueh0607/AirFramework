using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public abstract class Panel
    {
        public string path;

        private GameObject prefab;
        

        public abstract void Open();
        public abstract void Close();

        
    }
}
