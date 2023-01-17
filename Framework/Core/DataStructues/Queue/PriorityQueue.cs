using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class PriorityQueue<T>  where T : IComparer<T>
    {

        Predicate<T> predicate;
        public PriorityQueue(Predicate<T> cmp) 
        {
            if (cmp == null) throw new Exception("Cmp cannot be null!");
            predicate= cmp;
        }
        
        public void Enqueue(T item ) 
        {
            
        }
        public T Dequeue()
        {
            throw new NotImplementedException();
        }
        public T  Peek() { throw new NotImplementedException(); }
       
    }
}
