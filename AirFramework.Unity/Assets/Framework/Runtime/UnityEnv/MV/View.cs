using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

namespace AirFramework
{
    public class View<T> : PoolableObject,IView where T : MonoBehaviour
    {
        public T Refs { get; set; }

        private static AssetOperationHandle prefabHandle = null;

        public bool IsLoaded { get; private set; } = false;
        public bool IsLoading { get; private set; } = false;
        public async AirTask LoadAsync()
        {
            IsLoading = true;
            if (prefabHandle == null)
            {
                string location = typeof(T).Name;
                prefabHandle = Framework.Res.LoadAsync<GameObject>(location);

            }
            if (!prefabHandle.IsDone)
                await prefabHandle;

            await AirTask.CompletedTask;

            var objHandle = prefabHandle.InstantiateAsync();
            await objHandle;
            GameObject.DontDestroyOnLoad(objHandle.Result);

            if (Refs is IViewInitialize initializer)
            {
                await initializer.Operator<IViewInitialize>().TrySendAsync();
            }

            Refs = objHandle.Result.AddComponent<T>();
            IsLoading = false;
            IsLoaded = true;


        }

        public bool IsShowing { get; private set; } = false;

        public async AirTask Show()
        {
            if (!IsLoaded)
            {
                if(!IsLoading)
                {
                    await LoadAsync();
                }
                await AirTask.WaitUntil(() => IsLoaded);
            }
            
            if(Refs is IViewShow show)
            {
                await show.Operator<IViewShow>().TrySendAsync();
            }
            await AirTask.CompletedTask;
        }

        public async AirTask Hide()
        {

        }



        private void PublishShow()
        {
            
        }

        private void PublishHide()
        {

        }

        private void PublishInitialize()
        {

        }


        public override void OnAllocate()
        {
            IsLoaded = false;
            IsLoading = false;
            Refs = default;

        }

        public override void OnRecycle()
        {

        }

        protected override void OnDestroy()
        {
            GameObject.Destroy(Refs.gameObject);
        }
    }
}
