using AirFramework;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Profiling;


class Test2 : Unit, IAllocate, IRecycle
{
    public void OnAllocate()
    {
        Debug.Log("2Allocate");
    }

    public void OnRecycle()
    {
        Debug.Log("2Recycle");
    }

    protected override void OnDispose()
    {
        Debug.Log("test2");
    }
}

[FrameworkInitialize]
public class Test : IUpdate
{

    public Test()
    {
        Test2 test2 = new Test2();
        test2.StartLife();
        //test2.Operator<IAllocate>().Subscribe(test2.OnAllocate);
        test2.Operator<IAllocate>().Publish();
    }




    void IUpdate.Update(float deltaTime)
    {
        //Action x = () => Debug.Log(0);
        //Action y = () => Debug.Log(1);

        //Profiler.BeginSample("GCSample");

        //for (int i = 0; i < 10000; i++)
        //{
        //    Action j = x + y;
        //}


        //Profiler.EndSample(); ;
    }



}
