namespace AirFramework
{
    public class UIDPool : Unit, IDepositablePool
    {

        private readonly UIDGenerator generator = new UIDGenerator(100);

        public int Count => generator.Count;

        public int RepeatCount
        {
            get => generator.RepeatCount;
            set => generator.RepeatCount = value;
        }


        public bool IsDeposit { get; } = false;
        bool IDepositablePool.IsDeposit { get => IsDeposit; set => _ = value; }

        public ulong Allocate() => generator.Allocate();

        public void Recycle(ulong id) => generator.Recycle(id);


        public void Clear()
        {
            generator.Clear();
        }

        protected override void OnDispose()
        {
            Clear();
        }

        public UIDPool(int repeatCount)
        {
            RepeatCount = repeatCount;
        }
    }
}
