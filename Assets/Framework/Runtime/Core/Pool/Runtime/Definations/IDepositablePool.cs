/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 20:28:28
 * Description : Describe the function here.
************************************************************************************/



namespace AirFramework
{

    /// <summary>
    /// 用于实现所有池类型
    /// </summary>
    public interface IDepositablePool : IPool
    {
        /// <summary>
        /// 是否托管
        /// </summary>
        bool IsDeposit { get; internal set; }


    }
    /// <summary>
    /// 用于实现所有池类型
    /// </summary>
    public interface IDepositablePool<T> : IDepositablePool, IPool<T>
    {


    }

}
