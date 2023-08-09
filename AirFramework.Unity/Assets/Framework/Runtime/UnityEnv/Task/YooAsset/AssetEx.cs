using YooAsset;

namespace AirFramework
{
    public static class AssetEx
    {
        public static AirTask GetAwaiter(this OperationHandleBase handle)
        {

            return AirTask.WaitUntil(() =>
            {
                //Debug.Log("运行中");
                return handle.IsDone;

            });
        }
        public static AirTask GetAwaiter(this AsyncOperationBase handle)
        {
            return AirTask.WaitUntil(() =>
            {
                //Debug.Log("运行中");
                return handle.IsDone;

            });
        }

    }
}
