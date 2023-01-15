using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public class UnitStringBuilder : Unit,IUnitEventPoolable
    {
        StringBuilder builder = new StringBuilder();

        public StringBuilder Value=>builder;

        public IObjectPool thisPool { get; set; }
        public bool isRecycled { get; set; }

        public void OnAllocate()
        {
            
        }

        public void OnRecycle()
        {
            builder.Clear();
        }

        /// <summary>
        /// 回收时调用，自动进入对象池
        /// </summary>
        protected override void OnDispose()
        {
            if (thisPool != null && isRecycled != true && !thisPool.Disposed)
            {
                thisPool.Recycle(this);
            }
        }
    }
   
}
