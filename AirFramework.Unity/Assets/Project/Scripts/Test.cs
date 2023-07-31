using AirFramework;
using AirFramework.Internal;
using System.Collections.Generic;
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

[FrameworkInitialize]
public class Test 
{

    public Test()
    {

        //StartTimerDebug().Forget();
       // Test001().WithToken(out var token);
        Test002().Forget() ;
    }


    public async AsyncTask StartTimerDebug()
    {
 
        for (int i = 1; i <= 100; i++)
        {
            //Debug.Log($"Test Init{i}");
            await AsyncTask.Delay(1);
            Debug.Log($"现在时刻：{i}");
        }
    }


    public async AsyncTask Test002()
    {
        var token = await AsyncTask.CatchToken();
        token.Cancel();
        await AsyncTask.Delay(3);
        
    }
 
}
