/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/4/29 14:50:06
 * Description : Describe the function here.
************************************************************************************/

using AirFramework;
namespace MyNamespace
{
    public partial class CounterPanel : Controller<CounterPanelView>
    {

        public override void OnBindProperty()
        {
            GetModel<CounterPanelModel>().Count.OnValueChanged += (oldValue, newValue) =>
            {
                TView.Monitor_Text.text = newValue.ToString();
            };
        }

        public override void OnUnBindProperty()
        {
            GetModel<CounterPanelModel>().Count.OnValueChanged -= (oldValue, newValue) =>
            {
                TView.Monitor_Text.text = newValue.ToString();
            };
        }
    }
}
