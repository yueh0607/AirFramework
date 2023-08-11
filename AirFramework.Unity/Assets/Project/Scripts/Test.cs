using AirFramework;
using MemoryPack;
using System;
using System.Collections.Generic;
using System.Numerics;
using System.Text;
using UnityEngine;

[MemoryPackable]
public partial class Test2
{


}


[MemoryPackable]
public partial class AAV0
{
    public int k = 1000;

}

[MemoryPackable]
public partial class AAV : AAV0
{
    public int t = 1000;

}

public interface ITestAsyncEvent : ICallEvent<AirTask>
{ }


[FrameworkInitialize]
public class Test : IFrameworkInitialize, ITestAsyncEvent
{
    void IFrameworkInitialize.OnFrameworkInitialize()
    {
        DataPack pack = new DataPack();

        Log(pack);

        pack.Sn = 33;
        Log(pack);
        pack.Conv = 1;
        Log(pack);

        pack.Data = new byte[100];
        Log(pack);
    }

    void Log(DataPack pack)
    {
        {
            byte[] bytes = MemoryPackSerializer.Serialize(pack);
            Debug.Log(bytes.Length);
            StringBuilder builder = new StringBuilder();
            foreach (byte b in bytes)
                builder.Append(b);
            Debug.Log($"{bytes.Length}位:{builder.ToString()}");
        }
    }

    async AirTask Dooo()
    {
        await AirTask.Delay(3);
        Debug.Log("Test");
    }
    async AirTask DoSom()
    {
        await this.Operator<ITestAsyncEvent>().TrySendAsync();
        Debug.Log("Do");
        var x = await Framework.GetModule<ViewModule>().Show<CounterPanelView>();
        Debug.Log("Do");
        await x.Operator<IViewShow>().TrySendAsync();
    }
}
