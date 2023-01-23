using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Plastic.Antlr3.Runtime.Misc;
using UnityEngine;

namespace AirFramework
{
    public class DelegateChain : Unit
    {

        public DelegateChain(params Delegate[] chain)
        {
            Add(chain);
        }

        public Type ChainType
        {
            get
            {
                if (Count > 0) return DelegateList.First.GetType();
                return typeof(object);
            }
        }


        LinkedList<Delegate> delegates = new LinkedList<Delegate>();


        public int Count => delegates.Count;
        public LinkedList<Delegate> DelegateList => delegates;

        public void Remove(params Delegate[] message)
        {
            Type delType = ChainType;

            foreach (var del in message)
            {
                if (message.GetType() == delType||delType==typeof(object))
                    delegates.Remove(del);
                else throw new ArgumentException("All Delegates in chain must be same type");
            }
        }
        public void Add(params Delegate[] message)
        {
            Type delType = ChainType;
            foreach (var del in message)
            {
                if (del.GetType() == delType || delType == typeof(object))
                    delegates.AddLast(del);
                else throw new ArgumentException("All Delegates in chain must be same type");
            }
        }
        public void Clear() { delegates.Clear(); }



        protected override void OnDispose()
        {
            Clear();
        }
    }
}
