/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/4/30 16:03:00
 * Description : Describe the function here.
************************************************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using UnityEngine;
using YooAsset;
namespace MyNamespace
{
    public partial class CounterPanel : Controller<CounterPanelView>
    {
        Tween tween;
        public override void OnLoad()
        {
            base.OnLoad();
            tween = TView.CounterPanel_TweenPlayer.GetTween<Vector3>(TView.CounterPanel_RectTransform_Position,
                TView.CounterPanel_RectTransform_Position.Value, new Vector3(0, 1080,0));
            TView.CounterPanel_RectTransform_Position .Value= new Vector3(0,1080,0);
        }

        public override void OnUnload()
        {
            base.OnUnload();
            //Write ... here
        }

        public async override AsyncTask OnShow()
        {
            tween.SetDirection(PlayDirection.Backward);
            await tween.PlayAsync();
            await Async.Complete();

        }

        public async override AsyncTask OnHide()
        {
            tween.SetDirection(PlayDirection.Forward);
            await tween.PlayAsync();
            await Async.Complete();
        }
    }
}
