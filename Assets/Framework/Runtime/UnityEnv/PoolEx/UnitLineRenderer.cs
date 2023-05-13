using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class UnitLineRenderer : UnitGameObject<UnitLineRenderer>
    {

        public LineRenderer linerenderer;

        public override void OnLoad()
        {
            linerenderer= GetComponent<LineRenderer>();
        }

        public override void OnUnload()
        {
            linerenderer= null;
        }
    }
}
