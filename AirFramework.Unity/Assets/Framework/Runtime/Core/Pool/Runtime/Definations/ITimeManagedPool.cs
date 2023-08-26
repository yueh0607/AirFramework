using System;
using System.Collections.Generic;

namespace AirFramework
{

    public interface ITimeManagedPool : IObjectPool, IPool
    {
        public float RecycleTime
        {
            get;
            set;
        }

        public float RecoveryRatio { get; set; }


#if UNITY_EDITOR
    public void RemoveDeadObj();
    
    public List<WeakReference> GetAllAlive();

    public List<WeakReference> GetAllRented();
#endif
    }
}
