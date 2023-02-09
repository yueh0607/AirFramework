using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static partial class MessageExtensions
    {
        public static void L(this object any)
        {
            Framework.Log.L(any);
        }
        public static void W(this object any)
        {
            Framework.Log.W(any);
        }
        public static void E(this object any)
        {
            Framework.Log.E(any);
        }

        public static void Throw(this Exception ex)
        {
            Framework.Log.Throw(ex);
        }


        public static T Throw<T>(this Exception ex)
        {
            Framework.Log.Throw(ex);
            return default;
        }
    }
}
