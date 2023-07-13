/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/6 12:23:04
 * Description : Describe the function here.
************************************************************************************/

using AirFramework;
namespace MyNamespace
{
    public partial class CounterPanel : Controller<CounterPanelView>
    {
        public override void OnBindEvents()
        {
            TView.Plus_Button.Bind(Plus_Button_OnClick);
            TView.Minus_Button.Bind(Minus_Button_OnClick);
        }
        public override void OnUnBindEvents()
        {
            TView.Plus_Button.UnBind(Plus_Button_OnClick);
            TView.Minus_Button.UnBind(Minus_Button_OnClick);
        }

        private void Plus_Button_OnClick()
        {
            GetModel<CounterPanelModel>().Count.Value++;
        }

        private void Minus_Button_OnClick()
        {
            GetModel<CounterPanelModel>().Count.Value--;
        }
    }
}
