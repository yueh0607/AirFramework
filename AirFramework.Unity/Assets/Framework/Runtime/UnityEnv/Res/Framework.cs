using System.Diagnostics;


namespace AirFramework
{
    public static partial class Framework
    {
        [DebuggerHidden]
        public static ResManager Res => SingletonProperty<ResManager>.Instance;
    }
}
