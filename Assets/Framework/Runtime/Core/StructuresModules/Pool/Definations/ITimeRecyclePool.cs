namespace AirFramework
{

    public interface ITimeRecyclePool : IObjectPool,IPool
    {
        public float RecycleTime
        {
            get;
            set;
        }

        public float RecoveryRatio { get; set; }
    }
}
