using AirFramework.MV.RefBuild;
using UnityEngine;

namespace AirFramework
{
    public static class Tween_Unity
    {
        public static Tween MoveTo(this UnityEngine.Transform transform, Vector3 position, float duration)
        {
            BindableProperty<Vector3> pos = new BindableProperty<Vector3>(() => transform.position, (x) => transform.position = x, false);
            return pos.To<Vector3>(position).SetDuration(duration);
        }

        public static Tween Fade(this AudioSource source,float end,float duration)
        {
            BindableProperty<float> volume = new BindableProperty<float>(() => source.volume, (x) => source.volume = x, false);
            return volume.To<float>(end).SetDuration(duration);
        }

    }
}