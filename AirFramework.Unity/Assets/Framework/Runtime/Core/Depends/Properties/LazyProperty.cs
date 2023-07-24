/***********************************************************************************
 * Author      : #unknown#
 * Version     : 2021.3.24f1c1
 * Date        : 2023/7/14 21:58:37
 * Description : Describe the function here.
************************************************************************************/


using System;

namespace AirFramework
{


    public class LazyProperty<T>
    {
        private T value;
        private bool firstGet = true;
        private readonly bool activatorCreate = true;

        /// <summary>
        /// 访问值，未完成初始化将自动完成
        /// </summary>
        public T Value
        {
            get
            {

                if (firstGet)
                {
                    if (activatorCreate) value = Activator.CreateInstance<T>();
                    else value = valueGetter();
                    firstGet = false;
                }
                return value;

            }
        }

        /// <summary>
        /// 是否已经完成初始化
        /// </summary>
        public bool Initialized => !firstGet;

        private readonly Func<T> valueGetter = null;


        /// <summary>
        /// 使用传染的委托进行构造
        /// </summary>
        /// <param name="getter"></param>
        public LazyProperty(Func<T> getter)
        {
            activatorCreate = false;
            valueGetter = getter;
        }

        /// <summary>
        /// 使用Activator进行默认构造函数的自动创建
        /// </summary>
        public LazyProperty()
        {
            activatorCreate = true;
        }
    }
}

