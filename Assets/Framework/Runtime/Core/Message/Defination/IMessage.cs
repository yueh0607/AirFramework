namespace AirFramework
{

    /// <summary>
    /// 实现该接口允许注册消息
    /// </summary>
    public interface IMessageReceiver { }
    /// <summary>
    /// 所有消息实现的接口
    /// </summary>
    public interface IMessage { }
    /// <summary>
    /// 所有Publish消息实现的接口
    /// </summary>


    public interface ISendMessage : IMessage { }
    public interface ISendMessage<T1> : IMessage { }
    public interface ISendMessage<T1, T2> : IMessage { }
    public interface ISendMessage<T1, T2, T3> : IMessage { }
    public interface ISendMessage<T1, T2, T3, T4> : IMessage { }
    public interface ISendMessage<T1, T2, T3, T4, T5> : IMessage { }
    public interface ISendMessage<T1, T2, T3, T4, T5, T6> : IMessage { }

}
