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
        await Framework.Res.InitializePackage();

        await Framework.UI.Open<CounterPanel>();

    }

    public MyTest() =>Load();

    public void Update(float deltaTime)
    {
        "xxx".L(); 
    }
}
