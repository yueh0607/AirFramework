using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace AirFramework
{
    public class MemoryHolder : PoolableObject
    {
        private MemoryStream stream;

        public MemoryStream Value=> stream;

        protected override void OnCreate()
        {
            base.OnCreate();
            stream = new MemoryStream();
        }

        public override void OnAllocate()
        { 
        }

        public override void OnRecycle()
        {
            stream.Position = 0;
            stream.SetLength(0);
        }
    }
}
