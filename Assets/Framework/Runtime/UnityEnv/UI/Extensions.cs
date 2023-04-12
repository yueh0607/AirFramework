using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static class UIExtensions
    {
        [DebuggerHidden, MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T GetModel<T>(this Controller controller) where T : Model
        {
            return Framework.UI.Models.Get<T>();
        }


    }
}
