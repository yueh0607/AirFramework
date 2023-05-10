# 《AirFramework使用手册》

## 一、简介

Air意为空气，天空，传递一种轻量，自由，随心所欲的气息。正如它的名字，就连名字也是随便起的...(开玩笑)

使用要义！！！ 记住全在这里面   Framework.XXXX.XXXX



## 二、入门指南





## 三、详细使用指南

-----------------------------------------------------------------------Core----------------------------------------------------------------------------------

### 0.Unit结构

```c#
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



### 1.对象池

托管池的使用：

```c#
//1.基本使用方式

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

//接下来是三种回收方式，执行其一
//1.这一种会把item回收到当前类型对应的管理器池里，注意不能进行类型转换
Framework.Pool.Recycle(item);
//2.这一种会把item回收到当前绑定的池里
item.RecycleSelf();
//3.这一种会把item回收到它根本类型的池里，无论是否发生类型转换
Framework.Pool.RecycleOrigin(item);


//接下来是什么样的类型能被管理器管理： 实现了IPoolable都可以,这是继承关系
//唯一不同的就是PoolableObject和PoolableObject会在Dispose时自动回收到Pool
//PoolableValueObject<T> : PoolableObject : IPoolable

//PoolableObject特有的的小彩蛋，using后自动释放掉，因为这个类的Dispose调用了RecycleSelf
//注意这是特有的
    using (var item = Framework.Pool.Allocate<MyPoolObj>())
    {
        
    }
//与这个等价
item.Dispose()
    
    
//如果有需要继承别的，不能继承PoolableObject，你可以直接实现IPoolable接口
public class MyClass :IPoolable
{
    //仅用作内部数据交换，如果不是真的理解原因，不要随意使用这些属性的set访问器
    public IObjectPool ThisPool { get ; set ; }
    public bool Disposed { get; set; }
    
    public void OnAllocate(){}
    public void OnRecycle(){}
}

    
//2.池管理器
//这两个字段可以直接被设置
//计时器触发默认间隔
 Framework.Pool.DefaultRecycleCycleTime = 60_000F;
//回收闲置比例： 比如闲置了10个，回收不超过5个
 Framework.Pool.DefaultRecycleRatio = 0.5F;

//获取托管池，如果无则新建，如果你需要对单个池修改计时逻辑，则可以强转为IManagedPool进行调整
 public IGenericPool<T> GetPool<T>() where T : class, IPoolable
 //这将释放整个托管池，也会对池进行Dispose，清空并销毁全部对象
 public void ReleasePool<T>() where T : class, IPoolable
 //返回T类型的对象
 public T Allocate<T>() where T : class, IPoolable
 //回收对象到T类型池，注意，类型转换后不能正确回收
 public void Recycle<T>(T item) where T : class, IPoolable
 //回收对象到GetType得到的类型对应的池子，也就是说哪怕转换为父类，也能正确回收
 //对象.RecycleSelf不是通过这两个方法实现的，而是通过绑定池实现的，IPoolable.ThisPool.RecycleObj(obj);
 public void RecycleOrigin(object item)
 //遍历池
 public void ForeachPools(Action<IManagedPool> action)
```

非托管池使用：

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

你不需要担心UnitList的扩容问题，如果使用频率低，GC值完全可以忽略，如果较高，这时管理器内的都是高容量的UnitList，大概率不会再次进行扩容。

![image-20230509163158847](https://raw.githubusercontent.com/yueh0607/MyPicueres/main/202305091632780.png)



### 2.消息系统

这个消息系统最大的一个好处就是参数不会错，这一过程使用了UnsafeUtility.As进行转换，不支持这个API的平台无法使用本框架。在NET CORE中，可以使用Unsafe.As替代。加上协变功能，我们实现了对参数类型的约束。

```c#
//定义一个消息类型，后面的泛型就是参数类型
public interface ICustomEvent : IGenericMessage<int,string>{}

//定义被注册的消息方法
void MyEvent(int x,string y)
{
    Debug.Log($"MyEventInvoke: x:{x} , y:{y}");
}

//注册一个事件
Framework.Message.Operator<CustomEvent>().Subscribe(MyEvent);
//取消一个事件，注意不用必须取消(C#的委托机制问题，闭包持有强引用导致无法GC回收对象，产生内存泄漏，其他基于委托的消息系统或多或少都有这个问题，而且几乎无法被解决)
Framework.Message.Operator<ICustomEvent>().UnSubscribe(MyEvent);
//发送消息,此时会执行上面的方法，输出"MyEventInvoke: x:10 , y:haha
Framework.Message.Operator<ICustomEvent>().Publish(10,"haha");

//使用这个可以跨文件，跨对象，跨类

//注意注意注意
//最神奇的是他能自己约束你的参数类型，也就是说，Publish，Subscribe传入错误的参数是会给出提示的
Framework.Messsage.Operator<ICustomEvent>().Publish(10,20);
//这样直接报错！！！！！！！！！！！快乐+++，再也不会写错参数类型了
//不然出现一个错误参数类型，可能就让人查一个小时bug




//继承了IMessageReceiver
class MyReceiver : IMessageReceiver
{
    
}
MyRecevier rec = new();
//这样的话，调用上面的方法仅在这个对象范围内有效，比如在rec上注册的，只能在rec取消，对rec发布，同参数才能正确响应事件
Framework.Message.Operator<ICustomEvent>(rec).XXXX;
//如果不填，默认则为消息管理器，近似实现了全局的消息，实际上这是管理器消息


//真正的全局消息,这样使用则会调用全局每个对象上注册的消息，无论指定的Operator是谁
Framewwork.Message.Dispatcher<ICustomEvent>().Publish(10,"haha");
//没有全局的注册哦，请用注册为管理器消息替代

//Response-Call模式
//上面的调用是不支持返回值的，而采用call则可以支持返回值

//定义一个消息类型，后面的泛型就是参数类型,最后一个泛型参数是返回值类型
public interface ICustomEvent : IGenericMessage<int,string,int>{}

//定义被注册的消息方法
int MyEvent(int x,string y)
{
    Debug.Log($"MyEventInvoke: x:{x} , y:{y}");
    return 10000;
}

//注册方式与之前相同
Framework.Message.Operator<CustomEvent>().Subscribe(MyEvent);
Framework.Message.Operator<ICustomEvent>().UnSubscribe(MyEvent);
//而发布方式不同了
var x = Framework.Message.Operator<ICustomEvent>().Call(10,"haha");
//还有TryCall，如果无事件时，会返回默认值，如果call的消息本身有问题，还是会throw Ex的
//同样的方式，你还可以对Dispatcher进行Call，返回UnitList，是按顺序排列的结果。
//我们支持在Call的过程中进行注册和取消注册，但是请注意不要取消注册到容器为空，否则您手动获取的容器将会失效！！



//进阶技巧：：

var Message = Framework.Message;
Message.xxx.xxx
    

GenericOperator<MessageType,T1,T2...>() 
    //当传入消息类型为泛型参数时，您可以这样使用，代替Operator，但是不建议这么使用。
    
    
    
    
//消息系统也负责生命周期,Update,LateUpdate,FixedUpdate等
class MyObj:IUpdate    //自动是IMessageReceiver
{
    //第一种实现方式
    void IUpdate.Update()
    {
        
    }
    //第二种实现方式
    public void Update()
    {
        
    }
}

//这两个方法是对对象生命的开启和关闭。
obj.StartLife();
obj.CloseLife();
//如果是从池里拿的，这两个会在拿和回收时自动调用。


```

### 3.Async

代替了Unity协程，任务执行器，实现单线程任务像写同步一样写异步。

这个任务是单线程的，默认开启了池，一个AsyncTask在await之后禁止使用，否则将引发灾难后果！！！

```c#
public async AsyncTask DownloadResources()
{
    //等待五秒
    await Async.Delay(5);
    
    Debug.Log("5秒过去了");
    
    //等待一秒
    await Async.Delay(1);
    
    //等5帧
    await Async.WaitForFrame(5);
    
    
}

public async AsyncTask GetXXX()
{
    if(XXX)
    {
       await Async.Delay(10);
    }
    else
    {
        //瞬间完成的任务
        await Async.Complete();
    }
    //每个async必须有一个await也可以拿这个占位置，不然报Warnning
    await Async.Complete();
}



//异步令牌
AsyncTask task = GetXXX();

task.WithToken(out var token);
//暂停
token.Yield();
//取消
token.Cancel();
//继续
token.Continue();
```

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
