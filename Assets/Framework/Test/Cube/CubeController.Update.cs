/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 17:31:39
 * Description : Describe the function here.
************************************************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using YooAsset;
namespace MyNamespace
{
	public partial class Cube :  Controller<CubeView>
	{
		
		public override void OnBindProperty()
		{
			GetModel<CubeModel>().Pos.Bind(TView.Cube_Transform_Position);
		}
		
		public override void OnUnBindProperty()
		{
            GetModel<CubeModel>().Pos.UnBind(TView.Cube_Transform_Position);
        }
	}
}
