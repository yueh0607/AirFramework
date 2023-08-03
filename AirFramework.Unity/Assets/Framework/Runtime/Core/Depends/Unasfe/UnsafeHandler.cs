using System.Diagnostics;

namespace AirFramework
{

    public unsafe class UnsafeHandler
    {
        [DebuggerHidden]
        public static ref TTo As<TFrom, TTo>(ref TFrom source)
        {

            return ref System.Runtime.CompilerServices.Unsafe.As<TFrom, TTo>(ref source);
#if UNITY_2020_1_OR_NEWER
            return ref Unity.Collections.LowLevel.Unsafe.UnsafeUtility.As<TFrom, TTo>(ref source);
#elif NETCOREAPP
                return ref System.Runtime.CompilerServices.Unsafe.As<TFrom,TTo>(ref source);
#else 
#error 事件系统仅支持 Unity3D 2020.1或更新，以及有.NET Core支持的平台。
#endif
        }



    }
}
