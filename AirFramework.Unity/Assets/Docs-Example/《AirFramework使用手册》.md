# 《AirFramework使用手册》

## 使用指南

-----------------------------------------------------------------------Core----------------------------------------------------------------------------------

### 0.Unit基类

```csharp
Unit带有一个Disposed值，设置为可以set和可以get的，但是不推荐手动set，这样会导致DisposeRepeatException
    
Unit也有一个ID值，这个值全局的Unit都不同，死亡的Unit会重新利用ID，但是保证在100个ID内不会利用死亡的ID
    
Unit.Dispose支持using释放模式
using (var unit = xxx)
{
    
}
在Dispose时，会调用OnDispose
禁止对Unit重复Dispose，除非你手动刷新Dispsoed   xx(特别不建议)

Unit作为框架内大部分类型的基类，有着重要的作用，它的Equal全部经过ID的重写，Unit相等的唯一标志是ID相同
```



### 1.生命周期 与 规范

```csharp
直接继承接口,你可以通过调用StartLife和CloseLife直接控制生命周期的应用与否，但是这两个方法有一定的GC
可以使用SetActive来替代，这个方法会保留生命周期的缓存

public class MyClass: IUpdate
{
	void IUpdate.Update()
	{
		//Update Call
	}
}


```

### 2.事件系统 与 生命周期定义

```csharp
AirFramework的事件系统很具有特色： ；参数类型安全，调用安全

实现此安全性的基础是System.Runtime.ComplierServices.Unsafe.As + CoVariant 进行泛型匹配
注意所在平台与Unsafe和泛型协变的兼容性
    
定义事件
    //事件定义
    public interface ITestEvent:ISendEvent<int>{}

//委托方法
void TestMethod(int x){}
//注册
this.Operator<ITestEvent>().Subscribe(TestMethod);
//发布
this.Operator<ITestEvent>().Publish(TestMethod,10);
//取消注册
this.Operator<ITestEvent>().UnSubscribe(TestMethod);

同理，你可以定义CallEvent,我们默认最后一个参数即为返回值
    public interface ITestEvent2 : ICallEvent<int>{}

//委托方法
int TestMethod(){}
//注册
this.Operator<ITestEvent>().Subscribe(TestMethod);
//发布
int x = this.Operator<ITestEvent>().Call(TestMethod);
//取消注册
this.Operator<ITestEvent>().UnSubscribe(TestMethod);


而定义一个生命周期,需要在合适的时机去派发，如此例中，在FixedUpdate中使用
    Framework.Message.Dispatcher<IFixedUpdate>().Publish()进行全局发布
    
namespace AirFramework
{
    public interface IFixedUpdate : ISendEvent<float>, IMessageReceiver
    {
        void FixedUpdate(float fixedTime);
    }
    public class FixedUpdateHandler : LifeCycleHandler<IFixedUpdate>
    {
        public override void OnLifeCycleRegister(IFixedUpdate item)
        {
            item.Operator<IFixedUpdate>().Subscribe(item.FixedUpdate);
        }

        public override void OnLifeCycleUnRegister(IFixedUpdate item)
        {
            item.Operator<IFixedUpdate>().UnSubscribe(item.FixedUpdate);
        }
    }
}
    
```



### 1.对象池

托管池的使用：

```c#
//1.基本使用方式
//PoolableObject为一个封装类型，封装了Dispose自动回收，以及IAllocate和IRecycle
public class MyPoolObj : PoolableObject
{
    public override void OnAllocate()
    {
        //在申请时调用
    }
    public override void OnRecycle()
    {
        //在回收时调用
    }
}


//从池申请一个对象
MyPoolObj item = Framework.Pool.Allocate<MyPoolObj>();


//把item回收到当前绑定的池里
item.RecycleSelf();





//PoolableObject特有的的小彩蛋，using后自动释放掉，因为这个类的Dispose调用了RecycleSelf
//注意这是特有的
    using (var item = Framework.Pool.Allocate<MyPoolObj>())
    {
        
    }
//与这个等价
item.Dispose()
    
    
//你也可以单独实现IAllocate和IRecycle，注意了，这样的Dispose是无效的，你可以自己在OnDispose里调用RecycleSelf满足范式


```

非托管池使用（可能已经调整了）：

```c#

//创建通用泛型池，这个池的特点是没有管理逻辑，没有太多的限制
public GenericPool<T> CreateGenericPool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class

//纯净池，这个池要比通用泛型池还要轻量，剥离了大量其他逻辑
public PurePool<T> CreatePurePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null, Action<T> onRecycle = null, Action<T> onAllocate = null) where T : class

//这个池将会可以启用计时回收，只需要设置池的回收周期>0，如果小于0，则关闭回收周期
public ManagedPool<T> CreateManagedPool<T>(Func<T> onCreate = null, Action<T> onDestroy = null)where T : class, IPoolable
     
//这个池不仅能自动绑定生命周期，还能启用自动计时。一种对ManagedPool的延申
public LifeCyclePool<T> CreateLifeCyclePool<T>(Func<T> onCreate = null, Action<T> onDestroy = null) where T : class, IPoolable

//很特殊的池，创建一个UID池，它保证分配的ID不重复，而且在repeatCount以内即使回收也是不会出现重复ID的
//简单来讲，就是申请的ID永不重复，除非主动回收了ID，即使回收了，repeatCount以内也不重复
//不建议设置过大的repeatCount，过大的repeatCount会导致很高的内存占用
public UIDPool CreateGUIDPool(int repeatCount = 100)
//这个池至少保证存活的ID是不重复的

```

常用封装类型：你可以直接从托管池管理器申请这些类型，使用方式类似于Obj.Value.Add()

你不需要担心UnitList的扩容问题，如果使用频率低，扩容带来的损耗完全可以忽略，如果较高，这时管理器内的都是高容量的UnitList，大概率不会再次进行扩容。

![image-20230509163158847](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305091632780.png)



### 3.Async

代替了Unity协程，任务执行器，实现单线程任务像写同步一样写异步。

这个任务是单线程的，默认开启了池，一个AsyncTask在await之后禁止使用，否则将引发灾难后果！！！

AirFramework的异步任务能自动适配大量协程，如YieldConstrcution(WaitforSceonds)，但是因为有些外源的IEnumeraotr实现并不规范，所以仍需要手动适配

且AirTask最大的优势是：令牌非传染式自动传递

无需CancelationToken



### 4.FSM(有限状态机)

由于框架的原因，FSM似乎变得天然化,自由度很高

```c#
public class MyState : PoolableObject,IUpdate
{
    public void Update()
    {
        //State Update
    }
    public void OnAllocate()
    {
        //Enter State
    }
    
    public void OnRecycle()
    {
        //Exit State
    }
}

//进入状态
var obj = Framework.Pool.Alocate<MyState>();
//离开状态
obj.Dispose();
```

但是笔者仍然设置了一个状态机类

Current就是当前的状态，Move和MoveState都是移动到下一个状态，区别会在接下来展开。

```c#
   public IPoolable Current { get; private set; } = default;
   public void Move<T>() where T : class, IPoolable
   public void MoveState<T>() where T : AbstractState
       
       
   var machine = Framework.Pool.Allocate<StateMachine>();
   machine.Move<MyState>();
```

```c#
//我们也可以继承AbstractState类，这时可以用Move或者MoveState去切换到这个状态
//如果我们只实现IPoolable，则只能用Move来切换。

//State内的量可能会被自动清除哦，对象池计时生命周期。可以手动关闭。
```

### 5.单例

继承Singleton<T> 即可，也有SingletonProperty<T>.Instance   共享相同数据

也可以直接调用初始化，变成饿汉单例。



-----------------------------------------------------------------------Unity----------------------------------------------------------------------------------

### 1.MVC

![image-20230509205514910](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305092055950.png)

这是Unity部分的重中之重，我们需要先做一个面板

![image-20230509205554622](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305092055648.png)

![image-20230509205602510](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305092056539.png)

![image-20230509205617929](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305092056957.png)

我们的重点是ScriptMark，添加在需要构建的物体上，被组件标记选中的将会生成到View里，在C里也会自动生成一些事件(仅常用的)

然后在属性标记中，可以进行多选，会自动拿到组件的多个属性和字段，也会生成到View里。属性标记代表生成BindablePort。



生成的View如下，往往我们不需要进行改动，，整个V层都是自动生成的

![image-20230510170248124](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101745747.png)



我们能通过在Project中右键，Create->Format->Model创建一个标准的空Model，这个Model不必跟View或Controller一一对应。

![image-20230510174032589](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101745926.png)

接下来，我们看Controller，Controller分成三个部分，Behaviour(行为)，Event(事件),Update(更新)



在Update中主要是可以更新View，把V绑定到M中，或C中

![image-20230510185507599](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101855649.png)

在Event中实现逻辑，绑定触发事件

![image-20230510185643359](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101856451.png)

在Behaviour定义打开时的事件

![image-20230510190642358](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101906410.png)

只有Show和Hide可以被调用

![image-20230510193243636](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101932702.png)

最重要的一点！！！    加载的类型必须是Controller，也就是生成出来的那种类，而且预制体名字和Controller的类名必须相同。！！！！！！并要被资源管理器所Collect，能被加载才行



### 2. UI模块

UI模块基于MVC的

有这些方法是可以被调用的，方式是Framework.UI.XXX

![image-20230510192949794](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101929864.png)

其中Open ,Close是基于栈的，而且不允许重复打开相同的Panel，例如

打开了A ，B，C    ，此时关闭A，则BC也会一同关闭，即出栈到被关闭对象(包括本身)



而OpenFree和CloseFree是自由的，他们不会受到Stack的影响，关闭哪个就是哪个。并且允许打开相同的Panel，但是请注意：CloseFree的参数有时是必须的，如果不传入参数，则关闭全部同类Panel，否则关闭指定Panel。

在打开Panel时，都会返回一个Controller，这是关闭单个Panel的凭证，也是上述MVC模块的单个关闭凭证。



注意：UI模块还有一些初始化参数

![image-20230510193323338](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305101933372.png)

你可以不调用InitializeAsync，在第一次加载时会自动调用，但是通过手动调用可以达到预热效果。

在初始化中，会自动加载名为UICamera的物体，并设置到这里，以后全部的UICamera都会自动的绑定到Panel上

同样的，UIEventSystem也会被在同时加载，这个物体仍然需要被资源管理器所收集。

而UIRoot，则会自动创建新的GameObject，作为Panel的根物体。它只是一个空物体，不需要花费什么精力。

`也就是说，想要使用UI模块，你的任意目录里，得有一个叫UICamera的物体，一个叫UIEventSystem的物体被资源管理器所收集！`

### 3.资源

刚刚在UI模块里说了很多资源相关的。这里采用的是YooAsset

1.Framework.Res.Initialize(string defaultPackageName =“DefaultPackage")     //是初始化资源管理器的,传入默认包名

2.public async AsyncTask InitializePackage(ResourcePackage package,EPlayMode Mode = EPlayMode.EditorSimulateMode, string serverPath = null, string serverPath2 = null)   //这个方法是初始化包的，默认是DefaultPackage，也就是第一个可以不传，有相应的重载。

然后EPlayMode是初始化模式，仅在联网热更时需要传后面的资源服务器地址。模拟，内置都不需要传地址。

3. 联网模式按流程走，其他模式忽略。          UpdateVersion->UpdateMainfest->Download![image-20230510202638767](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305102026841.png)

加载只有LoadSync和LoadAsync两个方法，返回一个Handle，记得要调用handle.Release，是引用计数的。

### 4.UnitGameObject

对应了Unity内的GameObject

```c#

namespace AirFramework
{
    public class UIEventSystem : UnitGameObject<UIEventSystem>
    {

        public override void OnLoad()
        {

        }

        public override void OnUnload()
        {
        }
    }
}

```

我们可以直接从Pool申请UIEventSystem，这时自动拿到。但是拿到后有一些任务。

![image-20230510203231768](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305102032822.png)

只有真正调用了Load后才会加载对象，而传入GameObject实例则直接绑定(不是资源)

在Unload时删除物体。在对象申请后，则自动设置Active=true，回收时设置为false。

继承它也会实现一些GameObject类有的方法，可以直接使用。

而EntityRef则是根据GameObject获取UnitGameObject的一个重要途径，比如射线射到物体拿UnitGameObject



如果无法继承这个类，至少也要继承UnitGameObject没有泛型，这时要通过这个类的这么一大堆方法来进行加载

![image-20230510204155799](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305102041828.png)

Bind就是加载，不一定是安全的，取决于T类型和Type参数，必须是非抽象的UnitGameObject类型。

卸载是相同的，托管对象池会自动负责卸载任务。否则请手动进行。

### 5.Tween

提前配动画的方式。需要GetComponent<TweenPlayer>().GetTween

![image-20230510204812252](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305102048282.png)

Curve记得XY都是在0-1之间的

PlayAsync是等待这次结束。

Play是播放，SetDirection是设置方向，SetLoop是设置循环方式，还有一些可以探索探索。

![image-20230510204937386](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305102049443.png)

### 6.简单log

xxxx.L();   //日志

xxx.E();   //错误

xxx.W()  //警告

xxxx.Throw()  //抛异常

还可以前三个方法传string参数 ，   AB: 10    10.L（"AB"）

### 7.Mono单例

继承MonoSingleton<T> 即可，也有MonoSingletonProperty<T>.Instance   共享相同数据

也可以在InitializeOnLoadMethod中调用，变成饿汉单例。
