/********************************************************************************************
 * Date : 2023.1.30
 * Description : 
 * 存活对象唯一ID生成器 
 ********************************************************************************************/

using System.Collections.Generic;

namespace AirFramework
{

    public class UIDGenerator
    {
        private readonly HashSet<long> _pool;
        private long _pointer = 0;

        public UIDGenerator(int defaultCount = 0)
        {
            _pool = new HashSet<long>(defaultCount);
        }

        /// <summary>
        /// 存活的ID数量
        /// </summary>
        public int SurvivalCapacity => _pool.Count;

        /// <summary>
        /// 从生成器申请ID
        /// </summary>
        /// <returns></returns>
        public long Allocate()
        {
            if (SurvivalCapacity >= int.MaxValue) throw new IDOverflowException();
            //使用while在ulong溢出时不会导致深循环，溢出时全部ID接近于MAX，突然重置为0后一般在极少的循环
            //次数内即可找到未占用的ID值，即时有少量的长期占用区域，也可以被快速跳过
            while (_pool.Contains(_pointer++))
            {
                if (_pointer == long.MaxValue) _pointer = 0;
            }
            _pool.Add(_pointer);
            return _pointer;
        }

        /// <summary>
        /// 将ID释放会生成器，注意这个步骤是必要的，否则终有一刻ID将会因为耗尽无法生成
        /// </summary>
        /// <param name="id"></param>
        public void Release(long id)
        {
            _pool.Remove(id);
        }

        /// <summary>
        /// 强制清空ID占用，注意这个操作可能导致ID重复发生不可挽回的后果
        /// </summary>
        public void ForceReleaseAll()
        {
            _pool.Clear();
        }

        /// <summary>
        /// 强行占用该ID，主要用于ID生成器的数据持久化加载
        /// </summary>
        /// <param name="id"></param>
        public void ForceOccupy(long id)
        {
            _pool.Add(id);
            _pointer = _pointer < id ? id : _pointer;
        }

    }


    public class IDOverflowException : System.Exception
    {
        public IDOverflowException() : base($"For each generator, the maximum number of IDs that exist simultaneously is {int.MaxValue}, please check if there are any IDs that have not been released")
        {

        }
    }
}
