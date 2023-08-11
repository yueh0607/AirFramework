using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class ArrayHolder<T> :Unit, IRecycle
    {

        private T[] array = null;

        /// <summary>
        /// 持有器持有的真实数组
        /// </summary>
        public T[] Value=>array;

        private int length = 0;
        public int Length => length;

        bool initialized = false;

        public void SetSize(int size)
        {
            //创建
            if (array == null)
            {
                array = new T[size];
           
            }
            //放大
            else if (array.Length < size)
            {
                T[] tempData = array;
                array = new T[size];
                Array.ConstrainedCopy(tempData,0,array,0,size);
            }

            length = size;
            initialized = true;
        }

        public T this[int index]
        {
            get
            {
                if (!initialized) throw new InvalidOperationException("You need to set the size for the array first");
                if (index<0||index>=length) throw new IndexOutOfRangeException();
                return array[index];
            }
        }

        public void OnRecycle()
        {
            Array.Clear(array, 0, length);
            length = array.Length;
        }

        protected override void OnDispose()
        {
            this.RecycleSelf();
        }
    }
}
