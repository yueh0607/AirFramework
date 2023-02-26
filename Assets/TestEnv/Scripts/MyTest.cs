using AirFramework;
using System;
using UnityEngine;
public interface MyMessage : IMessage { }

public class Ny
{
    public int value = 10;
}
public class MyTestUnit : PoolableObject<MyTestUnit>, IUpdate, IStart
{

    void IUpdate.Update()
    {
       

    }

    public override void OnAllocate()
    {

    }

    public override void OnRecycle()
    {

    }
    public static void XXX() { }
    void IStart.Start()
    {

        Debug.Log("Receive!");

        object obj = FuncCreator.GetFunc(typeof(Ny));
        Func<Ny> func= (Func<Ny>)obj;

        func().value.L();
    }

}



public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit mt;
    public void Start()
    {
         mt= this.Create<MyTestUnit>();



    }

}


