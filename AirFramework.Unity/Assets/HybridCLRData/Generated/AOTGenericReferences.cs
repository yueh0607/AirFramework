using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"AirFramework.dll",
		"UnityEngine.CoreModule.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// AirFramework.AirTask<object>
	// AirFramework.ICallEvent<object>
	// AirFramework.IGenericEvent<float>
	// AirFramework.IGenericEvent<object>
	// AirFramework.ISendEvent<float>
	// AirFramework.MV.RefBuild.BindableProperty<float>
	// AirFramework.View<object>
	// System.Action<float>
	// System.Func<float>
	// System.Func<object>
	// }}

	public void RefMethods()
	{
		// System.Void AirFramework.AirTaskBuilder.AwaitUnsafeOnCompleted<object,CounterPanelView.<AirFramework-IViewHide-OnViewHide>d__0>(object&,CounterPanelView.<AirFramework-IViewHide-OnViewHide>d__0&)
		// System.Void AirFramework.AirTaskBuilder.AwaitUnsafeOnCompleted<object,CounterPanelView.<AirFramework-IViewInitialize-OnViewInitialize>d__1>(object&,CounterPanelView.<AirFramework-IViewInitialize-OnViewInitialize>d__1&)
		// System.Void AirFramework.AirTaskBuilder.AwaitUnsafeOnCompleted<object,CounterPanelView.<AirFramework-IViewShow-OnViewShow>d__2>(object&,CounterPanelView.<AirFramework-IViewShow-OnViewShow>d__2&)
		// System.Void AirFramework.AirTaskBuilder.AwaitUnsafeOnCompleted<object,Test.<DoSom>d__2>(object&,Test.<DoSom>d__2&)
		// System.Void AirFramework.AirTaskBuilder.AwaitUnsafeOnCompleted<object,Test.<Dooo>d__1>(object&,Test.<Dooo>d__1&)
		// System.Void AirFramework.AirTaskBuilder.Start<CounterPanelView.<AirFramework-IViewHide-OnViewHide>d__0>(CounterPanelView.<AirFramework-IViewHide-OnViewHide>d__0&)
		// System.Void AirFramework.AirTaskBuilder.Start<CounterPanelView.<AirFramework-IViewInitialize-OnViewInitialize>d__1>(CounterPanelView.<AirFramework-IViewInitialize-OnViewInitialize>d__1&)
		// System.Void AirFramework.AirTaskBuilder.Start<CounterPanelView.<AirFramework-IViewShow-OnViewShow>d__2>(CounterPanelView.<AirFramework-IViewShow-OnViewShow>d__2&)
		// System.Void AirFramework.AirTaskBuilder.Start<Test.<DoSom>d__2>(Test.<DoSom>d__2&)
		// System.Void AirFramework.AirTaskBuilder.Start<Test.<Dooo>d__1>(Test.<Dooo>d__1&)
		// object AirFramework.Framework.GetModule<object>()
		// System.Void AirFramework.MessageExtensions.Subscribe<object>(AirFramework.IOperatorOut<AirFramework.ICallEvent<object>>,System.Func<object>)
		// AirFramework.MessageOperatorBox<object> AirFramework.OperatorEx2.Operator<object>(AirFramework.IMessageReceiver,bool)
		// AirFramework.AirTask<object> AirFramework.ViewModule.Show<object>(object)
		// object UnityEngine.Component.GetComponent<object>()
	}
}