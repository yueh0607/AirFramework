using AirFramework;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
public interface MyMessage : IMessage { }
public class MyTestUnit : PoolableObject<MyTestUnit>, IUpdate, IStart
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
    MyTestUnit myunit;

    public async void AAA()
    {
        await Async.Delay(1);
        1.L();

        await Async.Delay(1);
        2.L();

        await Async.Delay(1);
        3.L();

        // var go = (await Addressables.LoadAssetAsync<GameObject>("")).Result;
        await Async.Delay(1);
        4.E();

        async void MyAsync()
        {
            await Async.Delay(1);
        }
        MyAsync();

    }

    void Awake()
    {

        Async.Delay(5, () => print(5)).Coroutine();
 
    }

    void Start()
    {
        AAA();
        000.L();
        Debug.Log("Debug");

    }

}


