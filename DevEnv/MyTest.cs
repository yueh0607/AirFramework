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
        Debug.Log("Receive!");
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
    }
}

