using AirFramework;
using AirFramework.Internal;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

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

     
    }


 
}
