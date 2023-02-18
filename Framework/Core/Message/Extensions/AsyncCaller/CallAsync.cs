using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public static partial class MessageExtensions
    {
        public static async AsyncTask<T1> CallAsync<T1>(this UnitDelegateGroup container)
            => await Call<AsyncTask<T1>>(container);

        public static async AsyncTask<T2> CallAsync<T1, T2>(this UnitDelegateGroup container, T1 arg1)
            => await Call<T1, AsyncTask<T2>>(container, arg1);

        public static async AsyncTask<T3> CallAsync<T1, T2, T3>(this UnitDelegateGroup container, T1 arg1, T2 arg2)
            => await Call<T1, T2, AsyncTask<T3>>(container, arg1, arg2);

        public static async AsyncTask<T4> CallAsync<T1, T2, T3, T4>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3)
            => await Call<T1, T2, T3, AsyncTask<T4>>(container, arg1, arg2, arg3);

        public static async AsyncTask<T5> CallAsync<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
            => await Call<T1, T2, T3, T4, AsyncTask<T5>>(container, arg1, arg2, arg3, arg4);

        public static async AsyncTask<T6> CallAsync<T1, T2, T3, T4, T5, T6>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
            => await Call<T1, T2, T3, T4, T5, AsyncTask<T6>>(container, arg1, arg2, arg3, arg4, arg5);




    }
}
