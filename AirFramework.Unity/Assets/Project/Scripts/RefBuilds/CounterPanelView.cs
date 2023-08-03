using AirFramework;
using AirFramework.MV.RefBuild.Cache;
using UnityEngine;

public class CounterPanelView : View<CounterPanel>, IViewShow, IViewHide, IViewInitialize
{
    async AirTask IViewHide.OnViewHide()
    {
        Debug.Log("CounterPanel Hide");
        await AirTask.Delay(3);

    }

    async AirTask IViewInitialize.OnViewInitialize()
    {
        Debug.Log("CounterPanel Init");
        await AirTask.Delay(3);
        Debug.Log("CounterPanel Init");
    }

    async AirTask IViewShow.OnViewShow()
    {
        Debug.Log("CounterPanel Show");
        await AirTask.Delay(3);

    }

}
