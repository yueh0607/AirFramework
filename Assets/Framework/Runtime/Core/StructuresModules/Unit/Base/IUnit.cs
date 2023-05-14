using System;
/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * 设计这样一个IUnit接口，作为框架内全部类的基接口，继承IDisposable允许using释放
 */
namespace AirFramework
{

    public interface IDisposedUnit:IDisposable
    {
        /// <summary>
        /// 是否已经释放
        /// </summary>
        public bool Disposed { get; set; }
    }
    public interface IGUID
    {
        public ulong ID { get; }
    }
    public interface IUnit :  IDisposedUnit,IGUID
    {

    }

   
}
