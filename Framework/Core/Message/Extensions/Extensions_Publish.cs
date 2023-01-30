using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Extensions
    {


        public static void Publish(this UnitMessageDispatcherContanier container)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action));
            container.Dispose();
            if (events == null || events.Count == 0) return;
            foreach (var act in events)
            {
                (act as Action)?.Invoke();
            }

        }
        public static void Publish<T1>(this UnitMessageDispatcherContanier container, T1 arg1)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action<T1>));
            container.Dispose();
            if (events == null || events.Count == 0) return;
            foreach (var act in events)
            {
                (act as Action<T1>)?.Invoke(arg1);
            }
        }
        public static void Publish<T1, T2>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action<T1, T2>));
            container.Dispose();
            if (events == null || events.Count == 0) return;
            foreach (var act in events)
            {
                (act as Action<T1, T2>)?.Invoke(arg1, arg2);
            }
        }
        public static void Publish<T1, T2, T3>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action<T1, T2, T3>));
            container.Dispose();
            if (events == null || events.Count == 0) return;
            foreach (var act in events)
            {
                (act as Action<T1, T2, T3>)?.Invoke(arg1, arg2, arg3);
            }
        }
        public static void Publish<T1, T2, T3, T4>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action<T1, T2, T3, T4>));
            container.Dispose();
            if (events == null || events.Count == 0) return;
            foreach (var act in events)
            {
                (act as Action<T1, T2, T3, T4>)?.Invoke(arg1, arg2, arg3, arg4);
            }
        }
        public static void Publish<T1, T2, T3, T4, T5>(this UnitMessageDispatcherContanier container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action<T1, T2, T3, T4, T5>));
            container.Dispose();
            if (events == null || events.Count == 0) return;
            foreach (var act in events)
            {
                (act as Action<T1, T2, T3, T4, T5>)?.Invoke(arg1, arg2, arg3, arg4, arg5);
            }
        }
    }
}
