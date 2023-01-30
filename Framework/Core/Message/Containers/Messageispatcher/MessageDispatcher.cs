
using System;
using System.Collections.Generic;
using System.Threading;

namespace AirFramework
{
    /// <summary>
    /// 负责消息派发，本层结构模型    接收者 - 方法组
    /// </summary>
    public class MessageDispatcher : Unit
    {


        public int Count => events.Count;

        private Dictionary<IMessageReceiver, UnitDelegateGroup> events = new();

        //private readonly object locker = new object();

        public void Add(IMessageReceiver receiver, Type deleType,Delegate dele)
        {
            //Monitor.Enter(locker);

            if (!events.ContainsKey(receiver))
            {
                events.Add(receiver, Framework.Pool.Allocate<UnitDelegateGroup>());
            }
            events[receiver].Value.Add(dele,deleType);
            //Monitor.Exit(locker);
        }
        public void Remove(IMessageReceiver receiver,Type deleType, Delegate dele)
        {
            //Monitor.Enter(locker);

            if (events.ContainsKey(receiver))
            {
                var group = events[receiver];
                group.Value.Remove(dele,deleType);
                if (group.Value.Count == 0)
                {
                    events.Remove(receiver);
                    group.Dispose();
                }
            }


            //Monitor.Exit(locker);
        }
        public void Remove(IMessageReceiver receiver, Type deleType)
        {
            //Monitor.Enter(locker);
            if (events.ContainsKey(receiver))
            {
                var group = events[receiver];
                group.Value.Remove(deleType);
                if (group.Value.Count == 0)
                {
                    events.Remove(receiver);
                    group.Dispose();
                }
            }
            //Monitor.Exit(locker);
        }
        public void Remove(IMessageReceiver receiver)
        {
            //Monitor.Enter(locker);

            if (events.ContainsKey(receiver))
            {
                events[receiver].Dispose();
                events.Remove(receiver);
            }
            //Monitor.Exit(locker);
        }

        public void Clear()
        {
           //Monitor.Enter(locker);
            foreach (var group in events)
            {
                group.Value.Dispose();
            }
            events.Clear();
           //Monitor.Exit(locker);
        }

        protected override void OnDispose()
        {
            Clear();
        }
        public List<Delegate> Get(IMessageReceiver receiver,Type deleType)
        {
            events.TryGetValue(receiver, out var result);
            return result?.Value.Get(deleType);
        }
        public List<Delegate> Get<DelegateType>(IMessageReceiver receiver) where DelegateType : Delegate
        {
            events.TryGetValue(receiver, out var result);
            return result?.Value.Get(typeof(DelegateType));
        }

    }
}
