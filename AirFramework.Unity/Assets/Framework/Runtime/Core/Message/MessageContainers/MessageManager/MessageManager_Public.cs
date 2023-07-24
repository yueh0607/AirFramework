/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 管理器公开方法，通过这些方法实现核心操作的匹配和泛型约束
 ********************************************************************************************/

namespace AirFramework
{
    /// <summary>
    /// 消息派发管理器
    /// </summary>
    public partial class MessageManager : IMessageReceiver
    {

        public LifeCycleManager LifeCycle { get; } = new LifeCycleManager();



    }
}
