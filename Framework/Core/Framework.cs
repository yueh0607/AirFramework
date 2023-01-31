namespace AirFramework
{
    public static partial class Framework
    {
        
        /// <summary>
        /// 池管理器
        /// </summary>
        public static IGenericPoolManager Pool { get; } = new GenericPoolManager();  
        
        /// <summary>
        /// 消息管理器
        /// </summary>
        public static MessageManager Message { get; } = new MessageManager();

        /// <summary>
        ///  生命周期管理器
        /// </summary>
        public static LifeHandler LifeCycle { get; } = new LifeHandler();
    }
}
