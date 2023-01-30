using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class LifeProcessor
    {
        //private Dictionary<Type, Action> stategys = new(); 
        public void Process(Entity entity) 
        { 
            
        }
        public static void Act(int a) { }
        /// <summary>
        /// 解析实体上存在的生命周期策略
        /// </summary>
        /// <typeparam name="ILifeType"></typeparam>
        /// <param name="entity"></param>
        /// <param name="func"></param>
        public void RegisterStrategy<ILifeType>(Entity entity) where ILifeType : ILife
        {

            //Framework.Message.Subscribe(entity,typeof(IAwake), Act);


            //entity.Subscribe(typeof(IAwake), Act);
            //entity.Subscribe<IAwake>(Act);

            //Framework.Message.Publish(entity, typeof(IAwake), 30);
            //entity.Publish(typeof(IAwake), 30);
            //entity.Publish<IAwake>();


           
        }

    }
}
