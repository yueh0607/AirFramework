using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AirFramework;
using System.Threading.Tasks;

public interface MyMessage: IMessage{}
public class MyTestUnit: IUpdate,IPoolable
{
    public IObjectPool ThisPool { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public bool IsRecycled { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }

    public MyTestUnit()
    {
        //Framework.LifeCycle.AnalyseAddAll(this);
    }
    void IUpdate.Update()
    {
        Debug.Log("Receive!");
    }

    public void OnRecycle()
    {
        
    }

    public void OnAllocate()
    {
        
    }

    ~MyTestUnit()
    {//Framework.LifeCycle.AnalyseRemoveAll(this);
    }
}

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit ;


    AirTask Delay(int sec)
    {
        AirTask task = new();
        
        return task;
    }

    async void TestAsync()
    {


    }

    void Awake()
    {
        //myunit =Framework.Pool.Allocate<MyTestUnit>();
        
        //TestAsync();

    }
   
}

