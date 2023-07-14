using System;
using System.Collections.Generic;

//For simple      中文的 exception!!
namespace AirFramework.StringEvent
{
    #region 委托重载
    public delegate void MessageDelegate();
    public delegate void MessageDelegate<T>(T arg1);
    public delegate void MessageDelegate<T, K>(T arg1, K arg2);
    public delegate void MessageDelegate<T, K, W>(T arg1, K arg2, W arg3);
    public delegate void MessageDelegate<T, K, W, G>(T arg1, K arg2, W arg3, G arg4);
    #endregion

    #region 异常

    public class NotMatchTypeException : System.Exception
    {
        public NotMatchTypeException(string text) : base(text) { }
    }
    public class AddNotMatchTypeException : NotMatchTypeException
    {
        public AddNotMatchTypeException() : base("已经添加过参数类型或参数个数不同的同名事件!") { }
    }
    public class RemoveNotMatchTypeException : NotMatchTypeException
    {
        public RemoveNotMatchTypeException() : base("已经添加过参数类型或参数个数不同的同名事件!") { }
    }

    public class SendNotExistException : System.Exception
    {
        public SendNotExistException() : base("事件未注册!") { }
    }
    public class SendParmNotMatchException : NotMatchTypeException
    {
        public SendParmNotMatchException() : base("调用参数与注册时参数不匹配!") { }
    }
    public class RemoveNotExistException : System.Exception
    {

    }

    #endregion

    public static class StringEvent
    {
        private static readonly Dictionary<string, Delegate> map = new();
        #region Add部分的实现
        public static void Add(string tag, MessageDelegate events)
        {
            if (!map.ContainsKey(tag))
            {
                map.Add(tag, events);
            }
            else if (map[tag] is MessageDelegate newEvent)
            {
                map[tag] = newEvent + events;
            }
            else throw new AddNotMatchTypeException();
        }
        public static void Add<T1>(string tag, MessageDelegate<T1> events)
        {
            if (!map.ContainsKey(tag))
            {
                map.Add(tag, events);
            }
            else if (map[tag] is MessageDelegate<T1> newEvent)
            {
                map[tag] = newEvent + events;
            }
            else throw new AddNotMatchTypeException();
        }
        public static void Add<T1, T2>(string tag, MessageDelegate<T1, T2> events)
        {
            if (!map.ContainsKey(tag))
            {
                map.Add(tag, events);
            }
            else if (map[tag] is MessageDelegate<T1, T2> newEvent)
            {
                map[tag] = newEvent + events;
            }
            else throw new AddNotMatchTypeException();
        }

        public static void Add<T1, T2, T3>(string tag, MessageDelegate<T1, T2, T3> events)
        {
            if (!map.ContainsKey(tag))
            {
                map.Add(tag, events);
            }
            else if (map[tag] is MessageDelegate<T1, T2, T3> newEvent)
            {
                map[tag] = newEvent + events;
            }
            else throw new AddNotMatchTypeException();
        }

        public static void Add<T1, T2, T3, T4>(string tag, MessageDelegate<T1, T2, T3, T4> events)
        {
            if (!map.ContainsKey(tag))
            {
                map.Add(tag, events);
            }
            else if (map[tag] is MessageDelegate<T1, T2, T3, T4> newEvent)
            {
                map[tag] = newEvent + events;
            }
            else throw new AddNotMatchTypeException();
        }

        #endregion

        #region Remove部分的实现
        public static void RemoveAll() => map.Clear();
        public static void Remove(string tag) => map.Remove(tag);
        public static void Remove(string tag, MessageDelegate events)
        {
            if (!map.ContainsKey(tag))
            {
                return;//throw new RemoveNotMatchTypeException
            }
            else if (map[tag] is MessageDelegate newEvent)
            {
                map[tag] = newEvent - events;
                if (map[tag] == null || map[tag].GetInvocationList().Length == 0) map.Remove(tag);
            }
            else throw new RemoveNotMatchTypeException();
        }

        public static void Remove<T1>(string tag, MessageDelegate<T1> events)
        {
            if (!map.ContainsKey(tag))
            {
                return;
            }
            else if (map[tag] is MessageDelegate<T1> newEvent)
            {
                map[tag] = newEvent - events;
                if (map[tag] == null || map[tag].GetInvocationList().Length == 0) map.Remove(tag);
            }
            else throw new RemoveNotMatchTypeException();

        }

        public static void Remove<T1, T2>(string tag, MessageDelegate<T1, T2> events)
        {
            if (!map.ContainsKey(tag))
            {
                return;
            }
            else if (map[tag] is MessageDelegate<T1, T2> newEvent)
            {
                map[tag] = newEvent - events;
                if (map[tag] == null || map[tag].GetInvocationList().Length == 0) map.Remove(tag);
            }
            else throw new RemoveNotMatchTypeException();

        }

        public static void Remove<T1, T2, T3>(string tag, MessageDelegate<T1, T2, T3> events)
        {
            if (!map.ContainsKey(tag))
            {
                return;
            }
            else if (map[tag] is MessageDelegate<T1, T2, T3> newEvent)
            {
                map[tag] = newEvent - events;
                if (map[tag] == null || map[tag].GetInvocationList().Length == 0) map.Remove(tag);
            }
            else throw new RemoveNotMatchTypeException();

        }

        public static void Remove<T1, T2, T3, T4>(string tag, MessageDelegate<T1, T2, T3, T4> events)
        {
            if (!map.ContainsKey(tag))
            {
                return;
            }
            else if (map[tag] is MessageDelegate<T1, T2, T3, T4> newEvent)
            {
                map[tag] = newEvent - events;
                if (map[tag] == null || map[tag].GetInvocationList().Length == 0) map.Remove(tag);
            }
            else throw new RemoveNotMatchTypeException();

        }

        #endregion

        #region Send部分的实现
        public static void Send(string tag)
        {
            if (!map.ContainsKey(tag)) throw new SendNotExistException();
            else if (map[tag] is MessageDelegate thisEvent)
            {
                thisEvent();
            }
            else throw new SendParmNotMatchException();
        }
        public static void Send<T1>(string tag, T1 arg)
        {
            if (!map.ContainsKey(tag)) throw new SendNotExistException();
            else if (map[tag] is MessageDelegate<T1> thisEvent)
            {
                thisEvent(arg);
            }
            else throw new SendParmNotMatchException();
        }

        public static void Send<T1, T2>(string tag, T1 arg1, T2 arg2)
        {
            if (!map.ContainsKey(tag)) throw new SendNotExistException();
            else if (map[tag] is MessageDelegate<T1, T2> thisEvent)
            {
                thisEvent(arg1, arg2);
            }
            else throw new SendParmNotMatchException();
        }

        public static void Send<T1, T2, T3>(string tag, T1 arg1, T2 arg2, T3 arg3)
        {
            if (!map.ContainsKey(tag)) throw new SendNotExistException();
            else if (map[tag] is MessageDelegate<T1, T2, T3> thisEvent)
            {
                thisEvent(arg1, arg2, arg3);
            }
            else throw new SendParmNotMatchException();
        }

        public static void Send<T1, T2, T3, T4>(string tag, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
        {
            if (!map.ContainsKey(tag)) throw new SendNotExistException();
            else if (map[tag] is MessageDelegate<T1, T2, T3, T4> thisEvent)
            {
                thisEvent(arg1, arg2, arg3, arg4);
            }
            else throw new SendParmNotMatchException();
        }

        #endregion


    }
}