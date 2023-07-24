using AirFramework.Utility.RefBuild;
using UnityEngine;

namespace AirFramework
{
    public static class Tween_Unity
    {
        public static Tween MoveTo(this Transform transform, Vector3 position, float duration)
        {
            BindableProperty<Vector3> pos = new BindableProperty<Vector3>(() => transform.position, (x) => transform.position = x, false);
            return pos.To<Vector3>(position).SetDuration(duration);
        }


    }
}