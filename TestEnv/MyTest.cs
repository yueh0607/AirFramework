using AirFramework;
using System;
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

    public async AirTask AAA()
    {
        await Async.Delay(1);
        throw new NotImplementedException();
    }

    async void BB()
    {
        await AAA();
        3.L();
    }


    void CCC()
    {
        333.L();
    }


    void Start()
    {
        BB();
       

    }

}


