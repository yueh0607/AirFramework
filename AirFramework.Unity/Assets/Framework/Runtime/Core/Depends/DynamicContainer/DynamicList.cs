using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

namespace AirFramework
{
    public class DynamicList<T>
    {

        List<T> list ;

        public DynamicList()
        {
            list = new List<T>();
        }

        /// <summary>
        /// 遍历位置
        /// </summary>
        public int IntervalIndex { get; private set; } = 0;
        private int MaxIndex = -1;

        /// <summary>
        /// 添加委托
        /// </summary>
        /// <param name="dele"></param>
        public void Add(T value)
        {
            list.Add(value);
        }

        /// <summary>
        /// 移除委托
        /// </summary>
        /// <param name="dele"></param>
        /// <returns></returns>
        public bool Remove(T value)
        {
            int index = list.IndexOf(value);
            if (index <= IntervalIndex) --IntervalIndex;
            return list.Remove(value);
        }

        /// <summary>
        /// 获取下一个委托，需要与reset搭配
        /// </summary>
        /// <param name="dele"></param>
        /// <returns></returns>
        public bool GetNext(out T value)
        {
            if (MaxIndex == -1) MaxIndex = list.Count;
            if (IntervalIndex >= 0 && IntervalIndex < Math.Min(list.Count, MaxIndex))
            {
                value = list[IntervalIndex++];
                return true;
            }
            else value = default;
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

        public void Clear()=>list.Clear();
    }
}
