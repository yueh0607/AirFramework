using System;
using UnityEngine;

namespace AirFramework
{

    public abstract class UnitGameObject<T> : UnitGameObject where T : UnitGameObject<T>
    {

        public abstract void OnLoad();
        public abstract void OnUnload();
        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>
        public async AsyncTask LoadAsync()
        {

            await base.BindAsync<T>();
            OnLoad();

        }
        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>

        public void LoadSync()
        {
            base.BindSync<T>();
            OnLoad();

        }
        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>
        public void LoadSync(GameObject instance)
        {
            base.BindInstance<T>(instance);
            OnLoad();

        }
        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>
        public override void Unload()
        {
            OnUnload();
            base.Unload();
        }



    }
}
