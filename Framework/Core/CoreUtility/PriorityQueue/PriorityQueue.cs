﻿using System;
using System.Collections.Generic;

namespace AirFramework
{
    struct HeapNode<T>
    {
        public int Priority;
        public T Value;
    }
    public class PriorityQueue<T>  where T : IComparer<T>
    {

        private List<T> heap = new List<T>();

        
        public PriorityQueue() 
        {
            
        }
  
        public void Enqueue(T item ) 
        {
            heap.Add( item );
        }
        public T Dequeue()
        {
            throw new NotImplementedException();
        }
        public T  Peek() { throw new NotImplementedException(); }
       
    }
}