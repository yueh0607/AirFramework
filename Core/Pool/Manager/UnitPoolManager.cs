using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class Pool
    {
        private static IDPool id_pool = new IDPool();
        

        internal static uint AllocateID()
        {
            return id_pool.GetId();
        }
        internal static void ReleaseID(uint id)
        {
            id_pool.ReleaseId(id);
        }


        public static void CreateUnitPool<T>() where T : Unit
        {

        }


    }
}
