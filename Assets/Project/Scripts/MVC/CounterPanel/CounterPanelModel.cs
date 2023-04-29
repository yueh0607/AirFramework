using AirFramework;

public class CounterPanelModel : IModel
{
    public BindableProperty<int> Count = new(10);
}
