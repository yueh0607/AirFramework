using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AirFramework;
using System.Threading.Tasks;

public interface MyMessage: IMessage{}
public class MyTestUnit: IUpdate,IPoolable
{
    public IObjectPool ThisPool { get; set ; }
    public bool IsRecycled { get ; set ; }

    public MyTestUnit()
    {
        //Framework.LifeCycle.AnalyseAddAll(this);
    }
    void IUpdate.Update()
    {
        Debug.Log("Receive!");
    }

    public void OnRecycle()
    {
        
    }

    public void OnAllocate()
    {
        
    }

    ~MyTestUnit()
    {//Framework.LifeCycle.AnalyseRemoveAll(this);
    }
}

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit ;



    void Awake()
    {
        myunit =Framework.Pool.Allocate<MyTestUnit>();
        
        //TestAsync();

    }
   
}

