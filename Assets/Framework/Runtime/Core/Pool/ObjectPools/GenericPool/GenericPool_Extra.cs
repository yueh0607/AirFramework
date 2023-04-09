using System.Threading.Tasks;

namespace AirFramework
{
    public partial class GenericPool<T> : ObjectPoolBase, IGenericPool<T> where T : class
    {



        #region 拓展行为
        /// <summary>
        /// 申请对象
        /// </summary>
        /// <returns></returns>

        public virtual T Allocate() => (T)AllocateObj();

        /// <summary>
        /// 回收对象到该池
        /// </summary>
        /// <param name="item"></param>

        public virtual void Recycle(T item) => RecycleObj(item);
        #endregion

        
    }
}
