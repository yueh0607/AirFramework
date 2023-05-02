using AirFramework;
using MyNamespace;
using System.Collections.Generic;
using System.Reflection;
using TMPro;
using UnityEngine.TextCore;
public class MyUnitObj : UnitGameObject<MyUnitObj>
{

    public override void OnLoad()
    {
        "OnLoad".L();
    }

    public override void OnUnload()
    {
        "OnUnLoad".L();
    }


}

[FrameworkInitialize]
public class MyTestUnit : SimpleUnit
{
    TextMeshPro tmp;
    public async void LoadAsync()
    {
       
        await Framework.Res.InitializePackage();

        await Framework.UI.Open<CounterPanel>();
        await Async.Delay(3);
        await Framework.UI.Close<CounterPanel>();
        await Async.Delay(3);
        await Framework.UI.Open<CounterPanel>();

        await Async.Delay(3);
        await Framework.UI.Open<TestPanelA>();
        await Async.Delay(1);
        await Framework.UI.Open<TestPanelB>();


    }


    public MyTestUnit()
    {
        
        LoadAsync();
    }

}


