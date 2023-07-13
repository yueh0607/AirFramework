

//打开这行注释以支持DoTween完成的等待

#define CoEvent_Async_AsyncOperation_Enable

#if CoEvent_Async_AsyncOperation_Enable

using System;
using System.Collections;
using UnityEngine;

namespace CoFramework.Tasks
{

    public static class AsyncOperationEx
    {

        public static async CoTask<AsyncOperation> WithProgress(this AsyncOperation operation, Action<float> progress)
        {
            var module = Framework.GetModule<TaskModule>();
            static IEnumerator PostProgress(Action<float> receiver, AsyncOperation operation)
            {
                while (true)
                {
                    if (operation.isDone) receiver(1f);
                    else receiver(operation.progress);
                    yield return null;
                }
            }
            await PostProgress(progress, operation);
            return operation;
        }



    }
}
#endif