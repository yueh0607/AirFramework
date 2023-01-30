using System;

namespace AirFramework
{
    public static partial class Extensions
    {
        public static void Cancel<T1>(this UnitMessageDispatcherContanier container, Func<T1> message)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1>), message);
            container.Dispose();
        }
        public static void Cancel<T1,T2>(this UnitMessageDispatcherContanier container, Func<T1,T2> message)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1,T2>), message);
            container.Dispose();
        }
        public static void Cancel<T1, T2,T3>(this UnitMessageDispatcherContanier container, Func<T1, T2,T3> message)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2,T3>), message);
            container.Dispose();
        }
        public static void Cancel<T1, T2, T3,T4>(this UnitMessageDispatcherContanier container, Func<T1, T2, T3,T4> message)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2, T3,T4>), message);
            container.Dispose();
        }
        public static void Cancel<T1, T2, T3, T4,T5>(this UnitMessageDispatcherContanier container, Func<T1, T2, T3, T4,T5> message)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2, T3, T4,T5>), message);
            container.Dispose();
        }
        public static void Cancel<T1, T2, T3, T4, T5,T6>(this UnitMessageDispatcherContanier container, Func<T1, T2, T3, T4, T5,T6> message)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2, T3, T4, T5,T6>), message);
            container.Dispose();
        }


        //-----------------------------------------------------------------------------------------------------------------------------------------
        public static void Cancel<T1>(this UnitMessageDispatcherContanier container)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1>));
            container.Dispose();
        }
        public static void Cancel<T1, T2>(this UnitMessageDispatcherContanier container)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2>));
            container.Dispose();
        }
        public static void Cancel<T1, T2, T3>(this UnitMessageDispatcherContanier container)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2, T3>));
            container.Dispose();
        }
        public static void Cancel<T1, T2, T3, T4>(this UnitMessageDispatcherContanier container)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2, T3, T4>));
            container.Dispose();
        }
        public static void Cancel<T1, T2, T3, T4, T5>(this UnitMessageDispatcherContanier container)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2, T3, T4, T5>));
            container.Dispose();
        }
        public static void Cancel<T1, T2, T3, T4, T5, T6>(this UnitMessageDispatcherContanier container)
        {
            Framework.Message.UnRegister(container.Value.TypeValue, container.Value.Receiver, typeof(Func<T1, T2, T3, T4, T5, T6>));
            container.Dispose();
        }
    }
}
