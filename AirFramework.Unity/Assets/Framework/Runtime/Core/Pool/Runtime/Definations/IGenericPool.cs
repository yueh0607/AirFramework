/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 在Object的基础上，为通用对象池增加泛型功能，任意object对象池均可以通过泛型使用
 */

namespace AirFramework
{

    public interface IGenericPool<T> : IObjectPool, IDepositablePool<T>
    {

        //public AirTask UnloadAsync(int count, int frame = 1);
    }
}
