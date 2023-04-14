using System.Collections.Generic;
namespace AirFramework
{
    public class UIDGenerator
    {


        /// <summary>
        /// 已经占用的ID
        /// </summary>
        private HashSet<ulong> guids = new HashSet<ulong>();
        /// <summary>
        /// 已经回收的ID
        /// </summary>
        private Queue<ulong> queue_recycle = new Queue<ulong>();


        /// <summary>
        /// 已注册ID数量
        /// </summary>
        public int Count => guids.Count;
        public int RepeatCount { get; set; }

        private ulong uid_adder = 0;

        /// <summary>
        /// 申请ID
        /// </summary>
        /// <returns></returns>
        public ulong Allocate()
        {
            if (queue_recycle.Count > RepeatCount)
            {
                ulong id = queue_recycle.Dequeue();
                guids.Add(id);
                return id;
            }

            while (guids.Contains(uid_adder)) uid_adder++;
            guids.Add(uid_adder);
            return uid_adder++;
        }

        /// <summary>
        /// 清空ID占用
        /// </summary>
        public void Clear()
        {
            guids.Clear();
            queue_recycle.Clear();
        }

        /// <summary>
        /// 回收ID
        /// </summary>
        /// <param name="item"></param>
        public void Recycle(ulong item)
        {
            guids.Remove(item);
            queue_recycle.Enqueue(item);
        }



        /// <summary>
        /// 超过申请100个ID可能会跟曾经的重复
        /// </summary>
        /// <param name="repeatCount"></param>
        public UIDGenerator(int repeatCount = 100)
        {
            this.RepeatCount = repeatCount;
        }
    }
}
