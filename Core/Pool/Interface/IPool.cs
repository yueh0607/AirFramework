﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
    }
}