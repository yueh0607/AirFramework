namespace AirFramework
{
    public abstract class UnitGameObject<T> : UnitGameObject where T : UnitGameObject<T>
    {

        public abstract void OnLoad();
        public abstract void OnUnload();

        public async AsyncTask<T> Initialize()
        {
            var unit =  await base.Bind<T>();
            OnLoad();
            return unit;
        }

        public void Release()
        {
            OnUnload();
            base.Destroy();
        }
        


    }
}
