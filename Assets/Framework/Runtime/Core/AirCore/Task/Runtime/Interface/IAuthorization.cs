/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.13
 * Description : 
 * 实现该接口以获取有效授权
 */

namespace CoFramework.Tasks
{

    public interface IAuthorization
    {
        /// <summary>
        /// 标志更新行为的合法性
        /// </summary>
        bool Authorization { get; }
    }
}
