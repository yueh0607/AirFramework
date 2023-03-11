using System.Collections;
using System.Collections.Generic;

namespace AirFramework
{
    /// <summary>
    /// 在VM层内，用户只需要进行数据绑定，非特殊情况下不建议做其他操作
    /// </summary>
    public abstract class Controller
    {
        
       
    }
    public abstract class Controller<T> : Controller where T : View
    {


    }

}
