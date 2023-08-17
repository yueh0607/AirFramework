using MemoryPack;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    [MemoryPackable]
    public partial class TypeCouple
    {
        public Type TrueType;

        public byte[] TrueData;
    }


    public class TypeCoupleHolder : Unit,IRecycle
    {
        public TypeCouple Couple { get; set; }

        public ArrayHolder<byte> Holder { get; set; }


        public void Initialize(int size,Type type)
        {
            Holder = Framework.Pool.Allocate<ArrayHolder<byte>>();
            Holder.SetSize(size,true);
            Couple.TrueData = Holder.Value;
            Couple.TrueType = type;
        }

        void IRecycle.OnRecycle()
        {
            Couple.TrueData = null;
            Couple.TrueType = null;
            Holder.Dispose();

        }


        protected override void OnDispose()
        {
           this.RecycleSelf();
        }
    }
}
