using System;
using System.Runtime.CompilerServices;
using UnityEngine;


namespace AirFramework
{
    public interface ICurve
    {
        public float Evaluate(float x);
 
    }

    public abstract class Curve : ICurve
    {
        public abstract float Evaluate(float x);
    }

    [Serializable]
    public class AnimCurve : Curve
    {
        [SerializeField]
        AnimationCurve curve;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public override float Evaluate(float x)
        {
            return curve.Evaluate(x);
        }

        public AnimCurve(AnimationCurve curve)
        {
            this.curve = curve;
        }
    }

    public class FuncCurve : Curve
    {
        Func<float,float> curve = null;
        public override float Evaluate(float x)
        {
            return curve(x);
        }


        public FuncCurve(Func<float,float> curveFunc)
        {
            if(curveFunc==null) throw new InvalidOperationException("Null Curve!");
            curve = curveFunc;
        }
    }


    public class LinerCurve :Singleton<LinerCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x;
        }
    }
}