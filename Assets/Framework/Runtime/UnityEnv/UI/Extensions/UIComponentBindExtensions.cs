using UnityEngine.Events;
using UnityEngine.UI;
namespace AirFramework
{
    public static class UIComponentBindExtensions
    {
        public static void Bind(this Button target, UnityAction action)
        {
            target.onClick.AddListener(action);
        }
        public static void Bind(this InputField target, UnityAction<string> action)
        {
            target.onValueChanged.AddListener(action);
        }
        public static void Bind(this Slider target, UnityAction<float> action)
        {
            target.onValueChanged.AddListener(action);
        }
    }
    public static class UIComponentUnBindExtensions
    {
        public static void UnBind(this Button target, UnityAction action)
        {
            target.onClick.RemoveListener(action);
        }
        public static void UnBind(this InputField target, UnityAction<string> action)
        {
            target.onValueChanged.RemoveListener(action);
        }
        public static void UnBind(this Slider target, UnityAction<float> action)
        {
            target.onValueChanged.RemoveListener(action);
        }
    }
}
