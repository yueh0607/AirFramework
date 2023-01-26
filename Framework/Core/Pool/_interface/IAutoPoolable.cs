using AirFramework;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public interface IAutoPoolable
    {
        public IObjectPool ThisPool { get; set; }
        public bool IsRecycled { get;  }
       
    }
}
