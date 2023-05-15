/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 17:33:02
 * Description : Describe the function here.
************************************************************************************/


using AirFramework;
using UnityEngine;

namespace MyNamespace
{
    public class CubeModel : IModel
    {
        public BindableProperty<Vector3> Pos = new(Vector3.zero);
    }
}

