using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class LogManager : GlobalManager
    {

        public ILogger Logger { get; set; }


        public override string Name => "LogManager";

        protected override void OnDispose()
        {
            
        }
    }
}
