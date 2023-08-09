using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

    // {{ AOT assemblies
    public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
    {
        "AirFramework.dll",
        "MemoryPack.dll",
        "UnityEngine.CoreModule.dll",
        "mscorlib.dll",
    };
    // }}

    // {{ constraint implement type
    // }} 

    // {{ AOT generic types
    // AirFramework.AirTask<object>
    // AirFramework.ICallEvent<object>
    // AirFramework.IGenericEvent<object>
    // AirFramework.MV.RefBuild.BindableProperty<float>
    // AirFramework.View<object>
    // MemoryPack.Formatters.ArrayFormatter<object>
    // MemoryPack.Formatters.ListFormatter<int>
    // MemoryPack.IMemoryPackable<object>
    // MemoryPack.MemoryPackFormatter<object>
    // System.Action<float>
    // System.Collections.Generic.List<int>
    // System.Func<float>
    // System.ReadOnlySpan<byte>
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
        // AirFramework.MessageOperatorBox<object> AirFramework.OperatorEx2.Operator<object>(AirFramework.IMessageReceiver,bool)
        // AirFramework.AirTask<object> AirFramework.ViewModule.Show<object>(object)
        // bool MemoryPack.MemoryPackFormatterProvider.IsRegistered<object>()
        // System.Void MemoryPack.MemoryPackFormatterProvider.Register<object>(MemoryPack.MemoryPackFormatter<object>)
        // System.Void MemoryPack.MemoryPackReader.ReadPackable<object>(object&)
        // object MemoryPack.MemoryPackReader.ReadPackable<object>()
        // System.Void MemoryPack.MemoryPackReader.ReadUnmanaged<UnityEngine.Vector3>(UnityEngine.Vector3&)
        // System.Void MemoryPack.MemoryPackReader.ReadUnmanaged<int,int>(int&,int&)
        // System.Void MemoryPack.MemoryPackReader.ReadUnmanaged<int>(int&)
        // System.Void MemoryPack.MemoryPackReader.ReadValue<object>(object&)
        // object MemoryPack.MemoryPackReader.ReadValue<object>()
        // object MemoryPack.MemoryPackSerializer.Deserialize<object>(System.ReadOnlySpan<byte>,MemoryPack.MemoryPackSerializerOptions)
        // byte[] MemoryPack.MemoryPackSerializer.Serialize<object>(object&,MemoryPack.MemoryPackSerializerOptions)
        // System.Void MemoryPack.MemoryPackWriter.WritePackable<object>(object&)
        // System.Void MemoryPack.MemoryPackWriter.WriteUnmanaged<UnityEngine.Vector3>(UnityEngine.Vector3&)
        // System.Void MemoryPack.MemoryPackWriter.WriteUnmanagedWithObjectHeader<int,int>(byte,int&,int&)
        // System.Void MemoryPack.MemoryPackWriter.WriteUnmanagedWithObjectHeader<int>(byte,int&)
        // System.Void MemoryPack.MemoryPackWriter.WriteValue<object>(object&)
        // object UnityEngine.Component.GetComponent<object>()
    }
}