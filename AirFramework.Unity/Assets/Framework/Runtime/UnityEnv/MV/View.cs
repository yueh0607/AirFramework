using UnityEngine;
using YooAsset;

namespace AirFramework
{

    public abstract class View : PoolableObject, IView
    {


        protected static AssetOperationHandle prefabHandle = null;

        public bool IsLoaded { get; protected set; } = false;
        public bool IsLoading { get; protected set; } = false;
        public abstract AirTask LoadAsync();
        public bool IsShowing { get; protected set; } = false;

    }

    public abstract class View<T> : View where T : MonoBehaviour
    {
        public T Refs { get; set; }

        public override async AirTask LoadAsync()
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

            Refs = objHandle.Result.AddComponent<T>();

            if (this is IViewInitialize)
            {
                await this.Operator<IViewInitialize>().TrySendAsync();
            }

            IsLoading = false;
            IsLoaded = true;


        }

        public override void OnAllocate()
        {
            //Refs.gameObject.SetActive(true);
            IsShowing = true;
        }

        public override void OnRecycle()
        {
            //Refs.gameObject.SetActive(false);
            IsShowing = false;
        }

        protected override void OnDestroy()
        {
            if (!IsLoaded)
                GameObject.Destroy(Refs.gameObject);
            IsLoaded = false;

        }

    }
}
