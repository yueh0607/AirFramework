using System;
using UnityEngine;

namespace AirFramework
{
    public class OnRenderImageListener : MonoBehaviour
    {
        private MessageOperatorBox<ISendEvent<RenderTexture, RenderTexture>> action_list = new();

        public event Action<RenderTexture, RenderTexture> OnTrigger
        {
            add => action_list.Value.Add(value);
            remove => action_list.Value.Remove(value);
        }


        private void OnRenderImage(RenderTexture source, RenderTexture destination)
        {
            action_list.Publish(source, destination);
        }

    }

    public static partial class Listener_Ex
    {
        public static void Bind(this OnRenderImageListener listener, Action<RenderTexture, RenderTexture> action)
        {
            listener.OnTrigger += action;
        }
    }
}
