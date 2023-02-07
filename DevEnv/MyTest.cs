using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AirFramework;
using System.Threading.Tasks;
using UnityEngine.Pool;
using System;

public interface MyMessage: IMessage{}
public class MyTestUnit: PoolableObject<MyTestUnit>,IUpdate,IStart
{

    public MyTestUnit()
    {
        //Framework.LifeCycle.AnalyseAddAll(this);
    }
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

    ~MyTestUnit()
    {//Framework.LifeCycle.AnalyseRemoveAll(this);
    }
}

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit ;



    public async AirTask Delay(Action act)
    {
        var timer = this.Create<TimerCall>();
        var task = this.Create<AirTask>();
        timer.OnCompleted += act;
        timer.OnCompleted += task.SetResult;
        
        timer.Start(new TimeSpan(0,0,5));
    }
   
    void Awake()
    {
       Delay(()=>Debug.Log(100));
    }
   
}

