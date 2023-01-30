using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    /// <summary>
    /// 用于存储方法组的事件，包含一个方法的多个重载
    /// </summary>
    public class DelegateGroup 
    {
        private Dictionary<Type, UnitList<Delegate>> events = new();

        //用于向事件组添加新的委托
        private void Add(Delegate dele,Type deleType)
        {
            if (!events.ContainsKey(deleType))
            {
                events.Add(deleType, Framework.Pool.Allocate<UnitList<Delegate>>());
            }
            events[deleType].Value.Add(dele);
        }
        //从事件组移除委托
        private void Remove(Delegate dele,Type deleType)
        {
            if (events.ContainsKey(deleType))
            {
                events[deleType].Value.Remove(dele);
                if (events[deleType].Value.Count == 0)
                {
                    events[deleType].Dispose();
                    events.Remove(deleType);
                }
            }
        }

        public void Add(Delegate dele)
        {
            Add(dele,dele.GetType());
        }
        public void Add<DelegateType>(Delegate dele) where DelegateType : Delegate
        {
            Add(dele,typeof(DelegateType));
        }
        public void Remove(Delegate dele)
        {
            Remove(dele,dele.GetType());
        }
        public void Remove<DelegateType>(Delegate dele) where DelegateType : Delegate
        {
            Remove(dele,typeof(DelegateType));
        }
        public void Remove(Type deleType)
        {
            if (events.ContainsKey(deleType))
            {
                events[deleType].Dispose();
                events.Remove(deleType);
            }
        }
        public void Remove<T>()
        {
            Remove(typeof(T));
        }


        /// <summary>
        /// 返回同类型可空委托列表，禁止长期持有返回值的引用，该引用在对象池回收后无效，可能引发
        /// </summary>
        /// <param name="deleType"></param>
        /// <returns></returns>
        public List<Delegate> Get(Type deleType)
        {
            events.TryGetValue(deleType, out var result);
            return result?.Value;
        }

        public List<Delegate> Get<T>()
        {
            events.TryGetValue(typeof(T), out var result);
            return result?.Value;
        }

        public void Clear()
        {
            
            
        }
    }
}
