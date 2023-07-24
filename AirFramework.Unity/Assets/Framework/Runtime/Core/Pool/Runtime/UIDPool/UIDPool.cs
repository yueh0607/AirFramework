namespace AirFramework
{
    public class UIDPool : Unit, IDepositablePool
    {

        private readonly UIDGenerator generator;

        public int Count => generator.SurvivalCapacity;



        public bool IsDeposit { get; } = false;
        bool IDepositablePool.IsDeposit { get => IsDeposit; set => _ = value; }

        public long Allocate() => generator.Allocate();

        public void Recycle(long id) => generator.Release(id);


        public void Clear() => generator.ForceReleaseAll();

        protected override void OnDispose() => Clear();


        public UIDPool(int defaultCount = 0) => new UIDGenerator(defaultCount);

    }
}
