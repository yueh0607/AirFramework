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

            for(int i=0;i<events.Count;++i)
            {

            }
            
        }
        public static void Publish<T1>(this UnitMessageDispatcherContanier container, T1 arg1)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action<T1>));
            container.Dispose();
        }
        public static void Publish<T1,T2>(this UnitMessageDispatcherContanier container, T1 arg1,T2 arg2)
        {
            var events = Framework.Message.GetDispatcher(container.Value.TypeValue).Value.Get(container.Value.Receiver, typeof(Action<T1,T2>));
            container.Dispose();
        }
    }
}
