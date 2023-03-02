using System.Timers;
namespace AirFramework
{
    public class AnalysisRecycle : PoolableObject<AnalysisRecycle>
    {
        public const int interval = 30_000;
        private IObjectPool Pool { get; set; }

        System.Timers.Timer timer = new System.Timers.Timer(interval);
        public int CountPull { get; set; } = 0;
        public int CountPush { get; set; } = 0;
        public AnalysisRecycle()
        {
            timer.Elapsed += ResetState;
        }
        public void Start()
        {
            timer.Start();
        }
        public void Stop() { timer.Stop(); }
        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Stop();

        }


        void ResetState(object sender, ElapsedEventArgs e)
        {
            float seconds = interval / 1000f;
            //拿取速率
            float rate = CountPull / seconds;
         
            //放回速率
            float rate2 = CountPush / seconds;
          
            //变化率，正则需要回收，负则无操作
            float delta = (rate2 - rate) / seconds;
            if (delta < -1e-5) return;

            //占比 7 2 5 0.5
            float power = delta / (rate + rate2);

            //变化较小
            if (power < 0.5f) return;
            int unloadCount = (CountPush - CountPull)>>1;

            Pool.Unload(unloadCount);
        }
    }
}
