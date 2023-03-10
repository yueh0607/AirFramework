/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 通过管理器基类要求所有全局非静态管理器实现名称和不改变Disposed属性的清空方法
 * 考虑到管理器的Dispose不代表管理器停用，而代表管理器重置，Disposed是无效的
 */

namespace AirFramework
{

    public abstract class GlobalManager :NotDisposedUnit
    {
        public abstract string Name { get; }


    }
}
