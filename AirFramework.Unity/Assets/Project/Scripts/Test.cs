using AirFramework;
using DG.Tweening;
using UnityEngine;

class Test2 : IAllocate
{


    public void OnAllocate()
    {
        Debug.Log("2Allocate");
    }

  
}

public interface ITestAsyncEvent : ICallEvent<AirTask>
{ }


[FrameworkInitialize]
public class Test : IFrameworkInitialize, ITestAsyncEvent
{
    void IFrameworkInitialize.OnFrameworkInitialize()
    {
        Debug.Log("热更新代码2");
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
