using AirFramework.Internal;

namespace AirFramework
{
    internal static class ReflectionProcess
    {
        public static void RegisterProcess()
        {
            AirEngine.InitialReflection += LifeCycleAdder.AddAllLifeCycle;
            AirEngine.InitialReflection += FrameworkInitializer.CreateByReflection;

        }


    }
}
