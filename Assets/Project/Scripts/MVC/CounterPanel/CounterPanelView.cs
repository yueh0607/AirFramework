/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/4/29 14:50:06
 * Description : Describe the function here.
************************************************************************************/

using AirFramework;
namespace MyNamespace
{
    public class CounterPanelView : View
    {
        public UnityEngine.UI.Button Plus_Button;
        public UnityEngine.UI.Button Minus_Button;
        public UnityEngine.UI.Text Monitor_Text;
        public override void InitComponents()
        {
            Plus_Button = transform.Find("Plus").GetComponent<UnityEngine.UI.Button>();
            Minus_Button = transform.Find("Minus").GetComponent<UnityEngine.UI.Button>();
            Monitor_Text = transform.Find("Monitor").GetComponent<UnityEngine.UI.Text>();
        }
    }
}
