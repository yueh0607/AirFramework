namespace AirFramework
{

    public interface IManagedPool : IObjectPool
    {
        public float RecycleTime
        {
            get;
            set;
        }

        public float RecoveryRatio { get; set; }
    }
}
