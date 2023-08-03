﻿using AirFramework;
using UnityEngine;

class Test2 : PoolableObject, IUpdate
{


    public override void OnAllocate()
    {
        Debug.Log("2Allocate");
    }
    public void Update(float x)
    {
        Debug.Log($"Update:{ID}");
    }
    public override void OnRecycle()
    {

    }
}

public interface ITestAsyncEvent : ICallEvent<AirTask>
{ }


[FrameworkInitialize]
public class Test : IFrameworkInitialize, ITestAsyncEvent
{



    void IFrameworkInitialize.OnFrameworkInitialize()
    {
        this.Operator<ITestAsyncEvent>().Subscribe(Dooo);
        DoSom().Forget();

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
