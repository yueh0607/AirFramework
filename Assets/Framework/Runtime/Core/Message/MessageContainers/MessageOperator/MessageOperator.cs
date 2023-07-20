/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 消息操作器定义
 ********************************************************************************************/

using System;
namespace AirFramework
{
    /// <summary>
    /// 委托组
    /// </summary>
    public partial class MessageOperator : Unit
    {
        internal UnitList<Delegate> EventsContainer { get; private set; } = new();

        /// <summary>
        /// 委托类型数
        /// </summary>
        public int Count => EventsContainer.Value.Count;
        /// <summary>
        /// 遍历位置
        /// </summary>
        public int IntervalIndex { get; private set; } = 0;
        private int MaxIndex = -1;
        protected override void OnDispose()
        {
            Clear();
        }

        /// <summary>
        /// 清空操作器
        /// </summary>
        public void Clear()
        {
            EventsContainer.Value.Clear();
        }


        /// <summary>
        /// 添加委托
        /// </summary>
        /// <param name="dele"></param>
        public void Add(Delegate dele)
        {
            EventsContainer.Value.Add(dele);
        }

        /// <summary>
        /// 移除委托
        /// </summary>
        /// <param name="dele"></param>
        /// <returns></returns>
        public bool Remove(Delegate dele)
        {
            int index = EventsContainer.Value.IndexOf(dele);
            if (index <= IntervalIndex) --IntervalIndex;

            return EventsContainer.Value.Remove(dele);
        }

        /// <summary>
        /// 获取下一个委托，需要与reset搭配
        /// </summary>
        /// <param name="dele"></param>
        /// <returns></returns>
        public bool GetNext(out Delegate dele)
        {
            if (MaxIndex == -1) MaxIndex = EventsContainer.Value.Count ;
            if (IntervalIndex >= 0 && IntervalIndex < Math.Min(EventsContainer.Value.Count, MaxIndex))
            {
                dele = EventsContainer.Value[IntervalIndex++];
                return true;
            }
            else dele = null;
            return false;
        }

        /// <summary>
        /// 重置GetNext
        /// </summary>
        public void Reset()
        {
            IntervalIndex = 0;
            MaxIndex = -1;
        }
    }
}
