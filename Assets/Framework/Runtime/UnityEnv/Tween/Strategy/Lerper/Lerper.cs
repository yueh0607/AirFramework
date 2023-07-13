/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/1 16:02:41
 * Description : Describe the function here.
************************************************************************************/


using UnityEngine;

namespace AirFramework
{



    public static class Lerper
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
        public static Vector2 Lerp(Vector2 start, Vector2 end, float step)
        {
            return Vector2.LerpUnclamped(start, end, step);
        }
        public static Vector3 Lerp(Vector3 start, Vector3 end, float step)
        {
            return Vector3.LerpUnclamped(start, end, step);
        }
        public static Color Lerp(Color start, Color end, float step)
        {
            return Color.LerpUnclamped(start, end, step);
        }

    }
}


