/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 创建IAsyncTask来统一任务在awaiter标准以外的特殊行为
 */

namespace CoFramework.Tasks
{


    /// <summary>
    /// 异步任务接口
    /// </summary>
    public interface IAsyncTask : ICriticalAwaiter, ICoTask
    {


    }
    /// <summary>
    /// 异步任务接口
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public interface IAsyncTask<T> : ICriticalAwaiter<T>, ICoTask
    {



    }
}
