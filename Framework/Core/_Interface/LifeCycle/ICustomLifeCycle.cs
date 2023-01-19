using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{

    public interface ICustomLifeCycle
    {

        /// <summary>
        /// 排序层级
        /// </summary>
        public int SortingLayer { get; }

        /// <summary>
        /// 获取生命周期函数
        /// </summary>
        /// <param name="life"></param>
        /// <returns></returns>
        public Action GetLifeFunc(Unit life);

        /// <summary>
        /// 实现生命周期行为
        /// </summary>
        /// <param name="lifeFunc"></param>
        public void LifeFunc(Action lifeFunc);

    }
    

}
