using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IFixedUpdate : ILIfeCycle
    {
        void FixedUpdate() { }
        new void OnLifeCycleRegister()
        {
            Framework.LifeCycle.Register<IFixedUpdate>(FixedUpdate);
        }
    }
}
