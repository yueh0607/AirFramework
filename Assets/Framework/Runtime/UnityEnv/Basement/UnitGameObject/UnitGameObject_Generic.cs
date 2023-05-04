using UnityEngine;

namespace AirFramework
{

    public abstract class UnitGameObject<T> : UnitGameObject where T : UnitGameObject<T>
    {

        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>
        public async AsyncTask LoadAsync()
        {
            await base.BindAsync<T>();
        }
        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>

        public void LoadSync()
        {
            base.BindSync<T>();
        }
        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>
        public void LoadSync(GameObject instance)
        {
            base.BindInstance<T>(instance);
        }
        /// <summary>
        /// 更加安全的初始化，自动类型
        /// </summary>
        /// <returns></returns>
        public override void Unload()
        {
            base.Unload();
        }



    }
}
