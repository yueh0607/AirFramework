using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class IDPool : IPool
    {
        public Type ObjectType => typeof(uint);

        public int Count => pool.Value.Count;

        private Lazy<HashSet<uint>> pool = new Lazy<HashSet<uint>>();

        private uint current = uint.MaxValue;

        public uint GetId()
        {
            while (pool.Value.Contains(current))
            {
                if(current==0)
                {
                    current = uint.MaxValue;
                }
                current--;

            }
            pool.Value.Add(current);

            return current;

        }
        public void ReleaseId(uint id)
        {
            pool.Value.Remove(id);
        }

    }
}
