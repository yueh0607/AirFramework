using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AirFramework;
using System.Threading.Tasks;
using UnityEngine.Pool;

public interface MyMessage: IMessage{}
public class MyTestUnit: PoolableObject<MyTestUnit>,IUpdate,IStart
{

    public MyTestUnit()
    {
        //Framework.LifeCycle.AnalyseAddAll(this);
    }
    void IUpdate.Update()
    {
        Debug.Log("Receive!");
    }

    public override void OnAllocate()
    {
        
    }

    public override void OnRecycle()
    {
        
    }

    void IStart.Start()
    {
        
    }

    ~MyTestUnit()
    {//Framework.LifeCycle.AnalyseRemoveAll(this);
    }
}

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit ;


    void OnTime(float t)
    {
        Debug.Log(t);
    }
    void OnCom()
    {



    }

    class People
    {
        public string name;
        public int age;
    }

    struct Vector222
    {
        public float x; 
        public float y;
    }

    void Awake()
    {
        
        //TestAsync();

    }
   
}

