using AirFramework;
using MemoryPack;
using UnityEngine;

[MemoryPackable]
public partial class Test2
{


}


[MemoryPackable]
public partial class AAV0
{
    public int k = 1000;

}

[MemoryPackable]
public partial class AAV : AAV0
{
    public int t = 1000;

}

public interface ITestAsyncEvent : ICallEvent<AirTask>
{ }


[FrameworkInitialize]
public class Test : IFrameworkInitialize, ITestAsyncEvent
{
    void IFrameworkInitialize.OnFrameworkInitialize()
    {
        Dooo();
    }

    async AirTask Dooo()
    {
        await AirTask.Delay(3);
        Debug.Log("Test");
    }
    async AirTask DoSom()
    {
        await this.Operator<ITestAsyncEvent>().TrySendAsync();
        Debug.Log("Do");
        var x = await Framework.GetModule<ViewModule>().Show<CounterPanelView>();
        Debug.Log("Do");
        await x.Operator<IViewShow>().TrySendAsync();
    }
}
