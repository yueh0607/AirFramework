using AirFramework.Internal;


namespace AirFramework
{
    /// <summary>
    /// 实现该接口允许注册消息 
    /// </summary>
    public interface IMessageReceiver
    {
    }

#pragma warning disable
    public interface IGenericMessage : IMessage { }
    public interface IGenericMessage<T1> : IMessage { }
    public interface IGenericMessage<T1, T2> : IMessage { }
    public interface IGenericMessage<T1, T2, T3> : IMessage { }
    public interface IGenericMessage<T1, T2, T3, T4> : IMessage { }
    public interface IGenericMessage<T1, T2, T3, T4, T5> : IMessage { }
    public interface IGenericMessage<T1, T2, T3, T4, T5, T6> : IMessage { }
#pragma warning restore

}