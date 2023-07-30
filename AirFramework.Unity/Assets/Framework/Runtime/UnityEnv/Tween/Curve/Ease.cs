

using System;

namespace AirFramework.Internal.EaseCurve
{
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
    public enum EaseCurve
    {
        Linear,         // 线性缓动，匀速运动

        InSine,         // 正弦加速缓动，开始缓慢，后来加速
        OutSine,        // 正弦减速缓动，开始快速，后来减速
        InOutSine,      // 正弦波缓动，先加速后减速

        InQuad,         // 二次方加速缓动，开始缓慢，后来加速
        OutQuad,        // 二次方减速缓动，开始快速，后来减速
        InOutQuad,      // 二次方波缓动，先加速后减速

        InCubic,        // 三次方加速缓动，开始缓慢，后来加速
        OutCubic,       // 三次方减速缓动，开始快速，后来减速
        InOutCubic,     // 三次方波缓动，先加速后减速

        InQuart,        // 四次方加速缓动，开始缓慢，后来加速
        OutQuart,       // 四次方减速缓动，开始快速，后来减速
        InOutQuart,     // 四次方波缓动，先加速后减速

        InQuint,        // 五次方加速缓动，开始缓慢，后来加速
        OutQuint,       // 五次方减速缓动，开始快速，后来减速
        InOutQuint,     // 五次方波缓动，先加速后减速

        InExpo,         // 指数加速缓动，开始缓慢，后来加速
        OutExpo,        // 指数减速缓动，开始快速，后来减速
        InOutExpo,      // 指数波缓动，先加速后减速

        InCirc,         // 圆形加速缓动，开始缓慢，后来加速
        OutCirc,        // 圆形减速缓动，开始快速，后来减速
        InOutCirc,      // 圆形波缓动，先加速后减速

        InOutBack,      // 先正弦减速后正弦加速缓动，开始快速，后来减速，再加速
        InBack,         // 回退加速（类似弹簧），开始缓慢，后来加速并回退一定距离，然后减速回弹
        OutBack,        // 回退减速（类似弹簧），开始快速，后来减速并回退一定距离，然后加速回

        InBounce,       // 弹跳加速缓动，开始缓慢，后来加速并反弹
        OutBounce,      // 弹跳减速缓动，开始快速，后来减速并反弹
        InOutBounce,    // 弹跳波缓动，先加速后减速并反弹

        InElastic,      // 弹性加速缓动，开始缓慢，后来加速并弹性拉伸
        OutElastic,     // 弹性减速缓动，开始快速，后来减速并弹性拉伸
        InOutElastic,   // 弹性波缓动，先加速后减速并弹性拉伸

    }
}
