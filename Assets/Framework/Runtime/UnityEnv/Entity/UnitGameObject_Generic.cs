namespace AirFramework
{
    public abstract class UnitGameObject<T> : UnitGameObject where T : UnitGameObject<T>
    {
        protected override void OnCreateObject()
        {
            UnitGameObject.Instantiate<UnitGameObject<T>>(this);
        }

        protected override void OnDestroyObject()
        {
            UnitGameObject.Destroy(this);
        }


    }
}
