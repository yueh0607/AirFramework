using AirFramework;
using UnityEngine;

public interface MyMessage: IMessage{}
public class MyTestUnit: PoolableObject<MyTestUnit>,IUpdate,IStart
{

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

}

public class MyTest : MonoBehaviour, IMessageReceiver
{
    MyTestUnit myunit ;

   public async void AAA()
    {
        await Async.Delay(1);
        print(1);

        await Async.Delay(1);
        print(2);

        await Async.Delay(1);
        print(3);

        await Async.Delay(1);
        print(4);

    }

    void Awake()
    {
        //Async.Delay(3, () => print(2)).Coroutine();
        
    }

    void Start()
    {
        AAA();
    }
   
}

