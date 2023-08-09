using AirFramework;
using MemoryPack;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

[MemoryPackable]
public partial class Test2
{
    public int X = 100;
    public int Y = 100;
    public string str = "66";
    public List<int> list = new List<int>() { 1, 5, 6 };

    public AAV aAV = new AAV();
    public Vector3 vector = Vector3.zero;
}

[MemoryPackable]
public partial class AAV
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
        Test2 test = new Test2();
        byte[] bytes = MemoryPackSerializer.Serialize(test);
        StringBuilder builder = new StringBuilder();
        foreach (byte b in bytes)
            builder.Append(b);
        Debug.Log(builder.ToString());

        var t2 = MemoryPackSerializer.Deserialize<Test2>(bytes);
        Debug.Log(t2.str);
        Debug.LogError("热更前的日志");

        // SceneManager.LoadScene("TestScene");
        Debug.LogError("更新成功，替换bundle后的日志");

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
