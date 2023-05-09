using System;
/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * 设计这样一个IUnit接口，作为框架内全部类的基接口，继承IDisposable允许using释放
 */
namespace AirFramework
{

    public interface IDisposedUnit
    {
        /// <summary>
        /// 非托管资源是否已经释放
        /// </summary>
        public bool Disposed { get; set; }
    }
    public interface IUnit : IDisposable, IDisposedUnit
    {
       
        ulong ID { get; }


    }
}
