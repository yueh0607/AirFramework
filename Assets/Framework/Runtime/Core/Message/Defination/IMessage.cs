namespace AirFramework
{

    /// <summary>
    /// 实现该接口允许注册消息
    /// </summary>
    public interface IMessageReceiver { }


    /// <summary>
    /// 所有消息实现的接口,禁止用户自己实现这个接口
    /// </summary>
    public interface IMessage { }
 

    public interface IGenericMessage : IMessage { }
    public interface IGenericMessage<T1> : IMessage { }
    public interface IGenericMessage<T1, T2> : IMessage { }
    public interface IGenericMessage<T1, T2, T3> : IMessage { }
    public interface IGenericMessage<T1, T2, T3, T4> : IMessage { }
    public interface IGenericMessage<T1, T2, T3, T4, T5> : IMessage { }
    public interface IGenericMessage<T1, T2, T3, T4, T5, T6> : IMessage { }

}
