namespace AirFramework
{
    public abstract class NotDisposedUnit : Unit
    {
        /// <summary>
        /// 此方法将不会管理Disposed
        /// </summary>
        public override void Dispose()
        {
            OnDispose();
        }

    }
}
