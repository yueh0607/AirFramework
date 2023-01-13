using AirFramework;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
   
    public interface IObjectPool:IPool
    {
        

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
