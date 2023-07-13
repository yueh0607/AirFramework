

using System;
using System.Reflection;
namespace AirFramework
{
    /// <summary>
    /// 反射创建泛型委托创建器
    /// </summary>
    public static class Prefix_FuncCreator
    {

#pragma warning disable IDE0051 // 删除未使用的私有成员
        private static T CreateFunc<T>()

        {
            return Activator.CreateInstance<T>();
        }
#pragma warning restore IDE0051 // 删除未使用的私有成员

        public static Delegate GetFunc(Type type)
        {
            Type funcType = typeof(Func<>).MakeGenericType(type);
            MethodInfo mi = typeof(Prefix_FuncCreator).GetMethod("CreateFunc", BindingFlags.Static | BindingFlags.NonPublic).MakeGenericMethod(type);
            return Delegate.CreateDelegate(funcType, mi);
        }
    }
}
