using AirFramework;
using AirFramework.Internal;
using System.Collections.Generic;
using UnityEngine;


class B : ITest, ITest2
{
    void ITest.TTT()
    {
    
    }

    void ITest2.TTT()
    {
   
    }
}

public interface ITest:ITest0
{

}

public interface ITest2:ITest0
{

}

public interface ITest0
{
    void TTT();
}

class Test2 : PoolableObject, IUpdate
{
    public async AsyncTask Test002(AsyncToken token)
    {
        await AsyncTask.Delay(3);
        token.Yield();
        Debug.Log("那年，我暂停了这个Task");
        await AsyncTask.Delay(3);
        Debug.Log("你知道暂停之后的三秒我是怎么过的吗！！现在我要继续我的Task了");
        token.Continue();
    }
    public async AsyncTask Test001()
    {
        await AsyncTask.Delay(4);
        Debug.Log("3秒过去了，我整整等了你3秒");
        await AsyncTask.Delay(3);
        Debug.Log("然后我又等了你3秒");
    }

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
public class Test : ITest

{
    Test2 test2 = null;
    public Test()
    {
        //test2 = new Test2();
        //test2.StartLife();

        //test2.Operator<IAllocate>().Publish();
        //test2.Dispose();

        //StartTimerDebug().Forget();
        ITest IT = this;
        IT.Subscribe();
        Dictionary<long, Unit> testMap = new Dictionary<long, Unit>();
        for (int i = 0; i < 1; i++)
        {
            var t = Framework.Pool.Allocate<Test2>();

            testMap.Add(t.ID, t);
        }
        testMap.ClearAndDispose();
        for (int i = 0; i < 1; i++)
        {
            var t = Framework.Pool.Allocate<Test2>();

            testMap.Add(t.ID, t);
        }
        testMap.ClearAndDispose();
    }

    public void OnEvent(int arg1)
    {
        throw new System.NotImplementedException();
    }

    public async AsyncTask StartTimerDebug()
    {
        for (int i = 1; i <= 100; i++)
        {
            await AsyncTask.Delay(1);
            Debug.Log($"现在时刻：{i}");
        }
    }




}
