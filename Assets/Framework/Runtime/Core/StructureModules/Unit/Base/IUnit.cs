/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * 设计这样一个IUnit接口，作为框架内全部类的基接口，继承IDisposable允许using释放
 */

using System;

namespace AirFramework
{

    public interface IDisposedUnit : IDisposable
    {
        /// <summary>
        /// 对象释放状态
        /// </summary>
        public bool Disposed { get; set; }
    }
    public interface IUniqueID
    {
        /// <summary>
        /// 实例唯一ID
        /// </summary>
        public long ID { get; }
    }
    public interface IUnit : IDisposedUnit, IUniqueID { }


}
