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
    public static void XXX() { }
    void IStart.Start()
    {
        1.L();

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
    public void Start()
    {
        MyTestUnit mt = this.Create<MyTestUnit>();

       
        
    }

}


