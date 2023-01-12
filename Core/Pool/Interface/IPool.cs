using AirFramework.Assets.AirFramework;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface IPool
    {
        /// <summary>
        /// 对象池类型
        /// </summary>
        Type ObjectType { get; }

        /// <summary>
        /// 缓冲对象数量
        /// </summary>
        int Count { get; }

        /// <summary>
        /// 清空对象池缓冲
        /// </summary>
        void Clear();

        /// <summary>
        /// 对象池预加载
        /// </summary>
        /// <param name="count"></param>
        void Preload(int count);
        /// <summary>
        /// 对象池缓存增加到
        /// </summary>
        /// <param name="count"></param>
        void PreloadTo(int count);
        /// <summary>
        /// 对象池缓存减少
        /// </summary>
        /// <param name="count"></param>
        void Unload(int count);
        /// <summary>
        /// 对象池缓存减少到
        /// </summary>
        /// <param name="count"></param>
        void UnloadTo(int count);
        /// <summary>
        /// 分配对象
        /// </summary>
        /// <returns></returns>
        object Allocate();

        /// <summary>
        /// 释放对象
        /// </summary>
        /// <param name="item"></param>
        void Release(object item); 

        
    }
}
