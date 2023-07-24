using UnityEngine;

namespace AirFramework.Utility
{
    public static class LerpHelper
    {
        public static float Lerp(float start, float end, float step)
        {
            return start + step * (end - start);
        }
        public static double Lerp(double start, double end, float step)
        {
            return start + step * (end - start);
        }
        public static int Lerp(int start, int end, float step)
        {
            return start + (int)(step * (end - start));
        }
  

    }
}
