using AirFramework.Utility;
using System;

namespace AirFramework
{

    internal static class LifeCycleAdder
    {
        public static void AddAllLifeCycle(Type type)
        {
            if (!type.IsClass || type.IsAbstract || type.IsInterface) return;
            if (!typeof(LifeCycleHandler).IsAssignableFrom(type)) return;

            var gen = ReflectionHelper.GetRawGeneric(type, typeof(LifeCycleHandler<>));
            if (gen == null) return;
            var inter = gen.GenericTypeArguments[0];
            Framework.Message.LifeCycle.AddLifeCycle(inter, type);
            //UnityEngine.Debug.Log($"添加:{inter.Name},{type.Name}");
        }


    }

}
