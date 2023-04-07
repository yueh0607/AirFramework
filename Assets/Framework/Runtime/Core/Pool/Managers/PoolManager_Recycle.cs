/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 建立PoolManager来管理托管池类型，允许全局申请和释放托管对象
 * 同时支持创建非托管池类型，要求用户自行取得实例并管理
 */

namespace AirFramework
{
    public partial class PoolManager : GlobalManager
    {
        private void OnAllocateItem()
        {

        }
        private void OnReleaseItem()
        {

        }

    }
}
