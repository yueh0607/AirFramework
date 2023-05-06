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
    TextMeshPro tmp;
    public async void LoadAsync()
    {
        Application.persistentDataPath.L();
        await Framework.Res.InitializePackage();
        await Framework.Models.LoadAsync();
    
        await Framework.UI.Open<CounterPanel>();
        await Async.Delay(5);
        await Framework.UI.Close<CounterPanel>();
        await Async.Delay(5);
        await Framework.UI.Open<CounterPanel>();


        await Framework.Models.SaveAsync();


    }




    Dictionary<Type, object> data = new ();

    public MyTestUnit()
    {

        LoadAsync();
        //JsonSerializerSettings settings = new JsonSerializerSettings { TypeNameHandling = TypeNameHandling.Auto };
        //data.Add(typeof(CounterPanelModel), new CounterPanelModel());

        //(data[typeof(CounterPanelModel)] as CounterPanelModel).Count.Value = 100;
        //string json = JsonConvert.SerializeObject(data, settings);
        //json.L();

        //var n = Framework.Data.ReadAsJson<Dictionary<Type, object>>("PlayerSave.json");
       // n.Count.L();
      //  (n[typeof(CounterPanelModel)] as CounterPanelModel).Count.Value.L();


    }

}


