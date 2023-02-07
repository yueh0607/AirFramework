using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public unsafe class Binder
    {

        /*
         * 数据绑定
         * 字符串nameof作为Key进行绑定
         * 在setter内调用publish(nameof property)自动更新
         */
        public void PublishValue()
        {

        }
        public void Bind<T>(T a,T b)
        {

        }

        public void Bind<T,K>(T a,K b,Func<T,K> converter1,Func<K,T> converter2) 
        {
            

        }

    }
}
