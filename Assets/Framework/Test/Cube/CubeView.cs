/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 18:07:17
 * Description : Describe the function here.
************************************************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using YooAsset;
namespace MyNamespace
{
	public class CubeView : View
	{
		public UnityEngine.Transform Cube_Transform;
		public BindablePort<UnityEngine.Vector3> Cube_Transform_Position;
		public BindablePort<UnityEngine.Vector3> Cube_Transform_LocalScale;
		public AirFramework.TweenPlayer Cube_TweenPlayer;
		public override void InitComponents()
		{
			Cube_Transform = transform.GetComponent<UnityEngine.Transform>();
			Cube_Transform_Position = new((value)=>Cube_Transform.position=value,()=>Cube_Transform.position);
			Cube_Transform_LocalScale = new((value)=>Cube_Transform.localScale=value,()=>Cube_Transform.localScale);
			Cube_TweenPlayer = transform.GetComponent<AirFramework.TweenPlayer>();
		}
	}
}
