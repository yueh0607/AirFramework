using System;
using System.Collections;
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
        public static AirTask Delay(float seconds,Action endAction=null,CancelToken token=null)
        {
            var task = Framework.Pool.Allocate<AirTask>();
            var timer = Framework.Pool.Allocate<TimerCall>();
            timer.OnCompleted += task.SetResult;
            timer.OnCompleted += endAction;
            timer.OnCompleted += timer.Dispose;

            if(token != null)
            {
                token.CancelAction += timer.Stop;
                token.CancelAction += task.SetResult;
            }

            timer.Start(TimeSpan.FromSeconds(seconds));
            return task;
        }

        
        public static AirTaskCompleted Complete(Action action=null)
        {
            action?.Invoke();
            return Framework.Pool.Allocate<AirTaskCompleted>();
        }
       

     

    }
}
