namespace AirFramework
{

    public interface IManagedPool : IObjectPool
    {
        public double RecycleTime
        {
            get;
            set;
        }

        public float RecoveryRatio { get; set; }
    }
}
