/********************************************************************************************
 * Author: YueZhenpeng
 * Date : 2023.1.30
 * Description : 消息操作器定义
 ********************************************************************************************/

using System;
namespace AirFramework
{
    /// <summary>
    /// 委托组(方法组委托)
    /// </summary>
    public partial class MessageOperator : Unit
    {
        public UnitList<Delegate> EventsContainer { get; private set; } = new();

        /// <summary>
        /// 委托类型数
        /// </summary>
        public int Count => EventsContainer.Value.Count;

        public int FF= 0;

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



        public void Add(Delegate dele)
        {
            EventsContainer.Value.Add(dele);
        }

        public bool Remove(Delegate dele)
        {
            int index = EventsContainer.Value.IndexOf(dele);
            if(index<=FF)--FF;
            
            return EventsContainer.Value.Remove(dele);
        }

        public bool GetNext(out Delegate dele)
        {
            if(FF>0&&FF<EventsContainer.Value.Count)
            {
                ++FF;
                dele  = EventsContainer.Value[FF];
            }
            dele = null;
            return false;
        }
       
        public void Reset()
        {
            FF= 0;
        }
    }
}
