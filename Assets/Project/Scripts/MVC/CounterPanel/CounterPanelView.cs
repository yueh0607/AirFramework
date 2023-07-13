/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/6 12:23:04
 * Description : Describe the function here.
************************************************************************************/

using AirFramework;
namespace MyNamespace
{
    public class CounterPanelView : View
    {
        public AirFramework.TweenPlayer CounterPanel_TweenPlayer;
        public UnityEngine.CanvasGroup CounterPanel_CanvasGroup;
        public BindablePort<System.Single> CounterPanel_CanvasGroup_Alpha;
        public BindablePort<System.Boolean> CounterPanel_CanvasGroup_Interactable;
        public UnityEngine.UI.Button Plus_Button;
        public UnityEngine.UI.Button Minus_Button;
        public UnityEngine.UI.Text Monitor_Text;
        public BindablePort<System.String> Monitor_Text_Text;
        public override void InitComponents()
        {
            CounterPanel_TweenPlayer = transform.GetComponent<AirFramework.TweenPlayer>();
            CounterPanel_CanvasGroup = transform.GetComponent<UnityEngine.CanvasGroup>();
            CounterPanel_CanvasGroup_Alpha = new((value) => CounterPanel_CanvasGroup.alpha = value, () => CounterPanel_CanvasGroup.alpha);
            CounterPanel_CanvasGroup_Interactable = new((value) => CounterPanel_CanvasGroup.interactable = value, () => CounterPanel_CanvasGroup.interactable);
            Plus_Button = transform.Find("Plus").GetComponent<UnityEngine.UI.Button>();
            Minus_Button = transform.Find("Minus").GetComponent<UnityEngine.UI.Button>();
            Monitor_Text = transform.Find("Monitor").GetComponent<UnityEngine.UI.Text>();
            Monitor_Text_Text = new((value) => Monitor_Text.text = value, () => Monitor_Text.text);
        }
    }
}
