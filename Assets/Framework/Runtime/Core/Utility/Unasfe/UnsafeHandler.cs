using Unity.Collections.LowLevel.Unsafe;

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
            return ref UnsafeUtility.As<TFrom, TTo>(ref source);
#elif NETSTANDARD
                return ref Unsafe.As<TFrom,TTo>(ref source);
#endif
        }



    }
}
