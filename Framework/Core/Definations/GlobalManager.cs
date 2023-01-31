/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 通过管理器基类要求所有全局非静态管理器实现名称和不改变Disposed属性的清空方法
 */

namespace AirFramework
{

    public abstract class GlobalManager : Unit
    {
        public abstract string Name { get; }
        public override void Dispose()
        {
            OnDispose();
        }

    }
}
