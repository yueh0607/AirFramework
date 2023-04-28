using System.Diagnostics;


namespace AirFramework
{
    public static partial class Framework
    {
        [DebuggerHidden]
        public static MVCManager MVC { get; } = new MVCManager();
    }
}