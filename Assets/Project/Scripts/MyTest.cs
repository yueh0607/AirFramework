using AirFramework;
using MyNamespace;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Reflection;
using TMPro;
using UnityEngine;
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

    public async void LoadAsync()
    {
        //初始化资源管理系统
        await Framework.Res.InitializePackage();
        //加载全部Model
        await Framework.Models.LoadAllAsync();
        
        await Framework.UI.Open<CounterPanel>();
        await Async.Delay(3);
        await Framework.UI.Close<CounterPanel>();


        //保存Model
        await Framework.Models.SaveAllAsync();


    }




    Dictionary<Type, object> data = new();

    public MyTestUnit()
    {
        Application.persistentDataPath.L();
        LoadAsync();



    }

}


