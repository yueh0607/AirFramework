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
        Func<float, float> curve = null;
        public override float Evaluate(float x)
        {
            return curve(x);
        }


        public FuncCurve(Func<float, float> curveFunc)
        {
            if (curveFunc == null) throw new InvalidOperationException("Null Curve!");
            curve = curveFunc;
        }
    }

    public class BuiltInCurve
    {


        public static ICurve GetCurve(EaseCurve curveType)
        {
            switch (curveType)
            {
                case EaseCurve.Linear:
                    return LinearCurve.Instance;

                case EaseCurve.InSine:
                    return InSineCurve.Instance;
                case EaseCurve.OutSine:
                    return OutSineCurve.Instance;
                case EaseCurve.InOutSine:
                    return InOutSineCurve.Instance;


                case EaseCurve.InQuad:
                    return InQuadCurve.Instance;
                case EaseCurve.OutQuad:
                    return OutQuadCurve.Instance;
                case EaseCurve.InOutQuad:
                    return InOutQuadCurve.Instance;


                case EaseCurve.InCubic:
                    return InCubicCurve.Instance;
                case EaseCurve.OutCubic:
                    return OutCubicCurve.Instance;
                case EaseCurve.InOutCubic:
                    return InOutCubicCurve.Instance;


                case EaseCurve.InQuart:
                    return InQuartCurve.Instance;
                case EaseCurve.OutQuart:
                    return OutQuartCurve.Instance;
                case EaseCurve.InOutQuart:
                    return InOutQuartCurve.Instance;


                case EaseCurve.InQuint:
                    return InQuintCurve.Instance;
                case EaseCurve.OutQuint:
                    return OutQuintCurve.Instance;
                case EaseCurve.InOutQuint:
                    return InOutQuintCurve.Instance;


                case EaseCurve.InExpo:
                    return InExpoCurve.Instance;
                case EaseCurve.OutExpo:
                    return OutExpoCurve.Instance;
                case EaseCurve.InOutExpo:
                    return InOutExpoCurve.Instance;


                case EaseCurve.InCirc:
                    return InCircCurve.Instance;
                case EaseCurve.OutCirc:
                    return OutCircCurve.Instance;
                case EaseCurve.InOutCirc:
                    return InOutCircCurve.Instance;


                case EaseCurve.InBack:
                    return InBackCurve.Instance;
                case EaseCurve.OutBack:
                    return OutBackCurve.Instance;
                case EaseCurve.InOutBack:
                    return InOutBackCurve.Instance;


                case EaseCurve.InBounce:
                    return InBounceCurve.Instance;
                case EaseCurve.OutBounce:
                    return OutBounceCurve.Instance;
                case EaseCurve.InOutBounce:
                    return InOutBounceCurve.Instance;


                case EaseCurve.InElastic:
                    return InElasticCurve.Instance;
                case EaseCurve.OutElastic:
                    return OutElasticCurve.Instance;
                case EaseCurve.InOutElastic:
                    return InOutElasticCurve.Instance;


                default:
                    throw new ArgumentException("Invalid EaseCurve value", "curveType");
            }
        }

    }
}