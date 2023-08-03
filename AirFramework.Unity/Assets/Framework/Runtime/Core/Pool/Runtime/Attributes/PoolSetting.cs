using System;

namespace AirFramework
{

    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
    public class PoolSettings : System.Attribute
    {

        public bool UsePool { get; private set; } = false;

        public float RecycleInterval { get; private set; } = 60f;
        public float RecycleRatio { get; private set; } = 0.5f;
        public PoolSettings(bool usePool)
        {
            UsePool = usePool;
        }

        public PoolSettings(float recycleInterval = -1, float recycleRatio = 0.5f)
        {
            UsePool = true;
            RecycleInterval = recycleInterval;
            RecycleRatio = recycleRatio;

        }

    }


    public class PoolIgnore : PoolSettings
    {
        public PoolIgnore() : base(usePool: false)
        {

        }
    }
    public class PoolRecycle : PoolSettings
    {
        public PoolRecycle(float recycleInterval = -1, float recycleRatio = 0.5f) : base(recycleInterval, recycleRatio)
        {

        }
    }


}
