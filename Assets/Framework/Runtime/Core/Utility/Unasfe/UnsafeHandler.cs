﻿
namespace AirFramework
{
    public unsafe class UnsafeHandler
    {
#pragma warning disable
        //unsafe public static ref TTo AsRef<TFrom, TTo>(ref TFrom source)
        //{
        //    fixed (void* sourcePtr = &source)
        //    {
        //        return ref *(TTo*)sourcePtr;
        //    }
        //}
#pragma warning restore

        public static ref TTo As<TFrom, TTo>(ref TFrom source)
        {
#if UNITY_2020_1_OR_NEWER
            return ref Unity.Collections.LowLevel.Unsafe.UnsafeUtility.As<TFrom, TTo>(ref source);
#elif NETCOREAPP
                return ref System.Runtime.CompilerServices.Unsafe.As<TFrom,TTo>(ref source);
#else 
#error 消息系统仅支持 Unity3D 2020.1或更新，以及有.NET Core支持的平台。
#endif
        }



    }
}
