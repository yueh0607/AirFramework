using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IInterceptor
    {
        void Intercept(IRecorder recorder);
        void UnIntercept(IRecorder recorder);

    }
}
