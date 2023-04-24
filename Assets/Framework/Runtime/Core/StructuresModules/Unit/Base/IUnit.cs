using System;
/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * 设计这样一个IUnit接口，作为框架内全部类的基接口，继承IDisposable允许using释放
 */
namespace AirFramework
{
    public interface IUnit : IDisposable
    {
        /// <summary>
        /// 非托管资源是否已经释放
        /// </summary>
        bool Disposed { get; internal set; }

        ulong ID { get; }


    }
}
