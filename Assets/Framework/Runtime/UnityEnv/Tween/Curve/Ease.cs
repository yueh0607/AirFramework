

namespace AirFramework
{

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
