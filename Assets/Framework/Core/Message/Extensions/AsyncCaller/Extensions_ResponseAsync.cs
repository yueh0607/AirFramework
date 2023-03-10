using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace AirFramework
{
    public static partial class MessageExtensions
    {
        public static void ResponseAsync(this UnitDelegateGroup container, Func<AsyncTask> message)
            => container?.Value.Add<Func<AsyncTask>>(message);


        public static void ResponseAsync<T1>(this UnitDelegateGroup container, Func<AsyncTask<T1>> message)
            => container?.Value.Add<Func<AsyncTask<T1>>>(message);



        public static void ResponseAsync<T1, T2>(this UnitDelegateGroup container, Func<T1, AsyncTask<T2>> message)
            => container?.Value.Add<Func<T1, AsyncTask<T2>>>(message);



        public static void ResponseAsync<T1, T2, T3>(this UnitDelegateGroup container, Func<T1, T2, AsyncTask<T3>> message)
            => container?.Value.Add<Func<T1, T2, AsyncTask<T3>>>(message);



        public static void ResponseAsync<T1, T2, T3, T4>(this UnitDelegateGroup container, Func<T1, T2, T3, AsyncTask<T4>> message)
            => container?.Value.Add<Func<T1, T2, T3, AsyncTask<T4>>>(message);



        public static void ResponseAsync<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, Func<T1, T2, T3, T4, AsyncTask<T5>> message)
            => container?.Value.Add<Func<T1, T2, T3, T4, AsyncTask<T5>>>(message);



        public static void ResponseAsync<T1, T2, T3, T4, T5, T6>(this UnitDelegateGroup container, Func<T1, T2, T3, T4, T5, AsyncTask<T6>> message)
            => container?.Value.Add<Func<T1, T2, T3, T4, T5, AsyncTask<T6>>>(message);
    }
}
