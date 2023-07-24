
//建议不要随便使用这个命名空间下的东西


using AirFramework.Internal;

namespace AirFramework.Internal
{

    /// <summary>
    /// 所有消息实现的接口,禁止用户自己实现这个接口
    /// </summary>
    public interface IMessage : IMessageReceiver { }
}

namespace AirFramework
{
    /// <summary>
    /// 消息接收者接口
    /// </summary>
    public interface IMessageReceiver { }
    //标记消息
    public interface IMessageBase : IMessage { }



    //用来标记事件的类型，不区分Send和Call
    public interface IGenericEvent : IMessageBase { }
    public interface IGenericEvent<T1> : IMessageBase { }
    public interface IGenericEvent<T1, T2> : IMessageBase { }
    public interface IGenericEvent<T1, T2, T3> : IMessageBase { }
    public interface IGenericEvent<T1, T2, T3, T4> : IMessageBase { }
    public interface IGenericEvent<T1, T2, T3, T4, T5> : IMessageBase { }
    public interface IGenericEvent<T1, T2, T3, T4, T5, T6> : IMessageBase { }


    //用以标识Send和Call，不表明Send和Call
    public interface ISendEventBase : IMessageBase { }

    public interface ICallEventBase : IMessageBase { }
}


namespace AirFramework
{
#pragma warning disable

    //用以标识无返回值Send的事件
    public interface ISendEvent : ISendEventBase, IGenericEvent { }
    public interface ISendEvent<T1> : ISendEventBase, IGenericEvent<T1> { }
    public interface ISendEvent<T1, T2> : ISendEventBase, IGenericEvent<T1, T2> { }
    public interface ISendEvent<T1, T2, T3> : ISendEventBase, IGenericEvent<T1, T2, T3> { }
    public interface ISendEvent<T1, T2, T3, T4> : ISendEventBase, IGenericEvent<T1, T2, T3, T4> { }
    public interface ISendEvent<T1, T2, T3, T4, T5> : ISendEventBase, IGenericEvent<T1, T2, T3, T4, T5> { }
    public interface ISendEvent<T1, T2, T3, T4, T5, T6> : ISendEventBase, IGenericEvent<T1, T2, T3, T4, T5, T6> { }

    //下面接口用以标识有返回值Call事件
    public interface ICallEvent : ICallEventBase, IGenericEvent { }
    public interface ICallEvent<T1> : ICallEventBase, IGenericEvent<T1> { }
    public interface ICallEvent<T1, T2> : ICallEventBase, IGenericEvent<T1, T2> { }
    public interface ICallEvent<T1, T2, T3> : ICallEventBase, IGenericEvent<T1, T2, T3> { }
    public interface ICallEvent<T1, T2, T3, T4> : ICallEventBase, IGenericEvent<T1, T2, T3, T4> { }
    public interface ICallEvent<T1, T2, T3, T4, T5> : ICallEventBase, IGenericEvent<T1, T2, T3, T4, T5> { }
    public interface ICallEvent<T1, T2, T3, T4, T5, T6> : ICallEventBase, IGenericEvent<T1, T2, T3, T4, T5, T6> { }




#pragma warning restore
}
