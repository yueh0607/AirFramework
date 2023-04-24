using System;
using System.Collections.Generic;

namespace AirFramework
{
    public class HandleQueue<T> : IUpdate
    {
        public Queue<T> queue = new Queue<T>();
        public int HandleCountPerFrame { get; set; } = 1;
        public event Action<T> HandleEvent;

        public HandleQueue(Action<T> handler, int handleCount)
        {
            HandleEvent += handler;
            HandleCountPerFrame = handleCount;
        }

        public void Enqueue(T obj)
        {
            queue.Enqueue(obj);
        }

        private int current = 0;
        void IUpdate.Update(float time)
        {
            if (queue.Count > 0 && current++ >= HandleCountPerFrame)
            {
                HandleEvent?.Invoke(queue.Dequeue());
                current = 0;
            }
        }
    }
}
