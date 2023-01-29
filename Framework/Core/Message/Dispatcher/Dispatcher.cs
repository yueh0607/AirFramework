using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public partial class MessageDispatcher:Unit
    {
        /// <summary>
        /// 统计Request和Event的总数
        /// </summary>
        public int CountAll => events.Count + requests.Count;
        protected override void OnDispose()
        {
            lock (events)
            {
                foreach (var tp in events)
                {
                    tp.Value.Dispose();
                }
                events.Clear();
                requests.Clear();

            }
        }
    }
}
