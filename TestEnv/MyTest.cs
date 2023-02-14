using AirFramework;
using System;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Profiling;
using UnityEngine.ResourceManagement.AsyncOperations;
public interface MyMessage : IMessage { }
public class MyTestUnit : PoolableObject<MyTestUnit>, IUpdate, IStart
{

    void IUpdate.Update()
    {
        Debug.Log("Receive!");
    }

    public override void OnAllocate()
    {

    }

    public override void OnRecycle()
    {

    }

    void IStart.Start()
    {

    }

}


public class MyTask : Task
{
    public MyTask(Action action) : base(action)
    {

    }
}

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit;



    public async AirTask DoSomething()
    {

        await Async.Delay(1);
        await Async.Delay(1);

        await Async.Delay(1);
        await Async.Delay(1);
        await Async.Delay(1);
        await Async.Delay(1);
        1.L();
    }
    public async void DoSomething0()
    {
        AsyncToken token = this.Create<AsyncToken>();
        Async.Delay(3,token.Cancel).Coroutine();
        await DoSomething().WithToken(token);

    }
    void Start()
    {
        //AsyncToken token = this.Create<AsyncToken>();
        DoSomething0();
        //token.Yield();
        

    }

}


