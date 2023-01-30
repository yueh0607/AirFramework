/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.15
 * Description : 
 * 要求用户规范实现ValueContainer封装
 */

namespace AirFramework
{

    public interface IValueContainer
    {
    }
    public interface IValueContainer<T>:IValueContainer
    {
        T Value { get;}
    }
}
