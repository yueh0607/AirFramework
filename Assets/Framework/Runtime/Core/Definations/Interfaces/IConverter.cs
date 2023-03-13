/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.2.25
 * Description : 
 * 用于实现两个类型的转换器
 */

namespace AirFramework
{
    public interface IConverter<T,K>
    {
        public K ConvertTo(T obj);
        public T ConvertFrom(K obj);
    }
}
