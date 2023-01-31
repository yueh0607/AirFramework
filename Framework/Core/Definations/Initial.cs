/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.13
 * Description : 
 * 在实现了Initialized的基础上，可以实现Initialize来主动调用实例化
 */


namespace AirFramework
{

    public interface IInitialize:IInitialized
    {
        void Initialize();
    }
}
