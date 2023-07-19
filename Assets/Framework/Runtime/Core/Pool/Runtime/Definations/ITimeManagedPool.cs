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
    }
}
