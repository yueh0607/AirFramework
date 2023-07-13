using System.Diagnostics;


namespace AirFramework
{
    public static partial class Framework
    {
        [DebuggerHidden]
        public static MVCManager MVC => SingletonProperty<MVCManager>.Instance;


        /// <summary>
        /// ModelManager
        /// </summary>
        public static ModelManager Models { get; } = new ModelManager();

    }
}
