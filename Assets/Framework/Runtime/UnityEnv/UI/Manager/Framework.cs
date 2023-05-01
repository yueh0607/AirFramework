using System.Diagnostics;
namespace AirFramework
{
    public static partial class Framework
    {
        [DebuggerHidden]
        public static UIManager UI=>SingletonProperty<UIManager>.Instance;


    }
}
