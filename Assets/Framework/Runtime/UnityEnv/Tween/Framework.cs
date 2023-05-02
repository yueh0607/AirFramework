using System.Diagnostics;


namespace AirFramework
{
    public static partial class Framework
    {
        [DebuggerHidden]
        public static TweenManager Tween => SingletonProperty<TweenManager>.Instance;
    }
}
