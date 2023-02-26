using System;
using System.Reflection;

namespace AirFramework
{
    public static class FuncCreator
    {

        private static T CreateFunc<T>()
        {
            return Activator.CreateInstance<T>();
        }
       
        
        public static Delegate GetFunc(Type type)
        {
            Type funcType = typeof(Func<>).MakeGenericType(type);
            MethodInfo mi = typeof(FuncCreator).GetMethod("CreateFunc",BindingFlags.Static | BindingFlags.NonPublic).MakeGenericMethod(type);
            return Delegate.CreateDelegate(funcType, mi);
        }
    }
}
