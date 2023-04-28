using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class UnitGameObject_AsyncEx 
    {
        public static IAsyncTask GetAwaiter(this UnitGameObject unitObj)
        {
            

            if (unitObj.IsAlive) return Framework.Pool.Allocate<AsyncTaskCompleted>();
            var task = Framework.Pool.Allocate<AsyncTask>();
            unitObj.OnCompleted += task.SetResult;
            return task;
        }
    }
}
