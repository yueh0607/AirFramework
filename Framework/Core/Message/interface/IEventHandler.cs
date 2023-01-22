using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework.Assets.Framework.Core.Message
{
    public interface IHandler
    {

    }
    public interface IEventHandler:IHandler
    {
        void HandleEvent(IEvent globalEvent);
    }
    public interface IEventHandler<T>:IHandler
    {
        T HandleEvent(IEvent globalEvent);
    }
    
}
