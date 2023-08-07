using AirFramework.Internal;

namespace AirFramework
{
    internal static class ReflectionProcess
    {
        public static void RegisterProcess()
        {
            AirEngine.InitialReflectionAOT += LifeCycleAdder.AddAllLifeCycle;
            AirEngine.InitialReflectionAOT += FrameworkInitializer.CreateByReflection;



            AirEngine.InitialReflectionHotUpdate += LifeCycleAdder.AddAllLifeCycle;
            AirEngine.InitialReflectionHotUpdate += FrameworkInitializer.CreateByReflection;

        }




    }
}
