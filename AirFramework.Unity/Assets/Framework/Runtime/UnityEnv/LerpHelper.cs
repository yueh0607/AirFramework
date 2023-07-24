using UnityEngine;

namespace AirFramework
{
    public static class UnityLerpHelper
    {
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
