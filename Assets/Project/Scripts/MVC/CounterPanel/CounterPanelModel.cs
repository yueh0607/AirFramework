/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/6 12:26:38
 * Description : Describe the function here.
************************************************************************************/


using AirFramework;

namespace MyNamespace
{
    public class CounterPanelModel : IModel
    {
        public BindableProperty<int> Count { get; set; } = new();
    }
}

