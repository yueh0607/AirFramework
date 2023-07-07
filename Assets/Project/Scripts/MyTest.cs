using AirFramework;
using MyNamespace;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[FrameworkInitialize]
public class MyTest : IUpdate
{
   public async void Load()
    {
        //await Async.Delay(1);
        Debug.Log("hah");
        await Framework.Res.InitializePackage();

        await Framework.UI.Open<CounterPanel>();

    }



    async void Test()
    {
        await Async.Delay(3);
        333.L();
    }
    public MyTest()
    {
        Test();
    }


    void IUpdate.Update(float x)
    {
        11.L();
    }

}
