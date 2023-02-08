using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class CancelToken: PoolableObject<CancelToken>
    {
        public bool IsCanceled { get; private set; } = false;

        public Action CancelAction { get; set; }


        public void Cancel()
        {
            IsCanceled = true;
            CancelAction?.Invoke();
        }


        public async void CancelAfter(float seconds)
        {
            await Async.Delay(seconds);
            Cancel();
        }

        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            CancelAction = null;
            IsCanceled= false;
        }
    }


}
