namespace AirFramework
{
    public abstract class RefCounter
    {
        private int refCount = 0;
        public int RefCount
        {
            get { return refCount; }
            set
            {
                refCount = value;
                if (refCount == 0)
                {

                    OnZeroRef();
                }
            }
        }


        protected void Allocate() => RefCount++;

        protected void Release() => RefCount--;

        public abstract void OnZeroRef();
    }
}
