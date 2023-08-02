using System.Diagnostics;


namespace AirFramework
{
    public static partial class Framework
    {
        [DebuggerHidden]
        public static ResModule Res => SingletonProperty<ResModule>.Instance;
    }
}
