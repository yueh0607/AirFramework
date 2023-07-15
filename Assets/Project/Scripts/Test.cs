using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[FrameworkInitialize]
public class Test : IUpdate
{
    public Test()
    {
        Debug.Log("Test");
   
    }

    void IUpdate.Update(float deltaTime)
    {
        Debug.Log("Update");
    }
}
