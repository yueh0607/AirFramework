using UnityEngine;

namespace AirFramework
{
    public static class MVC_Ex
    {
        public static void SetInteractable(this View view,bool interactable )
        {
            var canvasGroup = view.GetComponent<CanvasGroup>();
            canvasGroup.interactable= interactable;
        }
        
    }
}
