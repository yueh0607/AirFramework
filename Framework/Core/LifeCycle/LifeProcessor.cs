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

        /// <summary>
        /// 解析实体上存在的生命周期策略
        /// </summary>
        /// <typeparam name="ILifeType"></typeparam>
        /// <param name="entity"></param>
        /// <param name="func"></param>
        public void RegisterStrategy<ILifeType>(Entity entity,Func<Entity,Action> func) where ILifeType : ILife
        {
            Framework.Message.Register<IAwake>(entity, func(entity));
        }

    }
}
