/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 派发器协变接，为实现泛型约束
 ********************************************************************************************/

using AirFramework.Internal;
namespace AirFramework
{

    public interface IDispatcherOutBase
    {

    }

#pragma warning disable S2326 // Unused type parameters should be removed
    public interface IDispatcherOut<out T> : IDispatcherOutBase, IUnsafeOut where T : IMessage
#pragma warning restore S2326 // Unused type parameters should be removed
    {
        /****************************************************************************
        * 警告:此处定义的任何成员严格禁止被访问！！！否则可能引发程序直接崩溃！！！*
        * 警告:此处定义的任何成员严格禁止被访问！！！否则可能引发程序直接崩溃！！！*
        * 警告:此处定义的任何成员严格禁止被访问！！！否则可能引发程序直接崩溃！！！*
        * 警告:此处定义的任何成员严格禁止被访问！！！否则可能引发程序直接崩溃！！！*
        * 警告:此处定义的任何成员严格禁止被访问！！！否则可能引发程序直接崩溃！！！*
        * 警告:此处定义的任何成员严格禁止被访问！！！否则可能引发程序直接崩溃！！！*
        ****************************************************************************/
    }

}
