using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class GenericPool<T> : BasePool where T : class 
    {
        public override Type ObjectType => typeof(T);

        public new T Allocate()
        {
            return base.Allocate() as T;
        }

        protected Func<T> onCreateItem=null;
        protected Action<T> onDestroyItem=null,onReleaseItem=null,onAllocateItem = null;


        protected GenericPool() { }
        public GenericPool(Func<T> onCreate, Action<T> onDestroy =null,Action<T> onRelease=null,Action<T> onAllocate=null) 
        {
            onCreateItem = onCreate ?? throw new NullReferenceException("OnCreate Function cannot be null!");
            onDestroyItem = onDestroy;
            onReleaseItem = onRelease;
            onAllocateItem= onAllocate;
        }
       

        protected override object OnCreateItem()
        {
            return onCreateItem();
        }

        protected override void OnAllocateItem(object item)
        {
            onAllocateItem?.Invoke((T)item);
        }

        protected override void OnDestroyItem(object item)
        {
            onDestroyItem?.Invoke((T)item);
        }

        protected override void OnReleaseItem(object item)
        {
            onReleaseItem?.Invoke((T)item);
        }

        public override string ToString()
        {
            return $"GenericPool{{Count={pool.Value.Count},Type={ObjectType.Name}}}";
        }
    }
}
