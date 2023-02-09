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
        100.L();

        await Async.Delay(1);
        100.L();

        await Async.Delay(1);
        100.L();

        // var go = (await Addressables.LoadAssetAsync<GameObject>("")).Result;
        await Async.Delay(1);
        100.L();

    }

    void Awake()
    {
        //Async.Delay(3, () => print(2)).Coroutine();
        Debug.Log(Application.persistentDataPath);
    }

    void Start()
    {
        AAA();
    }

}


