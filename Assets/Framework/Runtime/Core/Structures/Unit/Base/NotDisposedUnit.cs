/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.2.25
 * Description : 
 * 实现该抽象类将不会应用Unit的Disposed属性
 */
namespace AirFramework
{
    public abstract class NotDisposedUnit : Unit
    {
        /// <summary>
        /// 此方法将不会管理Disposed
        /// </summary>
        public override void Dispose()
        {
            OnDispose();
        }

    }
}
