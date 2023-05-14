﻿/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 所有池的基类型，要求来自AirFramework的全部池均实现该接口
 */

namespace AirFramework
{

    public interface IPool:IUnit
    {
        /// <summary>
        /// 池容量
        /// </summary>s
        int Count { get; }

        /// <summary>
        /// 清空缓存
        /// </summary>
        void Clear();
    }

    public interface IPool<T> : IPool
    {
        T Allocate();
        void Recycle(T item);
    }
    /// <summary>
    /// 用于实现所有池类型
    /// </summary>
    public interface IDepositablePool :IPool
    {
        /// <summary>
        /// 是否托管
        /// </summary>
        bool IsDeposit { get; internal set; }
        

    }
    /// <summary>
    /// 用于实现所有池类型
    /// </summary>
    public interface IDepositablePool<T> : IDepositablePool,IPool<T>
    {
        

    }
}