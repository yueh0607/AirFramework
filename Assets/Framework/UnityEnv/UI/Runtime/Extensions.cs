using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static class UIExtensions
    {
        [DebuggerHidden,MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T GetModel<T> (this Controller controller) where T : Model
        {
            return Framework.UI.Models.Get<T>();
        }


    }
}
