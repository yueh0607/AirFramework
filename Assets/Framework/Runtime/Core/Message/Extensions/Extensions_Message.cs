﻿namespace AirFramework
{
    public static partial class MessageExtensions
    {

        /// <summary>
        /// 清空操作器
        /// </summary>
        /// <param name="container"></param>


        public static void Clear(this UnitMessageOperator<IMessage> container)
        {
            container?.Clear();
        }


    

    }
}
