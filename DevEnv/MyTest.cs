using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AirFramework;
using System.Threading.Tasks;
using UnityEngine.Pool;
using System;
using Unity.Collections;

public interface MyMessage: IMessage{}
public class MyTestUnit: PoolableObject<MyTestUnit>,IUpdate,IStart
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

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit ;




   public async void AAA()
    {
        await Async.Delay(1);
        print(0);
        await Async.Delay(1);

        print("End");
    }

    void Awake()
    {
        Async.Delay(3, () => print(2)).Coroutine();
        AAA();
    }

    void Start()
    {
        
    }
   
}

