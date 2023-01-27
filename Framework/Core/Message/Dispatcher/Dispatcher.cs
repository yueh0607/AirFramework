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
        /// 统计Question和Event的总数
        /// </summary>
        public int CountAll => pool.Count + questions.Count;
        protected override void OnDispose()
        {
            lock (pool)
            {
                foreach (var tp in pool)
                {
                    tp.Value.Dispose();
                }
                pool.Clear();
                questions.Clear();

            }
        }
    }
}
