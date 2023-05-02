
using System;
using UnityEngine;

namespace AirFramework
{
    public class EaseCurve
    {
        private static float Evaluate(Ease easeType, float percent)
        {

            switch (easeType)
            {
                case Ease.Linear:
                    return percent;
                case Ease.InSine:
                    return -(float)Math.Cos((double)(percent * 1.5707964f)) + 1f;
                case Ease.OutSine:
                    return (float)Math.Sin((double)(percent * 1.5707964f));
                case Ease.InOutSine:
                    return -0.5f * ((float)Math.Cos((double)(3.1415927f * percent)) - 1f);
                case Ease.InQuad:
                    return percent * percent;
                //case Ease.OutQuad:
                //    return -(percent) * (time - 2f);
                //case Ease.InOutQuad:
                //    if ((time /= duration * 0.5f) < 1f)
                //    {
                //        return 0.5f * time * time;
                //    }
                //    return -0.5f * ((time -= 1f) * (time - 2f) - 1f);
                //case Ease.InCubic:
                //    return (time /= duration) * time * time;
                //case Ease.OutCubic:
                //    return (time = percent - 1f) * time * time + 1f;
                //case Ease.InOutCubic:
                //    if ((time /= duration * 0.5f) < 1f)
                //    {
                //        return 0.5f * time * time * time;
                //    }
                //    return 0.5f * ((time -= 2f) * time * time + 2f);
                //case Ease.InQuart:
                //    return (time /= duration) * time * time * time;
                //case Ease.OutQuart:
                //    return -((time = percent - 1f) * time * time * time - 1f);
                //case Ease.InOutQuart:
                //    if ((time /= duration * 0.5f) < 1f)
                //    {
                //        return 0.5f * time * time * time * time;
                //    }
                //    return -0.5f * ((time -= 2f) * time * time * time - 2f);
                //case Ease.InQuint:
                //    return (time /= duration) * time * time * time * time;
                //case Ease.OutQuint:
                //    return (time = percent - 1f) * time * time * time * time + 1f;
                //case Ease.InOutQuint:
                //    if ((time /= duration * 0.5f) < 1f)
                //    {
                //        return 0.5f * time * time * time * time * time;
                //    }
                //    return 0.5f * ((time -= 2f) * time * time * time * time + 2f);
                //case Ease.InExpo:
                //    if (time != 0f) return (float)Math.Pow(2.0, (double)(10f * (percent - 1f)));
                //    else return 0f;
                //case Ease.OutExpo:
                //    if (time == duration)return 1f;
                //    else return -(float)Math.Pow(2.0, (double)(-10f * percent)) + 1f;
                //case Ease.InOutExpo:
                //    if (time == 0f) return 0f;
                //    if (time == duration)return 1f;
                //    if ((time /= duration * 0.5f) < 1f)
                //    {
                //        return 0.5f * (float)Math.Pow(2.0, (double)(10f * (time - 1f)));
                //    }
                //    return 0.5f * (-(float)Math.Pow(2.0, (double)(-10f * (time -= 1f))) + 2f);
                //case Ease.InCirc:
                //    return -((float)Math.Sqrt((double)(1f - (time /= duration) * time)) - 1f);
                //case Ease.OutCirc:
                //    return (float)Math.Sqrt((double)(1f - (time = percent - 1f) * time));
                //case Ease.InOutCirc:
                //    if ((time /= duration * 0.5f) < 1f)return -0.5f * ((float)Math.Sqrt((double)(1f - time * time)) - 1f);
                //    else return 0.5f * ((float)Math.Sqrt((double)(1f - (time -= 2f) * time)) + 1f);
  
                //default:
                //    return -(time /= duration) * (time - 2f);
            }
            return 1;
        }


    }
}
