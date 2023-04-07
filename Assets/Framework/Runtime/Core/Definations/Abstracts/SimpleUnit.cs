/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 实现该抽象类将不会应用Unit的Disposed属性
 */
namespace AirFramework
{
    public abstract class SimpleUnit : Unit
    {
        protected override void OnDispose()
        {
            
        }

    }
}
