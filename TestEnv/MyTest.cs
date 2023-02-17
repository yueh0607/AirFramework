using AirFramework;
using System;
using System.Diagnostics;
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
        //Debug.Log("Receive!");
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



    public async AsyncTask<int> DoSomething()
    {
        0.L();
        await Async.Delay(1);//28
        1.L();
        await Async.Delay(1);//42
        2.L();
        await Async.Delay(1);
        3.L();
        await Async.Delay(1);
        4.L();
        await Async.Delay(1);
        5.L();
        await Async.Delay(1);
        6.L();
        return 7;

    }
    public async void DoSomething1()
    {
        AsyncToken token = this.Create<AsyncToken>();
        Async.Delay(3,token.Cancel).Coroutine();//14
        //await Async.Delay(1);
        //$"ID:{token.TokenID}".L();
        await DoSomething0().WithToken(token);//23


    }
    public async AsyncTask DoSomething0()
    {

        int x = await DoSomething();//.InitToken(token);//26
        x.L();

    }
    void Start()
    {
        Application.persistentDataPath.L();
        DoSomething1();


    }

}


