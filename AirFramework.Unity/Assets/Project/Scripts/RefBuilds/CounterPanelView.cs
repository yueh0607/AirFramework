using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial class CounterPanel : IView, IViewShow,IViewHide,IViewInitialize
{
    async AirTask IViewHide.OnViewHide()
    {
        await AirTask.CompletedTask;
    }

    async AirTask IViewInitialize.OnViewInitialize()
    {
        await AirTask.CompletedTask;
    }

    async AirTask IViewShow.OnViewShow()
    {
        await AirTask.CompletedTask;
    }
}
