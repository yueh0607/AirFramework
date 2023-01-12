using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{

    public delegate void AirMessage();
    public delegate void AirMessage<A>(A a);
    public delegate void AirMessage<A,B>(A a,B b);
    public delegate void AirMessage<A, B, C>(A a,B b,C c);
    public delegate void AirMessage<A, B, C , D>(A a,B b,C c,D d);

    public delegate T AirEvent<T>();
    enum Priority
    {
        Immediately = 0,
        VeryUrgent=1,
        Urgent=2,
        Normal=3,
        Delay=4,
        VeryDelay=5
    }
    enum Message
    {
        None = 0,
    }
    public static class AirEventW
    {
        public static Dictionary<Enum, Delegate> pool= new Dictionary<Enum, Delegate>();
        
        private static void RegisterBase(Enum messageType,MulticastDelegate message)
        {
            if(pool.ContainsKey(messageType))
            {
              //  message.
            }

            
        }
        public static void Register(this Enum messsageType,AirMessage message)
        {

        }
        public static void Register<A,B>(this Enum messsageType, AirMessage<A,B> message)
        {

        }
        public static void Register<A,B,C>(this Enum messsageType, AirMessage<A,B,C> message)
        {

        }
        public static void Register<A,B,C,D>(this Enum messsageType, AirMessage<A,B,C,D> message)
        {

        }

    }
}
