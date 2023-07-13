/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 创建IAsyncTokenProperty接口来对接异步令牌需要的属性和方法，就是提供一个对接口，仅此而已
 */

namespace CoFramework.Tasks.Internal
{
    /// <summary>
    /// 异步令牌接口，只有继承了本接口才能实现自动传递
    /// </summary>
    public interface IAsyncTokenProperty
    {

        /// <summary>
        /// 令牌任务树节点
        /// </summary>
        AsyncTreeTokenNode Token { get; set; }

        /// <summary>
        /// 以某状态完成任务
        /// </summary>
        /// <param name="status"></param>
        void Finish(ETaskStatus status);

    }

}
