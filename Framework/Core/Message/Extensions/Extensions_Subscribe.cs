using System;

namespace AirFramework
{
    public static partial class Extensions
    {
        public static void Subscribe(this UnitMessageDispatcherContanier container,Action message)
        {
            Framework.Message.Subscribe(container.Value.TypeValue, container.Value.Receiver, typeof(Action), message);
            container.Dispose();
        }
        public static void Subscribe<T1>(this UnitMessageDispatcherContanier container, Action<T1> message)
        {
            Framework.Message.Subscribe(container.Value.TypeValue, container.Value.Receiver, typeof(Action<T1>), message);
            container.Dispose();
        }
        public static void Subscribe<T1,T2>(this UnitMessageDispatcherContanier container, Action<T1,T2> message)
        {
            Framework.Message.Subscribe(container.Value.TypeValue, container.Value.Receiver, typeof(Action<T1,T2>), message);
            container.Dispose();
        }
        public static void Subscribe<T1, T2,T3>(this UnitMessageDispatcherContanier container, Action<T1, T2,T3> message)
        {
            Framework.Message.Subscribe(container.Value.TypeValue, container.Value.Receiver, typeof(Action<T1, T2,T3>), message);
            container.Dispose();
        }
        public static void Subscribe<T1, T2, T3,T4>(this UnitMessageDispatcherContanier container, Action<T1, T2, T3,T4> message)
        {
            Framework.Message.Subscribe(container.Value.TypeValue, container.Value.Receiver, typeof(Action<T1, T2, T3,T4>), message);
            container.Dispose();
        }
        public static void Subscribe<T1, T2, T3, T4,T5>(this UnitMessageDispatcherContanier container, Action<T1, T2, T3, T4,T5> message)
        {
            Framework.Message.Subscribe(container.Value.TypeValue, container.Value.Receiver, typeof(Action<T1, T2, T3, T4,T5>), message);
            container.Dispose();
        }
    }
}
