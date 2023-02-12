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
            timer.OnceRecycle = true;

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

        /// <summary>
        /// 等待任意一个完成即可，其余都会正常进行，有少量委托创建的GC
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AirTask WaitAny(params AirTask[] tasks)
        {
            //创建计数器
            var counterCall = Framework.Pool.Allocate<CounterCall>();
            counterCall.ClickValue = 1;
            counterCall.OnceRecycle= true;
            //申请异步任务
            var asyncTask = Framework.Pool.Allocate<AirTask>();
            

            //计数器任务绑定
            counterCall.OnClick += asyncTask.SetResult;
            //绑定异步任务到计数器
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnAsyncCompleted += counterCall.PlusOne;
            }
            return asyncTask;
        }
        /// <summary>
        /// 等待全部完成，有少量委托创建的GC
        /// </summary>
        /// <param name="tasks"></param>
        /// <returns></returns>
        public static AirTask WaitAll(params AirTask[] tasks)
        {
            //申请计数器
            var counterCall = Framework.Pool.Allocate<CounterCall>();
            counterCall.ClickValue = tasks.Length;
            counterCall.OnceRecycle = true;
            //申请任务
            var asyncTask = Framework.Pool.Allocate<AirTask>();
            
            //绑定结束事件
            counterCall.OnClick += asyncTask.SetResult;
            //绑定计数器
            foreach (var task in tasks)
            {
                task.Coroutine();
                task.OnAsyncCompleted += counterCall.PlusOne;
            }

            return asyncTask;
        }


        //public static AirTask Yield(IUpdate update,int frameCount)
        //{

        //}
    }
}
