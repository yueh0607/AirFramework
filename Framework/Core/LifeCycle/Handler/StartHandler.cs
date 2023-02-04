namespace AirFramework
{
    public class StartHandler : Handler<IStart>
    {
        public override void OnLifeCycleRegister(IStart item)
        {
            Framework.LifeCycle.Register<IStart>(item.Start);
        }

        public override void OnLifeCycleUnRegister(IStart item)
        {
            Framework.LifeCycle.UnRegister<IStart>(item.Start);
        }
    }


    


    

}
