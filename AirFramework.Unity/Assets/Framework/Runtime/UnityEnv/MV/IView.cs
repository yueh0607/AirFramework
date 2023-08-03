using UnityEngine;

namespace AirFramework
{
    public interface IView
    {
        public bool IsLoaded { get; }
        public bool IsLoading { get; }
        public AirTask LoadAsync();

        public bool IsShowing { get; }


    }

    public interface IView<T> : IView where T : MonoBehaviour
    {
        public T Refs { get; set; }
    }
}
