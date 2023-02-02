namespace AirFramework
{
    public abstract class NotDisposedUnit : Unit
    {

        public override void Dispose()
        {
            OnDispose();
        }

    }
}
