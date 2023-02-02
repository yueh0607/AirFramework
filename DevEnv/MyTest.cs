using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AirFramework;

public interface MyMessage: IMessage{}
public class MyTestUnit: IUpdate
{
    public MyTestUnit()
    {
        Framework.LifeCycle.AnalyseAddAll(this);
    }
    void IUpdate.Update()
    {
        //Debug.Log("Receive!");
    }

    string GetStr(int b,string a)
    {
        return($"{b} {a}");
    }
    ~MyTestUnit()
    {
        Framework.LifeCycle.AnalyseRemoveAll(this);
    }
}

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit ;

    void Awake()
    {
        myunit = new MyTestUnit();
        Framework.Message.Operator<MyMessage>().Publish(10, "HH");
    }
   
}

