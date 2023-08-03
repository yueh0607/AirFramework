#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<YooAsset.DebugPackageData>
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6;
// System.Collections.Generic.List`1<YooAsset.DebugProviderInfo>
struct List_1_t4DFB46B24368137D834DCCB7BF2ADC98F76EEB3A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<YooAsset.ResourcePackage>
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// YooAsset.DebugPackageData[]
struct DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// YooAsset.ResourcePackage[]
struct ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// YooAsset.AssetSystemImpl
struct AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38;
// YooAsset.BufferReader
struct BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A;
// YooAsset.BufferWriter
struct BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886;
// YooAsset.CRC32Algorithm
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// YooAsset.DebugPackageData
struct DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9;
// YooAsset.DebugReport
struct DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// YooAsset.IBundleServices
struct IBundleServices_t83ED8DA733B42205E9C88F694E45ADB313530B86;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// YooAsset.ILogger
struct ILogger_tDF24C2D094417567E0429274CBA0896EF501517C;
// YooAsset.IPlayModeServices
struct IPlayModeServices_tAA52527E1B8B45CA174AECC67517825F92790C7A;
// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// YooAsset.SafeProxy
struct SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// YooAsset.YooAssetSettings
struct YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4;
// YooAsset.YooAssetsDriver
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral143B43DDF539C9097D64A86DD87001FCB9261DB7;
IL2CPP_EXTERN_C String_t* _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8;
IL2CPP_EXTERN_C String_t* _stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4A30F8FD4AAB43F0E04CD95BC6E74640E23D6395;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6A58863259934947B04C885DB1013F7BD17F85C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteralA929F9B4FD405482CE681D9E9297AF08F5469025;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC9440BDB8F65D5F4B9B344FC7163CA6FC6516A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB4991BC03A4611590A823E483ACA6B929AD3B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF181B634D87DB3D113C090E0969C621E3E148B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFACFABE7F5FF35F0556F38330D454B4E4A451170;
IL2CPP_EXTERN_C const RuntimeMethod* BufferWriter_WriteUTF8_m88353C3A51555128165FA9826DC112155E13B334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_m57FE5C4829C2170C2BF8284B1EB2F92D2F7FF1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<YooAsset.DebugPackageData>
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<YooAsset.ResourcePackage>
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

// YooAsset.BufferReader
struct BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A  : public RuntimeObject
{
	// System.Byte[] YooAsset.BufferReader::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_0;
	// System.Int32 YooAsset.BufferReader::_index
	int32_t ____index_1;
};

// YooAsset.BufferWriter
struct BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886  : public RuntimeObject
{
	// System.Byte[] YooAsset.BufferWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_0;
	// System.Int32 YooAsset.BufferWriter::_index
	int32_t ____index_1;
};

// YooAsset.DebugPackageData
struct DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9  : public RuntimeObject
{
	// System.String YooAsset.DebugPackageData::PackageName
	String_t* ___PackageName_0;
	// System.Collections.Generic.List`1<YooAsset.DebugProviderInfo> YooAsset.DebugPackageData::ProviderInfos
	List_1_t4DFB46B24368137D834DCCB7BF2ADC98F76EEB3A* ___ProviderInfos_1;
};

// YooAsset.DebugReport
struct DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D  : public RuntimeObject
{
	// System.Int32 YooAsset.DebugReport::FrameCount
	int32_t ___FrameCount_0;
	// System.Collections.Generic.List`1<YooAsset.DebugPackageData> YooAsset.DebugReport::PackageDatas
	List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* ___PackageDatas_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// YooAsset.FileUtility
struct FileUtility_t5449A663405CBC365480B6DCAC03B177EA2C383B  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// YooAsset.HashUtility
struct HashUtility_tC80280D7F13E8274BB51D195E5E00FC87C5AC83D  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// YooAsset.PathUtility
struct PathUtility_t820434FFD3142C7DEBC33F8C6DA67F3C5068BBD7  : public RuntimeObject
{
};

// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022  : public RuntimeObject
{
	// System.Boolean YooAsset.ResourcePackage::_isInitialize
	bool ____isInitialize_0;
	// System.String YooAsset.ResourcePackage::_initializeError
	String_t* ____initializeError_1;
	// YooAsset.EOperationStatus YooAsset.ResourcePackage::_initializeStatus
	int32_t ____initializeStatus_2;
	// YooAsset.EPlayMode YooAsset.ResourcePackage::_playMode
	int32_t ____playMode_3;
	// YooAsset.IBundleServices YooAsset.ResourcePackage::_bundleServices
	RuntimeObject* ____bundleServices_4;
	// YooAsset.IPlayModeServices YooAsset.ResourcePackage::_playModeServices
	RuntimeObject* ____playModeServices_5;
	// YooAsset.AssetSystemImpl YooAsset.ResourcePackage::_assetSystemImpl
	AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38* ____assetSystemImpl_6;
	// System.String YooAsset.ResourcePackage::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_7;
};

// YooAsset.SafeProxy
struct SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E  : public RuntimeObject
{
	// System.UInt32[] YooAsset.SafeProxy::_table
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____table_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// YooAsset.StringUtility
struct StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// YooAsset.YooAssetSettingsData
struct YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1  : public RuntimeObject
{
};

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56  : public RuntimeObject
{
};

// YooAsset.YooLogger
struct YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>
struct Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// YooAsset.CRC32Algorithm
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.UInt32 YooAsset.CRC32Algorithm::_currentCrc
	uint32_t ____currentCrc_4;
};

// YooAsset.DecryptFileInfo
struct DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321 
{
	// System.String YooAsset.DecryptFileInfo::BundleName
	String_t* ___BundleName_0;
	// System.String YooAsset.DecryptFileInfo::FilePath
	String_t* ___FilePath_1;
};
// Native definition for P/Invoke marshalling of YooAsset.DecryptFileInfo
struct DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke
{
	char* ___BundleName_0;
	char* ___FilePath_1;
};
// Native definition for COM marshalling of YooAsset.DecryptFileInfo
struct DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com
{
	Il2CppChar* ___BundleName_0;
	Il2CppChar* ___FilePath_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Interop/Kernel32/FILE_TIME
struct FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 
{
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwLowDateTime
	uint32_t ___dwLowDateTime_0;
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwHighDateTime
	uint32_t ___dwHighDateTime_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B  : public MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA
struct WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B 
{
	// System.Int32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftCreationTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftCreationTime_1;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastAccessTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastAccessTime_2;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastWriteTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastWriteTime_3;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeHigh
	uint32_t ___nFileSizeHigh_4;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeLow
	uint32_t ___nFileSizeLow_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA System.IO.FileSystemInfo::_data
	WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialized
	int32_t ____dataInitialized_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_5;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// YooAsset.YooAssetSettings
struct YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String YooAsset.YooAssetSettings::ManifestFileName
	String_t* ___ManifestFileName_4;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// YooAsset.YooAssetsDriver
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// System.Collections.Generic.List`1<YooAsset.DebugPackageData>
struct List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DebugPackageDataU5BU5D_t1D87AEDCDA89F9FA2851AB5431A97DD8164F7F7D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<YooAsset.DebugPackageData>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<YooAsset.ResourcePackage>
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ResourcePackageU5BU5D_t88F68884F4F9B7D283AC85B0ADF90F35053C21D1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<YooAsset.ResourcePackage>

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.BitConverter

// YooAsset.BufferReader

// YooAsset.BufferReader

// YooAsset.BufferWriter

// YooAsset.BufferWriter

// YooAsset.DebugPackageData

// YooAsset.DebugPackageData

// YooAsset.DebugReport

// YooAsset.DebugReport

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// YooAsset.FileUtility

// YooAsset.FileUtility

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// YooAsset.HashUtility

// YooAsset.HashUtility

// YooAsset.PathUtility

// YooAsset.PathUtility

// YooAsset.ResourcePackage

// YooAsset.ResourcePackage

// YooAsset.SafeProxy

// YooAsset.SafeProxy

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// YooAsset.StringUtility

// YooAsset.StringUtility
struct StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields
{
	// System.Text.StringBuilder YooAsset.StringUtility::_cacheBuilder
	StringBuilder_t* ____cacheBuilder_0;
};

// YooAsset.YooAssetSettingsData
struct YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields
{
	// YooAsset.YooAssetSettings YooAsset.YooAssetSettingsData::_setting
	YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* ____setting_0;
};

// YooAsset.YooAssetSettingsData

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields
{
	// System.Boolean YooAsset.YooAssets::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject YooAsset.YooAssets::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.List`1<YooAsset.ResourcePackage> YooAsset.YooAssets::_packages
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____packages_2;
	// YooAsset.ResourcePackage YooAsset.YooAssets::_defaultPackage
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____defaultPackage_3;
};

// YooAsset.YooAssets

// YooAsset.YooLogger
struct YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields
{
	// YooAsset.ILogger YooAsset.YooLogger::Logger
	RuntimeObject* ___Logger_0;
};

// YooAsset.YooLogger

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>

// System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// YooAsset.CRC32Algorithm
struct CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields
{
	// YooAsset.SafeProxy YooAsset.CRC32Algorithm::_proxy
	SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* ____proxy_5;
};

// YooAsset.CRC32Algorithm

// YooAsset.DecryptFileInfo

// YooAsset.DecryptFileInfo

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_9;
};

// System.Security.Cryptography.MD5CryptoServiceProvider

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.IO.FileInfo

// System.IO.FileInfo

// System.FormatException

// System.FormatException

// YooAsset.YooAssetSettings

// YooAsset.YooAssetSettings

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// YooAsset.YooAssetsDriver
struct YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields
{
	// System.Int32 YooAsset.YooAssetsDriver::LastestUpdateFrame
	int32_t ___LastestUpdateFrame_4;
};

// YooAsset.YooAssetsDriver
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void YooAsset.YooAssetSettingsData::LoadSettingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetSettingsData_LoadSettingData_mF83313A98D3693138A772EA633FB982A545A1455 (const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<YooAsset.YooAssetSettings>(System.String)
inline YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.ScriptableObject::CreateInstance<YooAsset.YooAssetSettings>()
inline YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5 (const RuntimeMethod* method)
{
	return ((  YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// YooAsset.YooAssetSettings YooAsset.YooAssetSettingsData::get_Setting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int16 YooAsset.BufferReader::ReadInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BufferReader_ReadInt16_mA5B06052AF71586C0E0F278A063EEAED53494AB1 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
// System.Int32 YooAsset.BufferReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
// System.UInt16 YooAsset.BufferReader::ReadUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String YooAsset.BufferReader::ReadUTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferReader_ReadUTF8_m3593299F42A67EFC02BF43E2F08C07030B3613D4 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void YooAsset.BufferWriter::WriteUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt64_m572D638FA02DE18EBDD7057C4CBF1F2E03F0F788 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void YooAsset.BufferWriter::WriteUInt16(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mA3ABC9268BA473D6F1C7801248D3200734180B2B (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YooAsset.BufferWriter::WriteBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteBytes_mFFB036CE6E80DDBDD25891820C2307169C70D6D0 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void YooAsset.SafeProxy::Init(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_poly, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, const RuntimeMethod* method) ;
// System.UInt32 YooAsset.CRC32Algorithm::AppendInternal(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_AppendInternal_m4FB055BC957D1A8685B673C6C6283632BC7942FD (uint32_t ___0_initial, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) ;
// System.UInt32 YooAsset.SafeProxy::Append(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_crc, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void YooAsset.SafeProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329 (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String YooAsset.StringUtility::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151 (StringBuilder_t* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA6792288578C523A888FCD35FD8032A277C24F4C (String_t* ___0_path, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void YooAsset.FileUtility::CreateFileDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateFileDirectory_mBCB0B7AC354E6E43DF4D3A6F0E705E5EB81D9765 (String_t* ___0_filePath, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void YooAsset.FileUtility::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateDirectory_mD9C505973F661F7D955D8B73AA514E8F05CAD0B3 (String_t* ___0_directory, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, int32_t ___3_share, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::StreamMD5(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamMD5_mEF8553E585C6249ADA7536E1C3BFBD50C5637DB8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void YooAsset.YooLogger::Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067 (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inputStream, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_hashBytes, const RuntimeMethod* method) ;
// System.String YooAsset.HashUtility::StreamCRC32(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamCRC32_mA53E2220FD4BA495151B0E9F28C5D51817026813 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void YooAsset.CRC32Algorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<YooAsset.YooAssetsDriver>()
inline YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void YooAsset.OperationSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_Initialize_m77F8C5A3B4467F784749B4F2CB7B92781C246C78 (const RuntimeMethod* method) ;
// System.Void YooAsset.DownloadSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadSystem_Initialize_m008768F9A78ED34C63D7835C81D842A67B29DB42 (const RuntimeMethod* method) ;
// System.Void YooAsset.OperationSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationSystem_Update_m4170415D518FA44937F2FCDB8886CFB802B6C5E0 (const RuntimeMethod* method) ;
// System.Void YooAsset.DownloadSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadSystem_Update_m70CECFA6D377796AF455BED02B84C117C8720B52 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<YooAsset.ResourcePackage>::get_Item(System.Int32)
inline ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046 (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void YooAsset.ResourcePackage::UpdatePackage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcePackage_UpdatePackage_m357E84E1333D3C774D10244776A1D709538C886C (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<YooAsset.ResourcePackage>::get_Count()
inline int32_t List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_inline (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean YooAsset.YooAssets::HasPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184 (String_t* ___0_packageName, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void YooAsset.ResourcePackage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcePackage__ctor_m862FA89D0D7DEB3D0D78E9183EE2FFECA7DA97B3 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___0_packageName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<YooAsset.ResourcePackage>::Add(T)
inline void List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_inline (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<YooAsset.ResourcePackage>::GetEnumerator()
inline Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>::Dispose()
inline void Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>::get_Current()
inline ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	return ((  ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* (*) (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String YooAsset.ResourcePackage::get_PackageName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResourcePackage_get_PackageName_mA6911D7E45684CA013C522F06820B21E884BCD81_inline (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<YooAsset.ResourcePackage>::MoveNext()
inline bool Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void YooAsset.DebugReport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugReport__ctor_m5569E5C90FF7700A571ABA2F4B4D07A320457E43 (DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// YooAsset.DebugPackageData YooAsset.ResourcePackage::GetDebugPackageData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* ResourcePackage_GetDebugPackageData_mAD38FFF02B859916E6D0F09CDC307B94C7B09820 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<YooAsset.DebugPackageData>::Add(T)
inline void List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_inline (List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* __this, DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6*, DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<YooAsset.ResourcePackage>::.ctor()
inline void List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728 (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void YooAsset.YooAssets::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Update_mBEAE2E75143E5E279AA247D6E72F45D3288AC289 (const RuntimeMethod* method) ;
// System.Void YooAsset.YooLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Warning_m0FDCABFC6EB0F423424F5FAB4C63AD86D2142724 (String_t* ___0_info, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: YooAsset.DecryptFileInfo
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke& marshaled)
{
	marshaled.___BundleName_0 = il2cpp_codegen_marshal_string(unmarshaled.___BundleName_0);
	marshaled.___FilePath_1 = il2cpp_codegen_marshal_string(unmarshaled.___FilePath_1);
}
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_back(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke& marshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled)
{
	unmarshaled.___BundleName_0 = il2cpp_codegen_marshal_string_result(marshaled.___BundleName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BundleName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___BundleName_0));
	unmarshaled.___FilePath_1 = il2cpp_codegen_marshal_string_result(marshaled.___FilePath_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePath_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___FilePath_1));
}
// Conversion method for clean up from marshalling of: YooAsset.DecryptFileInfo
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_pinvoke_cleanup(DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___BundleName_0);
	marshaled.___BundleName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___FilePath_1);
	marshaled.___FilePath_1 = NULL;
}
// Conversion methods for marshalling of: YooAsset.DecryptFileInfo
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_com(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com& marshaled)
{
	marshaled.___BundleName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___BundleName_0);
	marshaled.___FilePath_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___FilePath_1);
}
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_com_back(const DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com& marshaled, DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321& unmarshaled)
{
	unmarshaled.___BundleName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___BundleName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BundleName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___BundleName_0));
	unmarshaled.___FilePath_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___FilePath_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePath_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___FilePath_1));
}
// Conversion method for clean up from marshalling of: YooAsset.DecryptFileInfo
IL2CPP_EXTERN_C void DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshal_com_cleanup(DecryptFileInfo_tFE2E173F2F6F4CFC1FF46B133FD856B9EA382321_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___BundleName_0);
	marshaled.___BundleName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___FilePath_1);
	marshaled.___FilePath_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.YooAssetSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetSettings__ctor_m791B0FC8C5F1C8910BB3EABEBE798135D4CC3311 (YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ManifestFileName = "PackageManifest";
		__this->___ManifestFileName_4 = _stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ManifestFileName_4), (void*)_stringLiteral313888EC1833AD963A75F101EEAD6A7C8CB95232);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// YooAsset.YooAssetSettings YooAsset.YooAssetSettingsData::get_Setting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_setting == null)
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_0 = ((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// LoadSettingData();
		YooAssetSettingsData_LoadSettingData_mF83313A98D3693138A772EA633FB982A545A1455(NULL);
	}

IL_0012:
	{
		// return _setting;
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_2 = ((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting_0;
		return L_2;
	}
}
// System.Void YooAsset.YooAssetSettingsData::LoadSettingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetSettingsData_LoadSettingData_mF83313A98D3693138A772EA633FB982A545A1455 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF181B634D87DB3D113C090E0969C621E3E148B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _setting = Resources.Load<YooAssetSettings>("YooAssetSettings");
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_0;
		L_0 = Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243(_stringLiteralCDF181B634D87DB3D113C090E0969C621E3E148B, Resources_Load_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_m11E667FA0B73CED9F25BF48DCED5150E9E89E243_RuntimeMethod_var);
		((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting_0), (void*)L_0);
		// if (_setting == null)
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_1 = ((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _setting = ScriptableObject.CreateInstance<YooAssetSettings>();
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_3;
		L_3 = ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5(ScriptableObject_CreateInstance_TisYooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4_mE5A6BE90689BF0ADD83D13AA136858807D8053A5_RuntimeMethod_var);
		((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetSettingsData_tEDE002C0DE1A3DC02CCDB4E5C425CD65BF5D12D1_il2cpp_TypeInfo_var))->____setting_0), (void*)L_3);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.String YooAsset.YooAssetSettingsData::GetManifestBinaryFileName(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssetSettingsData_GetManifestBinaryFileName_mDD89E20180792BB59238E5E465EAB820B87C67DA (String_t* ___0_packageName, String_t* ___1_packageVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{Setting.ManifestFileName}_{packageName}_{packageVersion}.bytes";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_2;
		L_2 = YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53(NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___ManifestFileName_4;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_packageName;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_packageVersion;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralEC4C5477D8BA260A27C36AFD7E8C1C289169E9CF);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		return L_11;
	}
}
// System.String YooAsset.YooAssetSettingsData::GetPackageHashFileName(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssetSettingsData_GetPackageHashFileName_mC089CF286FC569A8C8B548509DA7E4A310F85175 (String_t* ___0_packageName, String_t* ___1_packageVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{Setting.ManifestFileName}_{packageName}_{packageVersion}.hash";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_2;
		L_2 = YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53(NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___ManifestFileName_4;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_packageName;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___1_packageVersion;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral213B01C06BE7A16A69D3B982C16FD4A11ECD0DEB);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		return L_11;
	}
}
// System.String YooAsset.YooAssetSettingsData::GetPackageVersionFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssetSettingsData_GetPackageVersionFileName_mE2475A52E8FD228A366BB77E8D2E58BA7856EFB8 (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A30F8FD4AAB43F0E04CD95BC6E74640E23D6395);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{Setting.ManifestFileName}_{packageName}.version";
		YooAssetSettings_tAA143F140144A8EE80D18FB10D26A93A841E6EE4* L_0;
		L_0 = YooAssetSettingsData_get_Setting_mE46290161FA618BBC58334B0DAD6F8204312EA53(NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->___ManifestFileName_4;
		String_t* L_2 = ___0_packageName;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_1, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_2, _stringLiteral4A30F8FD4AAB43F0E04CD95BC6E74640E23D6395, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.BufferReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReader__ctor_mC6EF8F425A7C6EB439FB912948AE3DE47F0D3988 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	{
		// public BufferReader(byte[] data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _buffer = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		__this->____buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean YooAsset.BufferReader::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferReader_get_IsValid_m80C56E288DBE6DB7D8F29F49B1422688FE0C49A6 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		// if (_buffer == null || _buffer.Length == 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer_0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// return true;
		return (bool)1;
	}
}
// System.Byte YooAsset.BufferReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BufferReader_ReadByte_m2A8234ABF4AAEBE105C65807AB1BC36484429454 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return _buffer[_index++];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer_0;
		int32_t L_1 = __this->____index_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Boolean YooAsset.BufferReader::ReadBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferReader_ReadBool_m68183B3F41D9E3C082C46421570FF124FD30C50C (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return _buffer[_index++] == 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer_0;
		int32_t L_1 = __this->____index_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
	}
}
// System.Int16 YooAsset.BufferReader::ReadInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BufferReader_ReadInt16_mA5B06052AF71586C0E0F278A063EEAED53494AB1 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// short value = (short)((_buffer[_index]) | (_buffer[_index + 1] << 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer_0;
		int32_t L_2 = __this->____index_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer_0;
		int32_t L_6 = __this->____index_1;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// _index += 2;
		int32_t L_9 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		// return value;
		return ((int16_t)((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_8<<8)))));
	}

IL_0036:
	{
		// short value = (short)((_buffer[_index] << 8) | (_buffer[_index + 1]));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____buffer_0;
		int32_t L_11 = __this->____index_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____buffer_0;
		int32_t L_15 = __this->____index_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		// _index += 2;
		int32_t L_18 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_18, 2));
		// return value;
		return ((int16_t)((int32_t)(((int32_t)((int32_t)L_13<<8))|(int32_t)L_17)));
	}
}
// System.UInt16 YooAsset.BufferReader::ReadUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		// return (ushort)ReadInt16();
		int16_t L_0;
		L_0 = BufferReader_ReadInt16_mA5B06052AF71586C0E0F278A063EEAED53494AB1(__this, NULL);
		return (uint16_t)((int32_t)(uint16_t)L_0);
	}
}
// System.Int32 YooAsset.BufferReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		// int value = (_buffer[_index]) | (_buffer[_index + 1] << 8) | (_buffer[_index + 2] << 16) | (_buffer[_index + 3] << 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer_0;
		int32_t L_2 = __this->____index_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer_0;
		int32_t L_6 = __this->____index_1;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_0;
		int32_t L_10 = __this->____index_1;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 2));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____buffer_0;
		int32_t L_14 = __this->____index_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 3));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// _index += 4;
		int32_t L_17 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		// return value;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_12<<((int32_t)16)))))|((int32_t)((int32_t)L_16<<((int32_t)24)))));
	}

IL_005b:
	{
		// int value = (_buffer[_index] << 24) | (_buffer[_index + 1] << 16) | (_buffer[_index + 2] << 8) | (_buffer[_index + 3]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____buffer_0;
		int32_t L_19 = __this->____index_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->____buffer_0;
		int32_t L_23 = __this->____index_1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->____buffer_0;
		int32_t L_27 = __this->____index_1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 2));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->____buffer_0;
		int32_t L_31 = __this->____index_1;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 3));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		// _index += 4;
		int32_t L_34 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_34, 4));
		// return value;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_21<<((int32_t)24)))|((int32_t)((int32_t)L_25<<((int32_t)16)))))|((int32_t)((int32_t)L_29<<8))))|(int32_t)L_33));
	}
}
// System.UInt32 YooAsset.BufferReader::ReadUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BufferReader_ReadUInt32_m232721C663F60269387CA4D99282E811BE60F7AD (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	{
		// return (uint)ReadInt32();
		int32_t L_0;
		L_0 = BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A(__this, NULL);
		return L_0;
	}
}
// System.Int64 YooAsset.BufferReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BufferReader_ReadInt64_mF5E55A5504F0D0C07A0C77F9795A6B1986C1B9A9 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_00ad;
		}
	}
	{
		// int i1 = (_buffer[_index]) | (_buffer[_index + 1] << 8) | (_buffer[_index + 2] << 16) | (_buffer[_index + 3] << 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer_0;
		int32_t L_2 = __this->____index_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer_0;
		int32_t L_6 = __this->____index_1;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_0;
		int32_t L_10 = __this->____index_1;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 2));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____buffer_0;
		int32_t L_14 = __this->____index_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 3));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// int i2 = (_buffer[_index + 4]) | (_buffer[_index + 5] << 8) | (_buffer[_index + 6] << 16) | (_buffer[_index + 7] << 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->____buffer_0;
		int32_t L_18 = __this->____index_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 4));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->____buffer_0;
		int32_t L_22 = __this->____index_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 5));
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->____buffer_0;
		int32_t L_26 = __this->____index_1;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 6));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->____buffer_0;
		int32_t L_30 = __this->____index_1;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 7));
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_0 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_20|((int32_t)((int32_t)L_24<<8))))|((int32_t)((int32_t)L_28<<((int32_t)16)))))|((int32_t)((int32_t)L_32<<((int32_t)24)))));
		// _index += 8;
		int32_t L_33 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_33, 8));
		// return (uint)i1 | ((long)i2 << 32);
		int32_t L_34 = V_0;
		return ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_12<<((int32_t)16)))))|((int32_t)((int32_t)L_16<<((int32_t)24)))))))|((int64_t)(((int64_t)L_34)<<((int32_t)32)))));
	}

IL_00ad:
	{
		// int i1 = (_buffer[_index] << 24) | (_buffer[_index + 1] << 16) | (_buffer[_index + 2] << 8) | (_buffer[_index + 3]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->____buffer_0;
		int32_t L_36 = __this->____index_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->____buffer_0;
		int32_t L_40 = __this->____index_1;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->____buffer_0;
		int32_t L_44 = __this->____index_1;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 2));
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____buffer_0;
		int32_t L_48 = __this->____index_1;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 3));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_38<<((int32_t)24)))|((int32_t)((int32_t)L_42<<((int32_t)16)))))|((int32_t)((int32_t)L_46<<8))))|(int32_t)L_50));
		// int i2 = (_buffer[_index + 4] << 24) | (_buffer[_index + 5] << 16) | (_buffer[_index + 6] << 8) | (_buffer[_index + 7]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->____buffer_0;
		int32_t L_52 = __this->____index_1;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 4));
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->____buffer_0;
		int32_t L_56 = __this->____index_1;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 5));
		uint8_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->____buffer_0;
		int32_t L_60 = __this->____index_1;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 6));
		uint8_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->____buffer_0;
		int32_t L_64 = __this->____index_1;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 7));
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		// _index += 8;
		int32_t L_67 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_67, 8));
		// return (uint)i2 | ((long)i1 << 32);
		int32_t L_68 = V_1;
		return ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_54<<((int32_t)24)))|((int32_t)((int32_t)L_58<<((int32_t)16)))))|((int32_t)((int32_t)L_62<<8))))|(int32_t)L_66))))|((int64_t)(((int64_t)L_68)<<((int32_t)32)))));
	}
}
// System.String YooAsset.BufferReader::ReadUTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferReader_ReadUTF8_m3593299F42A67EFC02BF43E2F08C07030B3613D4 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		// ushort count = ReadUInt16();
		uint16_t L_0;
		L_0 = BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E(__this, NULL);
		V_0 = L_0;
		// if (count == 0)
		uint16_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0010:
	{
		// string value = Encoding.UTF8.GetString(_buffer, _index, count);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_0;
		int32_t L_5 = __this->____index_1;
		uint16_t L_6 = V_0;
		NullCheck(L_3);
		String_t* L_7;
		L_7 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, L_5, L_6);
		// _index += count;
		int32_t L_8 = __this->____index_1;
		uint16_t L_9 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_8, (int32_t)L_9));
		// return value;
		return L_7;
	}
}
// System.Int32[] YooAsset.BufferReader::ReadInt32Array()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BufferReader_ReadInt32Array_m299D7566FB9F588CDF22C883BF02157863B2C7F6 (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// ushort count = ReadUInt16();
		uint16_t L_0;
		L_0 = BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E(__this, NULL);
		V_0 = L_0;
		// int[] values = new int[count];
		uint16_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// for (int i = 0; i < count; i++)
		V_2 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		// values[i] = ReadInt32();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5;
		L_5 = BufferReader_ReadInt32_mE435455960B4D67BE25CD6DD4C9B5308BD35868A(__this, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		// for (int i = 0; i < count; i++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0012;
		}
	}
	{
		// return values;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		return L_9;
	}
}
// System.String[] YooAsset.BufferReader::ReadUTF8Array()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BufferReader_ReadUTF8Array_mE5696019520879DFD4104B6CF755E5CEA4D21A2C (BufferReader_t058D020315958551EDFFB188DDAB89E05EF5112A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// ushort count = ReadUInt16();
		uint16_t L_0;
		L_0 = BufferReader_ReadUInt16_m069C188A56BC98EDBBEAFE129EF9999CC018C00E(__this, NULL);
		V_0 = L_0;
		// string[] values = new string[count];
		uint16_t L_1 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// for (int i = 0; i < count; i++)
		V_2 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		// values[i] = ReadUTF8();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		int32_t L_4 = V_2;
		String_t* L_5;
		L_5 = BufferReader_ReadUTF8_m3593299F42A67EFC02BF43E2F08C07030B3613D4(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (String_t*)L_5);
		// for (int i = 0; i < count; i++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0012;
		}
	}
	{
		// return values;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.BufferWriter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter__ctor_m5B2AF42B56EEBAE07F67B8AE314BC223DACC2EDB (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BufferWriter(int capacity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _buffer = new byte[capacity];
		int32_t L_0 = ___0_capacity;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buffer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void YooAsset.BufferWriter::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_Clear_mE0FC4859F1FBCBC6FB621B868A1FAB2762AAB0DA (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, const RuntimeMethod* method) 
{
	{
		// _index = 0;
		__this->____index_1 = 0;
		// }
		return;
	}
}
// System.Void YooAsset.BufferWriter::WriteToStream(System.IO.FileStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteToStream_mA997D1C5E4CB380C7DAE16E0BF243D0160759B72 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___0_fileStream, const RuntimeMethod* method) 
{
	{
		// fileStream.Write(_buffer, 0, _index);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_0 = ___0_fileStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer_0;
		int32_t L_2 = __this->____index_1;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_2);
		// }
		return;
	}
}
// System.Void YooAsset.BufferWriter::WriteBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteBytes_mFFB036CE6E80DDBDD25891820C2307169C70D6D0 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int count = data.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// Buffer.BlockCopy(data, 0, _buffer, _index, count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____buffer_0;
		int32_t L_3 = __this->____index_1;
		int32_t L_4 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, L_3, L_4, NULL);
		// _index += count;
		int32_t L_5 = __this->____index_1;
		int32_t L_6 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		// }
		return;
	}
}
// System.Void YooAsset.BufferWriter::WriteUInt16(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// _buffer[_index++] = (byte)value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer_0;
		int32_t L_1 = __this->____index_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint16_t L_4 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		// _buffer[_index++] = (byte)(value >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer_0;
		int32_t L_6 = __this->____index_1;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		uint16_t L_9 = ___0_value;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_9>>8))));
		// }
		return;
	}
}
// System.Void YooAsset.BufferWriter::WriteInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteInt64_m68239C91573978F31F2268CD8BE30847D6D4E455 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// WriteUInt64((ulong)value);
		int64_t L_0 = ___0_value;
		BufferWriter_WriteUInt64_m572D638FA02DE18EBDD7057C4CBF1F2E03F0F788(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.BufferWriter::WriteUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUInt64_m572D638FA02DE18EBDD7057C4CBF1F2E03F0F788 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// _buffer[_index++] = (byte)value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer_0;
		int32_t L_1 = __this->____index_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint64_t L_4 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		// _buffer[_index++] = (byte)(value >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____buffer_0;
		int32_t L_6 = __this->____index_1;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		uint64_t L_9 = ___0_value;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_9>>8))));
		// _buffer[_index++] = (byte)(value >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____buffer_0;
		int32_t L_11 = __this->____index_1;
		V_0 = L_11;
		int32_t L_12 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_0;
		uint64_t L_14 = ___0_value;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_14>>((int32_t)16)))));
		// _buffer[_index++] = (byte)(value >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____buffer_0;
		int32_t L_16 = __this->____index_1;
		V_0 = L_16;
		int32_t L_17 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_0;
		uint64_t L_19 = ___0_value;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_19>>((int32_t)24)))));
		// _buffer[_index++] = (byte)(value >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->____buffer_0;
		int32_t L_21 = __this->____index_1;
		V_0 = L_21;
		int32_t L_22 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_0;
		uint64_t L_24 = ___0_value;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_24>>((int32_t)32)))));
		// _buffer[_index++] = (byte)(value >> 40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->____buffer_0;
		int32_t L_26 = __this->____index_1;
		V_0 = L_26;
		int32_t L_27 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_0;
		uint64_t L_29 = ___0_value;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_29>>((int32_t)40)))));
		// _buffer[_index++] = (byte)(value >> 48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->____buffer_0;
		int32_t L_31 = __this->____index_1;
		V_0 = L_31;
		int32_t L_32 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_0;
		uint64_t L_34 = ___0_value;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_34>>((int32_t)48)))));
		// _buffer[_index++] = (byte)(value >> 56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->____buffer_0;
		int32_t L_36 = __this->____index_1;
		V_0 = L_36;
		int32_t L_37 = V_0;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_0;
		uint64_t L_39 = ___0_value;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_39>>((int32_t)56)))));
		// }
		return;
	}
}
// System.Void YooAsset.BufferWriter::WriteUTF8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWriter_WriteUTF8_m88353C3A51555128165FA9826DC112155E13B334 (BufferWriter_tB11C275753FDCC1BA6675F7676FA91387456F886* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (string.IsNullOrEmpty(value))
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// WriteUInt16(0);
		BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5(__this, (uint16_t)0, NULL);
		return;
	}

IL_0010:
	{
		// byte[] bytes = Encoding.UTF8.GetBytes(value);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___0_value;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		// int count = bytes.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		V_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		// if (count > ushort.MaxValue)
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0042;
		}
	}
	{
		// throw new FormatException($"Write string length cannot be greater than {ushort.MaxValue} !");
		uint16_t L_7 = ((uint16_t)((int32_t)65535));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A58863259934947B04C885DB1013F7BD17F85C1)), L_8, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_10 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferWriter_WriteUTF8_m88353C3A51555128165FA9826DC112155E13B334_RuntimeMethod_var)));
	}

IL_0042:
	{
		// WriteUInt16(Convert.ToUInt16(count));
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_12;
		L_12 = Convert_ToUInt16_mA3ABC9268BA473D6F1C7801248D3200734180B2B(L_11, NULL);
		BufferWriter_WriteUInt16_mB40927185E82DA1290F5621E6C2512A9FA7013C5(__this, L_12, NULL);
		// WriteBytes(bytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		BufferWriter_WriteBytes_mFFB036CE6E80DDBDD25891820C2307169C70D6D0(__this, L_13, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.SafeProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329 (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly uint[] _table = new uint[16 * 256];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->____table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____table_0), (void*)L_0);
		// internal SafeProxy()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Init(Poly);
		SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF(__this, ((int32_t)-306674912), NULL);
		// }
		return;
	}
}
// System.Void YooAsset.SafeProxy::Init(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_poly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t G_B6_0 = 0;
	{
		// var table = _table;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____table_0;
		V_0 = L_0;
		// for (uint i = 0; i < 256; i++)
		V_1 = 0;
		goto IL_004e;
	}

IL_000b:
	{
		// uint res = i;
		uint32_t L_1 = V_1;
		V_2 = L_1;
		// for (int t = 0; t < 16; t++)
		V_3 = 0;
		goto IL_0045;
	}

IL_0011:
	{
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		V_4 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		uint32_t L_2 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_2&1))) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_3 = V_2;
		G_B6_0 = ((uint32_t)(((int32_t)((uint32_t)L_3>>1))));
		goto IL_0026;
	}

IL_0021:
	{
		uint32_t L_4 = ___0_poly;
		uint32_t L_5 = V_2;
		G_B6_0 = ((uint32_t)(((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>1))))));
	}

IL_0026:
	{
		V_2 = G_B6_0;
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		int32_t L_6 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002d:
	{
		// for (int k = 0; k < 8; k++) res = (res & 1) == 1 ? poly ^ (res >> 1) : (res >> 1);
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0016;
		}
	}
	{
		// table[(t * 256) + i] = res;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = V_3;
		uint32_t L_10 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)256)))), ((int64_t)(uint64_t)L_10)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SafeProxy_Init_m22B2A105F4BF66946394BAB6B7FC5FBB925BA3EF_RuntimeMethod_var);
		uint32_t L_11 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)256)))), ((int64_t)(uint64_t)L_10))))), (uint32_t)L_11);
		// for (int t = 0; t < 16; t++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0045:
	{
		// for (int t = 0; t < 16; t++)
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)16))))
		{
			goto IL_0011;
		}
	}
	{
		// for (uint i = 0; i < 256; i++)
		uint32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
	}

IL_004e:
	{
		// for (uint i = 0; i < 256; i++)
		uint32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.UInt32 YooAsset.SafeProxy::Append(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* __this, uint32_t ___0_crc, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		// uint crcLocal = uint.MaxValue ^ crc;
		uint32_t L_0 = ___0_crc;
		V_0 = ((int32_t)((-1)^(int32_t)L_0));
		// uint[] table = _table;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____table_0;
		V_1 = L_1;
		goto IL_0117;
	}

IL_0010:
	{
		// var a = table[(3 * 256) + input[offset + 12]]
		//     ^ table[(2 * 256) + input[offset + 13]]
		//     ^ table[(1 * 256) + input[offset + 14]]
		//     ^ table[(0 * 256) + input[offset + 15]];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_input;
		int32_t L_4 = ___2_offset;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)12)));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(((int32_t)768), (int32_t)L_6));
		uint32_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_input;
		int32_t L_11 = ___2_offset;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)13)));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)512), (int32_t)L_13));
		uint32_t L_15 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___1_input;
		int32_t L_18 = ___2_offset;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)14)));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)256), (int32_t)L_20));
		uint32_t L_22 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___1_input;
		int32_t L_25 = ___2_offset;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)15)));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		uint8_t L_28 = L_27;
		uint32_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_8^(int32_t)L_15))^(int32_t)L_22))^(int32_t)L_29));
		// var b = table[(7 * 256) + input[offset + 8]]
		//     ^ table[(6 * 256) + input[offset + 9]]
		//     ^ table[(5 * 256) + input[offset + 10]]
		//     ^ table[(4 * 256) + input[offset + 11]];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_input;
		int32_t L_32 = ___2_offset;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 8));
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(((int32_t)1792), (int32_t)L_34));
		uint32_t L_36 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___1_input;
		int32_t L_39 = ___2_offset;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, ((int32_t)9)));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_37);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(((int32_t)1536), (int32_t)L_41));
		uint32_t L_43 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___1_input;
		int32_t L_46 = ___2_offset;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)10)));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_44);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(((int32_t)1280), (int32_t)L_48));
		uint32_t L_50 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___1_input;
		int32_t L_53 = ___2_offset;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, ((int32_t)11)));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(((int32_t)1024), (int32_t)L_55));
		uint32_t L_57 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_36^(int32_t)L_43))^(int32_t)L_50))^(int32_t)L_57));
		// var c = table[(11 * 256) + input[offset + 4]]
		//     ^ table[(10 * 256) + input[offset + 5]]
		//     ^ table[(9 * 256) + input[offset + 6]]
		//     ^ table[(8 * 256) + input[offset + 7]];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___1_input;
		int32_t L_60 = ___2_offset;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint8_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_58);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(((int32_t)2816), (int32_t)L_62));
		uint32_t L_64 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___1_input;
		int32_t L_67 = ___2_offset;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_65);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(((int32_t)2560), (int32_t)L_69));
		uint32_t L_71 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___1_input;
		int32_t L_74 = ___2_offset;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 6));
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_72);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(((int32_t)2304), (int32_t)L_76));
		uint32_t L_78 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ___1_input;
		int32_t L_81 = ___2_offset;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 7));
		uint8_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_79);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(((int32_t)2048), (int32_t)L_83));
		uint32_t L_85 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_4 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_64^(int32_t)L_71))^(int32_t)L_78))^(int32_t)L_85));
		// var d = table[(15 * 256) + ((byte)crcLocal ^ input[offset])]
		//     ^ table[(14 * 256) + ((byte)(crcLocal >> 8) ^ input[offset + 1])]
		//     ^ table[(13 * 256) + ((byte)(crcLocal >> 16) ^ input[offset + 2])]
		//     ^ table[(12 * 256) + ((crcLocal >> 24) ^ input[offset + 3])];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = V_1;
		uint32_t L_87 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___1_input;
		int32_t L_89 = ___2_offset;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_86);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(((int32_t)3840), ((int32_t)(((int32_t)(uint8_t)L_87)^(int32_t)L_91))));
		uint32_t L_93 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_1;
		uint32_t L_95 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___1_input;
		int32_t L_97 = ___2_offset;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		uint8_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_94);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(((int32_t)3584), ((int32_t)(((int32_t)(uint8_t)((int32_t)((uint32_t)L_95>>8)))^(int32_t)L_99))));
		uint32_t L_101 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = V_1;
		uint32_t L_103 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ___1_input;
		int32_t L_105 = ___2_offset;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 2));
		uint8_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_102);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(((int32_t)3328), ((int32_t)(((int32_t)(uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16))))^(int32_t)L_107))));
		uint32_t L_109 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_1;
		uint32_t L_111 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = ___1_input;
		int32_t L_113 = ___2_offset;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 3));
		uint8_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_110);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(((int32_t)3072), ((int32_t)(((int32_t)((uint32_t)L_111>>((int32_t)24)))^(int32_t)L_115))));
		uint32_t L_117 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		// crcLocal = d ^ c ^ b ^ a;
		uint32_t L_118 = V_4;
		uint32_t L_119 = V_3;
		uint32_t L_120 = V_2;
		V_0 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_93^(int32_t)L_101))^(int32_t)L_109))^(int32_t)L_117))^(int32_t)L_118))^(int32_t)L_119))^(int32_t)L_120));
		// offset += 16;
		int32_t L_121 = ___2_offset;
		___2_offset = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)16)));
		// length -= 16;
		int32_t L_122 = ___3_length;
		___3_length = ((int32_t)il2cpp_codegen_subtract(L_122, ((int32_t)16)));
	}

IL_0117:
	{
		// while (length >= 16)
		int32_t L_123 = ___3_length;
		if ((((int32_t)L_123) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0134;
	}

IL_0122:
	{
		// crcLocal = table[(byte)(crcLocal ^ input[offset++])] ^ crcLocal >> 8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = V_1;
		uint32_t L_125 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = ___1_input;
		int32_t L_127 = ___2_offset;
		int32_t L_128 = L_127;
		___2_offset = ((int32_t)il2cpp_codegen_add(L_128, 1));
		NullCheck(L_126);
		int32_t L_129 = L_128;
		uint8_t L_130 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_124);
		int32_t L_131 = ((int32_t)(uint8_t)((int32_t)((int32_t)L_125^(int32_t)L_130)));
		uint32_t L_132 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		uint32_t L_133 = V_0;
		V_0 = ((int32_t)((int32_t)L_132^((int32_t)((uint32_t)L_133>>8))));
	}

IL_0134:
	{
		// while (--length >= 0)
		int32_t L_134 = ___3_length;
		int32_t L_135 = ((int32_t)il2cpp_codegen_subtract(L_134, 1));
		___3_length = L_135;
		if ((((int32_t)L_135) >= ((int32_t)0)))
		{
			goto IL_0122;
		}
	}
	{
		// return crcLocal ^ uint.MaxValue;
		uint32_t L_136 = V_0;
		return ((int32_t)((int32_t)L_136^(-1)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.CRC32Algorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	{
		// public CRC32Algorithm()
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		// HashSizeValue = 32;
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue_1 = ((int32_t)32);
		// }
		return;
	}
}
// System.Void YooAsset.CRC32Algorithm::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm_Initialize_m27E8AA0C2D4BDA0382732C455ED84D1B9A9FD7AF (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	{
		// _currentCrc = 0;
		__this->____currentCrc_4 = 0;
		// }
		return;
	}
}
// System.Void YooAsset.CRC32Algorithm::HashCore(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm_HashCore_mEB09D2ED78FA41E68EA2435FCE1BC5B9C46FD25C (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentCrc = AppendInternal(_currentCrc, input, offset, length);
		uint32_t L_0 = __this->____currentCrc_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_length;
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = CRC32Algorithm_AppendInternal_m4FB055BC957D1A8685B673C6C6283632BC7942FD(L_0, L_1, L_2, L_3, NULL);
		__this->____currentCrc_4 = L_4;
		// }
		return;
	}
}
// System.Byte[] YooAsset.CRC32Algorithm::HashFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CRC32Algorithm_HashFinal_mD8007FC23543C5FFF5C689201CCCFF5A4A675E5F (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// return new[] { (byte)_currentCrc, (byte)(_currentCrc >> 8), (byte)(_currentCrc >> 16), (byte)(_currentCrc >> 24) };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		uint32_t L_3 = __this->____currentCrc_4;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_2;
		uint32_t L_5 = __this->____currentCrc_4;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_4;
		uint32_t L_7 = __this->____currentCrc_4;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_6;
		uint32_t L_9 = __this->____currentCrc_4;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))));
		return L_8;
	}

IL_003e:
	{
		// return new[] { (byte)(_currentCrc >> 24), (byte)(_currentCrc >> 16), (byte)(_currentCrc >> 8), (byte)_currentCrc };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		uint32_t L_12 = __this->____currentCrc_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_12>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_11;
		uint32_t L_14 = __this->____currentCrc_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		uint32_t L_16 = __this->____currentCrc_4;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_16>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		uint32_t L_18 = __this->____currentCrc_4;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_18));
		return L_17;
	}
}
// System.UInt32 YooAsset.CRC32Algorithm::AppendInternal(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32Algorithm_AppendInternal_m4FB055BC957D1A8685B673C6C6283632BC7942FD (uint32_t ___0_initial, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_offset, int32_t ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (length > 0)
		int32_t L_0 = ___3_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// return _proxy.Append(initial, input, offset, length);
		il2cpp_codegen_runtime_class_init_inline(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* L_1 = ((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy_5;
		uint32_t L_2 = ___0_initial;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_input;
		int32_t L_4 = ___2_offset;
		int32_t L_5 = ___3_length;
		NullCheck(L_1);
		uint32_t L_6;
		L_6 = SafeProxy_Append_m4537F0777BF86A68EF103F1E127BBDA372D4353E(L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0013:
	{
		// return initial;
		uint32_t L_7 = ___0_initial;
		return L_7;
	}
}
// System.Void YooAsset.CRC32Algorithm::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32Algorithm__cctor_m12F15F3D28AF859729F6501A91A5F00C27469C80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly SafeProxy _proxy = new SafeProxy();
		SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E* L_0 = (SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E*)il2cpp_codegen_object_new(SafeProxy_tB77642C8A36A3783EB9DFAC1415459DE6B11CF7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SafeProxy__ctor_m20D5BAFBED63005F32518A267B10569A87AFA329(L_0, NULL);
		((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_StaticFields*)il2cpp_codegen_static_fields_for(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var))->____proxy_5), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.YooLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Warning_m0FDCABFC6EB0F423424F5FAB4C63AD86D2142724 (String_t* ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Logger != null)
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Logger.Warning(info);
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		String_t* L_2 = ___0_info;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void YooAsset.ILogger::Warning(System.String) */, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		// UnityEngine.Debug.LogWarning(info);
		String_t* L_3 = ___0_info;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_3, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Error_m30690253373083BEEF5813486E22F990791F7E14 (String_t* ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Logger != null)
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Logger.Error(info);
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		String_t* L_2 = ___0_info;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void YooAsset.ILogger::Error(System.String) */, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		// UnityEngine.Debug.LogError(info);
		String_t* L_3 = ___0_info;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_3, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooLogger::Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9 (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Logger != null)
		RuntimeObject* L_0 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Logger.Exception(exception);
		RuntimeObject* L_1 = ((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0;
		Exception_t* L_2 = ___0_exception;
		NullCheck(L_1);
		InterfaceActionInvoker1< Exception_t* >::Invoke(2 /* System.Void YooAsset.ILogger::Exception(System.Exception) */, ILogger_tDF24C2D094417567E0429274CBA0896EF501517C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0013:
	{
		// UnityEngine.Debug.LogException(exception);
		Exception_t* L_3 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_3, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.PathUtility::RemoveExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_RemoveExtension_mB37809517DE9576A5A133FC6EB1C03A17A27C001 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (string.IsNullOrEmpty(str))
		String_t* L_0 = ___0_str;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return str;
		String_t* L_2 = ___0_str;
		return L_2;
	}

IL_000a:
	{
		// int index = str.LastIndexOf(".");
		String_t* L_3 = ___0_str;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_0 = L_4;
		// if (index == -1)
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001c;
		}
	}
	{
		// return str;
		String_t* L_6 = ___0_str;
		return L_6;
	}

IL_001c:
	{
		// return str.Remove(index); //"assets/config/test.unity3d" --> "assets/config/test"
		String_t* L_7 = ___0_str;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_7, L_8, NULL);
		return L_9;
	}
}
// System.String YooAsset.PathUtility::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_m6A27D589F2324DFC34626385A25BFE05153466CF (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StringUtility.Format("{0}/{1}", path1, path2);
		String_t* L_0 = ___0_path1;
		String_t* L_1 = ___1_path2;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_0, L_1, NULL);
		return L_2;
	}
}
// System.String YooAsset.PathUtility::Combine(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_m6920072B21881851CD528AEB1215A7B926A1B43A (String_t* ___0_path1, String_t* ___1_path2, String_t* ___2_path3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA929F9B4FD405482CE681D9E9297AF08F5469025);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StringUtility.Format("{0}/{1}/{2}", path1, path2, path3);
		String_t* L_0 = ___0_path1;
		String_t* L_1 = ___1_path2;
		String_t* L_2 = ___2_path3;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B(_stringLiteralA929F9B4FD405482CE681D9E9297AF08F5469025, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.PathUtility::Combine(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtility_Combine_m4F74CC4C03DB1C83255A40383BFB8452A23D81B6 (String_t* ___0_path1, String_t* ___1_path2, String_t* ___2_path3, String_t* ___3_path4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StringUtility.Format("{0}/{1}/{2}/{3}", path1, path2, path3, path4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_path1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_path2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___2_path3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___3_path4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15(_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA, L_7, NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.StringUtility::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m57FE5C4829C2170C2BF8284B1EB2F92D2F7FF1B7 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m57FE5C4829C2170C2BF8284B1EB2F92D2F7FF1B7_RuntimeMethod_var)));
	}

IL_000e:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		// _cacheBuilder.AppendFormat(format, arg0);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_5 = ___0_format;
		RuntimeObject* L_6 = ___1_arg0;
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, L_5, L_6, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_8 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m56943693D959257C024A22C4DA4A9BA37E9878ED_RuntimeMethod_var)));
	}

IL_000e:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		// _cacheBuilder.AppendFormat(format, arg0, arg1);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_5 = ___0_format;
		RuntimeObject* L_6 = ___1_arg0;
		RuntimeObject* L_7 = ___2_arg1;
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_4, L_5, L_6, L_7, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_9 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}
}
// System.String YooAsset.StringUtility::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_mFDB7AA995F59B6BB794195CB0A9C1612627F2B4B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_3 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_3);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_3, 0, NULL);
		// _cacheBuilder.AppendFormat(format, arg0, arg1, arg2);
		StringBuilder_t* L_4 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_5 = ___0_format;
		RuntimeObject* L_6 = ___1_arg0;
		RuntimeObject* L_7 = ___2_arg1;
		RuntimeObject* L_8 = ___3_arg2;
		NullCheck(L_4);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_4, L_5, L_6, L_7, L_8, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_10 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		return L_11;
	}
}
// System.String YooAsset.StringUtility::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (args == null)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtility_Format_m01B57791BBB6FFDE33EBEF1730890E5EEB7F4C15_RuntimeMethod_var)));
	}

IL_0017:
	{
		// _cacheBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		StringBuilder_t* L_5 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_5);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_5, 0, NULL);
		// _cacheBuilder.AppendFormat(format, args);
		StringBuilder_t* L_6 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		String_t* L_7 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___1_args;
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_6, L_7, L_8, NULL);
		// return _cacheBuilder.ToString();
		StringBuilder_t* L_10 = ((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		return L_11;
	}
}
// System.Void YooAsset.StringUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtility__cctor_m0F9FD51CF1A36E6BCCB1E0BC0B6CF23F9100E4B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static StringBuilder _cacheBuilder = new StringBuilder(2048);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)2048), NULL);
		((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtility_tA17F666E86C899041F159E0C2A19E43DDE1A6686_il2cpp_TypeInfo_var))->____cacheBuilder_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.FileUtility::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileUtility_ReadAllText_m0562C7080D4A1BBA4E9E917A24123F6EFEEA003B (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (File.Exists(filePath) == false)
		String_t* L_0 = ___0_filePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000e:
	{
		// return File.ReadAllText(filePath, Encoding.UTF8);
		String_t* L_3 = ___0_filePath;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5;
		L_5 = File_ReadAllText_mA6792288578C523A888FCD35FD8032A277C24F4C(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Byte[] YooAsset.FileUtility::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileUtility_ReadAllBytes_mD14D378FF3622F974AC86304BC07E714FDE4F96C (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	{
		// if (File.Exists(filePath) == false)
		String_t* L_0 = ___0_filePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_000a:
	{
		// return File.ReadAllBytes(filePath);
		String_t* L_2 = ___0_filePath;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_2, NULL);
		return L_3;
	}
}
// System.Void YooAsset.FileUtility::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_WriteAllText_m19EAD0113063D600AA40F6362F1EF62900EEB12A (String_t* ___0_filePath, String_t* ___1_content, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// CreateFileDirectory(filePath);
		String_t* L_0 = ___0_filePath;
		FileUtility_CreateFileDirectory_mBCB0B7AC354E6E43DF4D3A6F0E705E5EB81D9765(L_0, NULL);
		// byte[] bytes = Encoding.UTF8.GetBytes(content);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___1_content;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		V_0 = L_3;
		// File.WriteAllBytes(filePath, bytes); //????BOM??
		String_t* L_4 = ___0_filePath;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.FileUtility::CreateFileDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateFileDirectory_mBCB0B7AC354E6E43DF4D3A6F0E705E5EB81D9765 (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string directory = Path.GetDirectoryName(filePath);
		String_t* L_0 = ___0_filePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_0, NULL);
		// CreateDirectory(directory);
		FileUtility_CreateDirectory_mD9C505973F661F7D955D8B73AA514E8F05CAD0B3(L_1, NULL);
		// }
		return;
	}
}
// System.Void YooAsset.FileUtility::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility_CreateDirectory_mD9C505973F661F7D955D8B73AA514E8F05CAD0B3 (String_t* ___0_directory, const RuntimeMethod* method) 
{
	{
		// if (Directory.Exists(directory) == false)
		String_t* L_0 = ___0_directory;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Directory.CreateDirectory(directory);
		String_t* L_2 = ___0_directory;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_2, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Int64 YooAsset.FileUtility::GetFileSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileUtility_GetFileSize_mF2BCBA341B32DC7CC759391050ED6DD8252DA52D (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FileInfo fileInfo = new FileInfo(filePath);
		String_t* L_0 = ___0_filePath;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		// return fileInfo.Length;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.HashUtility::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_hashBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string result = BitConverter.ToString(hashBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_hashBytes;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(L_0, NULL);
		// result = result.Replace("-", "");
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// return result.ToLower();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::FileMD5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileMD5_mC15CC81E0A046E46B138159FC30AADD0E4012B6B (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// using (FileStream fs = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read))
			String_t* L_0 = ___0_filePath;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
			V_0 = L_1;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0013_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
						if (!L_2)
						{
							goto IL_001c_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
						NullCheck(L_3);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					}

IL_001c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// return StreamMD5(fs);
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				String_t* L_5;
				L_5 = HashUtility_StreamMD5_mEF8553E585C6249ADA7536E1C3BFBD50C5637DB8(L_4, NULL);
				V_1 = L_5;
				goto IL_002a;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(System.Exception)
		// YooLogger.Exception(e);
		YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_1 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}// end catch (depth: 1)

IL_002a:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String YooAsset.HashUtility::StreamMD5(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamMD5_mEF8553E585C6249ADA7536E1C3BFBD50C5637DB8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MD5CryptoServiceProvider provider = new MD5CryptoServiceProvider();
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_0, NULL);
		// byte[] hashBytes = provider.ComputeHash(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E(L_2, NULL);
		return L_3;
	}
}
// System.String YooAsset.HashUtility::FileCRC32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_FileCRC32_m19D18BFBB5686559F437B99AA7E7A374EC7C3947 (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// using (FileStream fs = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read))
			String_t* L_0 = ___0_filePath;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
			V_0 = L_1;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0013_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
						if (!L_2)
						{
							goto IL_001c_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
						NullCheck(L_3);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					}

IL_001c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// return StreamCRC32(fs);
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				String_t* L_5;
				L_5 = HashUtility_StreamCRC32_mA53E2220FD4BA495151B0E9F28C5D51817026813(L_4, NULL);
				V_1 = L_5;
				goto IL_002a;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(System.Exception)
		// YooLogger.Exception(e);
		YooLogger_Exception_mE10CEEFE3F29B1FFCC8065D63534F9DF20F4D8D9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_1 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}// end catch (depth: 1)

IL_002a:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String YooAsset.HashUtility::StreamCRC32(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashUtility_StreamCRC32_mA53E2220FD4BA495151B0E9F28C5D51817026813 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CRC32Algorithm hash = new CRC32Algorithm();
		CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A* L_0 = (CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A*)il2cpp_codegen_object_new(CRC32Algorithm_t586EF2FEB80231B16D50813BE2ED0DC1DFD2014A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CRC32Algorithm__ctor_m294E2814CE76E07DF72E04905B4900D80FD10F7B(L_0, NULL);
		// byte[] hashBytes = hash.ComputeHash(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		// return ToString(hashBytes);
		String_t* L_3;
		L_3 = HashUtility_ToString_mFC0FE6EDA758E059BEE078D775605C369E62E66E(L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.YooAssets::Initialize(YooAsset.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Initialize_mB0A84BF8A5A714A29327289CC2D8FB194DAF56F3 (RuntimeObject* ___0_logger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// UnityEngine.Debug.LogWarning($"{nameof(YooAssets)} is initialized !");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE4BCBDD7CCF79370EF7363440DFA9118B516F3B1, NULL);
		// return;
		return;
	}

IL_0012:
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_1 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_1)
		{
			goto IL_0053;
		}
	}
	{
		// YooLogger.Logger = logger;
		RuntimeObject* L_2 = ___0_logger;
		((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_StaticFields*)il2cpp_codegen_static_fields_for(YooLogger_t94D44592A92415CB9ED28A4DAA5F52890FAD3CAF_il2cpp_TypeInfo_var))->___Logger_0), (void*)L_2);
		// _isInitialize = true;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)1;
		// _driver = new UnityEngine.GameObject($"[{nameof(YooAssets)}]");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral2EE202C5315CE67BC1F4ABEBB5BFF740404AE2F8, NULL);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1), (void*)L_3);
		// _driver.AddComponent<YooAssetsDriver>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1;
		NullCheck(L_4);
		YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* L_5;
		L_5 = GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7(L_4, GameObject_AddComponent_TisYooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_m63701C29C2F16B985050086A751E117399009AB7_RuntimeMethod_var);
		// UnityEngine.Object.DontDestroyOnLoad(_driver);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
		// OperationSystem.Initialize();
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_Initialize_m77F8C5A3B4467F784749B4F2CB7B92781C246C78(NULL);
		// DownloadSystem.Initialize();
		il2cpp_codegen_runtime_class_init_inline(DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		DownloadSystem_Initialize_m008768F9A78ED34C63D7835C81D842A67B29DB42(NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Update_mBEAE2E75143E5E279AA247D6E72F45D3288AC289 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_isInitialize)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// OperationSystem.Update();
		il2cpp_codegen_runtime_class_init_inline(OperationSystem_tDE68EED01779A55831A74F198B9146D42435EC31_il2cpp_TypeInfo_var);
		OperationSystem_Update_m4170415D518FA44937F2FCDB8886CFB802B6C5E0(NULL);
		// DownloadSystem.Update();
		il2cpp_codegen_runtime_class_init_inline(DownloadSystem_t8504C7C4162BDE95B96B40AA64EC7A3BD6CFF04B_il2cpp_TypeInfo_var);
		DownloadSystem_Update_m70CECFA6D377796AF455BED02B84C117C8720B52(NULL);
		// for (int i = 0; i < _packages.Count; i++)
		V_0 = 0;
		goto IL_0029;
	}

IL_0015:
	{
		// _packages[i].UpdatePackage();
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_1 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_3;
		L_3 = List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046(L_1, L_2, List_1_get_Item_mF1B883F1D39CDE64AEB97A4E4C9FB6554C98B046_RuntimeMethod_var);
		NullCheck(L_3);
		ResourcePackage_UpdatePackage_m357E84E1333D3C774D10244776A1D709538C886C(L_3, NULL);
		// for (int i = 0; i < _packages.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0029:
	{
		// for (int i = 0; i < _packages.Count; i++)
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_6 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_inline(L_6, List_1_get_Count_m3D2EF9D21E738F7A2836140BF2EFF35B63DC3961_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0015;
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// YooAsset.ResourcePackage YooAsset.YooAssets::CreatePackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873 (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* V_0 = NULL;
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception($"{nameof(YooAssets)} not initialize !");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var)));
	}

IL_0012:
	{
		// if (string.IsNullOrEmpty(packageName))
		String_t* L_2 = ___0_packageName;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// throw new Exception("Package name is null or empty !");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFC9440BDB8F65D5F4B9B344FC7163CA6FC6516A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var)));
	}

IL_0025:
	{
		// if (HasPackage(packageName))
		String_t* L_5 = ___0_packageName;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184(L_5, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// throw new Exception($"Package {packageName} already existed !");
		String_t* L_7 = ___0_packageName;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAB4991BC03A4611590A823E483ACA6B929AD3B6)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFACFABE7F5FF35F0556F38330D454B4E4A451170)), NULL);
		Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873_RuntimeMethod_var)));
	}

IL_0043:
	{
		// ResourcePackage package = new ResourcePackage(packageName);
		String_t* L_10 = ___0_packageName;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_11 = (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022*)il2cpp_codegen_object_new(ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ResourcePackage__ctor_m862FA89D0D7DEB3D0D78E9183EE2FFECA7DA97B3(L_11, L_10, NULL);
		V_0 = L_11;
		// _packages.Add(package);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_12 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_inline(L_12, L_13, List_1_Add_m6DB690D6E80B1CF9853A678A7A0817130EEEC1E6_RuntimeMethod_var);
		// return package;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_14 = V_0;
		return L_14;
	}
}
// System.Boolean YooAsset.YooAssets::HasPackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184 (String_t* ___0_packageName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (_isInitialize == false)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		bool L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception($"{nameof(YooAssets)} not initialize !");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B7ACFA699A95389F6B76095C514C2217B23A2A7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YooAssets_HasPackage_m835B2DF39108F56037BAC7C0F3707203BB73B184_RuntimeMethod_var)));
	}

IL_0012:
	{
		// foreach (var package in _packages)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_2 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_2);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_3;
		L_3 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_2, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_0), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_001f_1:
			{
				// foreach (var package in _packages)
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_4;
				L_4 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_0), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				// if (package.PackageName == packageName)
				NullCheck(L_4);
				String_t* L_5;
				L_5 = ResourcePackage_get_PackageName_mA6911D7E45684CA013C522F06820B21E884BCD81_inline(L_4, NULL);
				String_t* L_6 = ___0_packageName;
				bool L_7;
				L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_0037_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0052;
			}

IL_0037_1:
			{
				// foreach (var package in _packages)
				bool L_8;
				L_8 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_0), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// return false;
		return (bool)0;
	}

IL_0052:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.String YooAsset.YooAssets::GetStreamingAssetBuildinFolderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YooAssets_GetStreamingAssetBuildinFolderName_m310233391F05875E89559C66E5B0728A2B2B9DF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral143B43DDF539C9097D64A86DD87001FCB9261DB7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return YooAssetSettings.StreamingAssetsBuildinFolder;
		return _stringLiteral143B43DDF539C9097D64A86DD87001FCB9261DB7;
	}
}
// YooAsset.DebugReport YooAsset.YooAssets::GetDebugReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* YooAssets_GetDebugReport_m76E1839C08757D6335A741D657E84471D2516E82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* V_0 = NULL;
	Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* V_2 = NULL;
	{
		// DebugReport report = new DebugReport();
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_0 = (DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D*)il2cpp_codegen_object_new(DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugReport__ctor_m5569E5C90FF7700A571ABA2F4B4D07A320457E43(L_0, NULL);
		V_0 = L_0;
		// report.FrameCount = Time.frameCount;
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_1 = V_0;
		int32_t L_2;
		L_2 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		NullCheck(L_1);
		L_1->___FrameCount_0 = L_2;
		// foreach (var package in _packages)
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_3 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2;
		NullCheck(L_3);
		Enumerator_tC1759427D243FCAA652F1A9DEFE30FC939911827 L_4;
		L_4 = List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E(L_3, List_1_GetEnumerator_m5E5DDC74A42FF8F484CF1334F7A2E934DF3F727E_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB((&V_1), Enumerator_Dispose_mEB061CFDB276750CE338CC0DC50BA6BC8FA973EB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_001e_1:
			{
				// foreach (var package in _packages)
				ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_5;
				L_5 = Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_inline((&V_1), Enumerator_get_Current_m568C535F55FB69987EC91D25A159ED0F22B201C9_RuntimeMethod_var);
				// var packageData = package.GetDebugPackageData();
				NullCheck(L_5);
				DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* L_6;
				L_6 = ResourcePackage_GetDebugPackageData_mAD38FFF02B859916E6D0F09CDC307B94C7B09820(L_5, NULL);
				V_2 = L_6;
				// report.PackageDatas.Add(packageData);
				DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_7 = V_0;
				NullCheck(L_7);
				List_1_t0E950133D5AE7CE75AAFA523B610CD7BC2CF17C6* L_8 = L_7->___PackageDatas_1;
				DebugPackageData_tAC74E09749E23F2CEF7B95B009C511890AEB72C9* L_9 = V_2;
				NullCheck(L_8);
				List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_inline(L_8, L_9, List_1_Add_m3862DC825E6A36DF761CD17216E737FD0659A17F_RuntimeMethod_var);
			}

IL_0037_1:
			{
				// foreach (var package in _packages)
				bool L_10;
				L_10 = Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D((&V_1), Enumerator_MoveNext_mB7075821A757109F11786C98B31FFF868D8EE53D_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// return report;
		DebugReport_t2F8AACB640E9A3E19946C870E83EF27A0C54AB3D* L_11 = V_0;
		return L_11;
	}
}
// System.Void YooAsset.YooAssets::SetDefaultPackage(YooAsset.ResourcePackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_SetDefaultPackage_mB83D34E411C4AB0C42DD9E9CB1992E836BA06328 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _defaultPackage = package;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ___0_package;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void YooAsset.YooAssets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets__cctor_m1B500E6E007DCC1FBBEDB59384C6041AD144C580 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool _isInitialize = false;
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____isInitialize_0 = (bool)0;
		// private static GameObject _driver = null;
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____driver_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private static readonly List<ResourcePackage> _packages = new List<ResourcePackage>();
		List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* L_0 = (List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A*)il2cpp_codegen_object_new(List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728(L_0, List_1__ctor_m805D9AF46F7DBDCA253420C8366FC1BF8055C728_RuntimeMethod_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____packages_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.YooAssetsDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver_Update_m990474D140444AB6B0599A0E562A0941C518005F (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YooAssets.Update();
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_Update_mBEAE2E75143E5E279AA247D6E72F45D3288AC289(NULL);
		// }
		return;
	}
}
// System.Void YooAsset.YooAssetsDriver::DebugCheckDuplicateDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver_DebugCheckDuplicateDriver_mD08D8F69F86927A2C4F01EF2D35C644C06151CEB (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LastestUpdateFrame > 0)
		int32_t L_0 = ((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// if (LastestUpdateFrame == Time.frameCount)
		int32_t L_1 = ((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame_4;
		int32_t L_2;
		L_2 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		// YooLogger.Warning($"There are two {nameof(YooAssetsDriver)} in the scene. Please ensure there is always exactly one driver in the scene.");
		YooLogger_Warning_m0FDCABFC6EB0F423424F5FAB4C63AD86D2142724(_stringLiteral6F01E96250419380D036DBE7005BF02DB2648D96, NULL);
	}

IL_001e:
	{
		// LastestUpdateFrame = Time.frameCount;
		int32_t L_3;
		L_3 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		((YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_StaticFields*)il2cpp_codegen_static_fields_for(YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5_il2cpp_TypeInfo_var))->___LastestUpdateFrame_4 = L_3;
		// }
		return;
	}
}
// System.Void YooAsset.YooAssetsDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssetsDriver__ctor_m354D5C4B4F226C2FB6B5B7E9E19B764A1769438C (YooAssetsDriver_tB0C2B38D94EC1806129CAEA70F4385E5D34F81D5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResourcePackage_get_PackageName_mA6911D7E45684CA013C522F06820B21E884BCD81_inline (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, const RuntimeMethod* method) 
{
	{
		// public string PackageName { private set; get; }
		String_t* L_0 = __this->___U3CPackageNameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
