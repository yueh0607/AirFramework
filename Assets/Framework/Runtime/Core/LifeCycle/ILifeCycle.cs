namespace AirFramework
{
    /// <summary>
    /// 定义接口继承该接口以实现自定义生命周期,需要在某些位置调用Framework.LifeCycle.Publish<T1>();来广播生命周期
    /// </summary>
    public interface ILifeCycle : IMessage
    {

    }
}
