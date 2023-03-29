using System;

namespace AirFramework
{

    public static partial class MessageExtensions
    {

        /// <summary>
        /// 异步等待全部消息
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>
        public static async AsyncTask CallAllAsync(this UnitDelegateGroup container)
        {
            var events = container?.Value.Get<Func<AsyncTask>>();

            if (events == null) return;

            UnitList<AsyncTask> list = new UnitList<AsyncTask>();
            for (int i = 0; i < events.Count; i++)
            {
                list.Value.Add((events[i] as Func<AsyncTask>).Invoke());
            }
            await Async.WaitAll(list.Value);
        }
        /// <summary>
        /// 异步等待全部消息
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>
        public static async AsyncTask<T1[]> CallAllAsync<T1>(this UnitDelegateGroup container)
        {
            var events = container?.Value.Get<Func<T1, AsyncTask<T1>>>();

            if (events == null) return new T1[0] { };

            UnitList<AsyncTask<T1>> list = new UnitList<AsyncTask<T1>>();
            for (int i = 0; i < events.Count; i++)
            {
                list.Value.Add((events[i] as Func<AsyncTask<T1>>).Invoke());
            }
            var result = await Async.WaitAll(list.Value);
            list.Dispose();
            return result;
        }

        /// <summary>
        /// 异步等待全部
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>
        public static async AsyncTask<T2[]> CallAllAsync<T1, T2>(this UnitDelegateGroup container, T1 arg1)
        {
            var events = container?.Value.Get<Func<T1, AsyncTask<T2>>>();

            if (events == null) return new T2[0] { };

            UnitList<AsyncTask<T2>> list = new UnitList<AsyncTask<T2>>();
            for (int i = 0; i < events.Count; i++)
            {
                list.Value.Add((events[i] as Func<T1, AsyncTask<T2>>).Invoke(arg1));
            }



            var result = await Async.WaitAll(list.Value);
            list.Dispose();
            return result;
        }
        /// <summary>
        /// 异步等待全部
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>
        public static async AsyncTask<T3[]> CallAllAsync<T1, T2, T3>(this UnitDelegateGroup container, T1 arg1, T2 arg2)
        {
            var events = container?.Value.Get<Func<T1, AsyncTask<T3>>>();

            if (events == null) return new T3[0] { };

            UnitList<AsyncTask<T3>> list = new UnitList<AsyncTask<T3>>();
            for (int i = 0; i < events.Count; i++)
            {
                list.Value.Add((events[i] as Func<T1, T2, AsyncTask<T3>>).Invoke(arg1, arg2));
            }



            var result = await Async.WaitAll(list.Value);
            list.Dispose();
            return result;
        }
        /// <summary>
        /// 异步等待全部
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>
        public static async AsyncTask<T4[]> CallAllAsync<T1, T2, T3, T4>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, AsyncTask<T4>>>();

            if (events == null) return new T4[0] { };

            UnitList<AsyncTask<T4>> list = new UnitList<AsyncTask<T4>>();
            for (int i = 0; i < events.Count; i++)
            {
                list.Value.Add((events[i] as Func<T1, T2, T3, AsyncTask<T4>>).Invoke(arg1, arg2, arg3));
            }



            var result = await Async.WaitAll(list.Value);
            list.Dispose();
            return result;
        }


        /// <summary>
        /// 异步等待全部
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>

        public static async AsyncTask<T5[]> CallAllAsync<T1, T2, T3, T4, T5>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4, AsyncTask<T5>>>();

            if (events == null) return new T5[0] { };

            UnitList<AsyncTask<T5>> list = new UnitList<AsyncTask<T5>>();
            for (int i = 0; i < events.Count; i++)
            {
                list.Value.Add((events[i] as Func<T1, T2, T3, T4, AsyncTask<T5>>).Invoke(arg1, arg2, arg3, arg4));
            }

            var result = await Async.WaitAll(list.Value);
            list.Dispose();
            return result;
        }

        /// <summary>
        /// 异步等待全部
        /// </summary>
        /// <typeparam name="T1"></typeparam>
        /// <typeparam name="T2"></typeparam>
        /// <param name="container"></param>
        /// <param name="arg1"></param>
        /// <returns></returns>
        public static async AsyncTask<T6[]> CallAllAsync<T1, T2, T3, T4, T5, T6>(this UnitDelegateGroup container, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
        {
            var events = container?.Value.Get<Func<T1, T2, T3, T4, T5, AsyncTask<T6>>>();

            if (events == null) return new T6[0] { };

            UnitList<AsyncTask<T6>> list = new UnitList<AsyncTask<T6>>();
            for (int i = 0; i < events.Count; i++)
            {
                list.Value.Add((events[i] as Func<T1, T2, T3, T4, T5, AsyncTask<T6>>).Invoke(arg1, arg2, arg3, arg4, arg5));
            }

            var result = await Async.WaitAll(list.Value);
            list.Dispose();
            return result;
        }


    }
}
