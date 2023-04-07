/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 实现该抽象类将不会强制实现OnDispose
 */
namespace AirFramework
{
    /// <summary>
    /// 其实就是Unit，但是不强制实现OnDispose
    /// </summary>
    public abstract class SimpleUnit : Unit
    {
        protected override void OnDispose()
        {

        }

    }
}
