using AirFramework;
using MemoryPack;
using UnityEngine;


public interface ITestAsyncEvent : ICallEvent<AirTask>
{ }


public class T2 : IAllocate,IRecycle
{
    public void OnAllocate()
    {
        Debug.Log("AllocateT2");

    }

    public void OnRecycle()
    {
        Debug.Log("RecycleT2");
    }
}


[FrameworkInitialize]
public class Test : IFrameworkInitialize, ITestAsyncEvent
{
    void IFrameworkInitialize.OnFrameworkInitialize()
    {
        Debug.Log("Test");
        var t2 = Framework.AnyGet<T2>();

        t2.RecycleSelf();
    }

    
}
