/********************************************************************************************
 * Author : yueh0607
 * Date : 2023.1.13
 * Description : 
 * 设计这样一个接口的目的是为了统一框架内需要初始化的类型，通过该接口即可取得实例是否已经初始化
 */


namespace AirFramework
{

    public interface IInitialized
    {
        bool Initialized { get; }
    }
}
