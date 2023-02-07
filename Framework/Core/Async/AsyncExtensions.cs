using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public static class Async
    {
        /// <summary>
        /// 延迟指定秒数
        /// </summary>
        /// <param name="seconds"></param>
        /// <returns></returns>
        public static AirTask Delay(float seconds,Action endAction=null)
        {
            var task = Framework.Pool.Allocate<AirTask>();
            var timer = Framework.Pool.Allocate<TimerCall>();
            timer.OnCompleted += task.SetResult;
            timer.OnCompleted += endAction;
            timer.OnCompleted += timer.Dispose;
            timer.Start(TimeSpan.FromSeconds(seconds));
            return task;
        }

        /// <summary>
        /// 立刻完成当前异步任务
        /// </summary>
        /// <returns></returns>
        public static AirTaskCompleted Complete()
        {
            return Framework.Pool.Allocate<AirTaskCompleted>();
        }

    }
}
