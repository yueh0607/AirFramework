﻿/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 创建IAirTask来统一任务在awaiter标准以外的特殊行为
 */

namespace AirFramework
{


    /// <summary>
    /// 异步任务接口
    /// </summary>
    public interface IAirTask : ICriticalAwaiter, ITask
    {


    }
    /// <summary>
    /// 异步任务接口
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public interface IAirTask<T> : ICriticalAwaiter<T>, ITask
    {



    }
}
