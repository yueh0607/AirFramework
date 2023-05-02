using System;

namespace AirFramework
{
    #region Linear
    public class LinearCurve : Singleton<LinearCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x;
        }
    }

    #endregion

    #region Sine

    public class InSineCurve : Singleton<InSineCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return -(float)Math.Cos((double)(x * 1.5707964f)) + 1f;
        }
    }
    //2
    public class OutSineCurve : Singleton<OutSineCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return (float)Math.Sin((double)(x * 1.5707964f));
        }
    }
    //3
    public class InOutSineCurve : Singleton<InOutSineCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return -0.5f * ((float)Math.Cos((double)(Math.PI * x)) - 1f);
        }
    }

    #endregion

    #region Quad
    //4
    public class InQuadCurve : Singleton<InQuadCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x * x;
        }
    }
    //5
    public class OutQuadCurve : Singleton<OutQuadCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return 1f - (1f - x) * (1f - x);
        }
    }
    //6
    public class InOutQuadCurve : Singleton<InOutQuadCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x < 0.5f ? 2f * x * x : 1f - 2f * (1f - x) * (1f - x);
        }
    }
    #endregion


    #region Cubic
    //7
    public class InCubicCurve : Singleton<InCubicCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x * x * x;
        }
    }
    //8
    public class OutCubicCurve : Singleton<OutCubicCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            var t = x - 1f;
            return t * t * t + 1f;
        }
    }
    //9
    public class InOutCubicCurve : Singleton<InOutCubicCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x < 0.5f ? 4f * x * x * x : 1f + 4f * (x - 1f) * (x - 1f) * (x - 1f);
        }
    }

    #endregion


    #region Quart
    //10
    public class InQuartCurve : Singleton<InQuartCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x * x * x * x;
        }
    }
    //11
    public class OutQuartCurve : Singleton<OutQuartCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            var t = x - 1f;
            return 1f - t * t * t * t;
        }
    }
    //12
    public class InOutQuartCurve : Singleton<InOutQuartCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x < 0.5f ? 8f * x * x * x * x : 1f - 8f * (x - 1f) * (x - 1f) * (x - 1f) * (x - 1f);
        }
    }

    #endregion


    #region Quint
    //13
    public class InQuintCurve : Singleton<InQuintCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x * x * x * x * x;
        }
    }
    //14
    public class OutQuintCurve : Singleton<OutQuintCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            var t = x - 1f;
            return t * t * t * t * t + 1f;
        }
    }
    //15
    public class InOutQuintCurve : Singleton<InOutQuintCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x < 0.5f ? 16f * x * x * x * x * x : 1f + 16f * (x - 1f) * (x - 1f) * (x - 1f) * (x - 1f) * (x - 1f);
        }
    }

    #endregion


    #region Expo
    //16
    public class InExpoCurve : Singleton<InExpoCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x == 0f ? 0f : (float)Math.Pow(2f, 10f * (x - 1f));
        }
    }
    //17
    public class OutExpoCurve : Singleton<OutExpoCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x == 1f ? 1f : -(float)Math.Pow(2f, -10f * x) + 1f;
        }
    }
    //18
    public class InOutExpoCurve : Singleton<InOutExpoCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            if (x == 0f) return 0f;
            if (x == 1f) return 1f;
            return x < 0.5f ? 0.5f * (float)Math.Pow(2f, 10f * (2f * x - 1f)) : 0.5f * (-(float)Math.Pow(2f, -10f * (2f * x - 1f)) + 2f);
        }
    }


    #endregion
  


    #region Circ
    public class InCircCurve : Singleton<InCircCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return 1f - (float)Math.Sqrt(1f - x * x);
        }
    }
    //20
    public class OutCircCurve : Singleton<OutCircCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return (float)Math.Sqrt(1f - (x - 1f) * (x - 1f));
        }
    }
    //21
    public class InOutCircCurve : Singleton<InOutCircCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x < 0.5f ? 0.5f * (1f - (float)Math.Sqrt(1f - 4f * x * x)) : 0.5f * ((float)Math.Sqrt(1f - 4f * (x - 1f) * (x - 1f)) + 1f);
        }
    }

    #endregion


    #region Back

    //22
    public class InBackCurve : Singleton<InBackCurve>, ICurve
    {
        private const float c1 = 1.70158f;
        private const float c2 = c1 * 1.525f;

        public float Evaluate(float x)
        {
            return c2 * x * x * x - c1 * x * x;
        }

    }

    //23
    public class OutBackCurve : Singleton<OutBackCurve>, ICurve
    {
        private const float c1 = 1.70158f;
        private const float c2 = c1 * 1.525f;


        public float Evaluate(float x)
        {
            var t = x - 1f;
            return t * t;

        }
    }


    //27
    public class InOutBackCurve : Singleton<InOutBackCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            const float c1 = 1.70158f;
            const float c2 = c1 * 1.525f;
            return (float)(x < 0.5f ? 2 * x * x * ((c2 + 1) * 2 * x - c2) : (float)(1 + Math.Pow(2 * x - 2, 3) + c2 * Math.Pow(2 * x - 2, 2)) / 2);
        }
    }

    #endregion


    #region Elastic
    //24
    public class InElasticCurve : Singleton<InElasticCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            const float c4 = (2 * (float)Math.PI) / 3;
            return (float)((x == 0) ? 0 : ((x == 1) ? 1 : -Math.Pow(2, 10 * x - 10) * Math.Sin((x * 10 - 10.75) * c4)));
        }
    }
    //25
    public class OutElasticCurve : Singleton<OutElasticCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            const float c4 = (2 * (float)Math.PI) / 3;
            return (float)((x == 0) ? 0 : ((x == 1) ? 1 : Math.Pow(2, -10 * x) * Math.Sin((x * 10 - 0.75) * c4) + 1));
        }
    }
    //26
    public class InOutElasticCurve : Singleton<InOutElasticCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            const float c5 = (2f * (float)Math.PI) / 4.5f;
            return (float)((x == 0) ? 0 : ((x == 1) ? 1 : (x < 0.5f ? -(Math.Pow(2, 20 * x - 10) * Math.Sin((20 * x - 11.125f) * c5)) / 2 : (Math.Pow(2, -20 * x + 10) * Math.Sin((20 * x - 11.125f) * c5)) / 2 + 1)));
        }
    }
    #endregion



    #region Bounce
    //28
    public class InBounceCurve : Singleton<InBounceCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return 1 - OutBounceCurve.Instance.Evaluate(1 - x);
        }
    }
    //29
    public class OutBounceCurve : Singleton<OutBounceCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            const float n1 = 7.5625f;
            const float d1 = 2.75f;

            if (x < 1 / d1)
            {
                return n1 * x * x;
            }
            else if (x < 2 / d1)
            {
                return n1 * (x -= 1.5f / d1) * x + 0.75f;
            }
            else if (x < 2.5 / d1)
            {
                return n1 * (x -= 2.25f / d1) * x + 0.9375f;
            }
            else
            {
                return n1 * (x -= 2.625f / d1) * x + 0.984375f;
            }
        }
    }
    //30

    public class InOutBounceCurve : Singleton<OutBounceCurve>, ICurve
    {
        public float Evaluate(float x)
        {
            return x < 0.5f? (1 - Evaluate(1 - 2 * x)) / 2: (1 + Evaluate(2 * x - 1)) / 2;
        }
    }
    #endregion
}
