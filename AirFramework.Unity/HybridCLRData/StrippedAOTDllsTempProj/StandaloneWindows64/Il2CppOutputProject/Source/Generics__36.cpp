﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Int32>>
struct Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115;
// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5;
// System.Action`1<AirFramework.AirTask>
struct Action_1_tFEE92C8D6367FF03298CA126ECFB06EFA6B5EAA5;
// System.Action`1<AirFramework.AirTaskBase>
struct Action_1_t9CFAF6C75D9C578B71B58AC3475E9C79F0FF28E5;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.UIElements.ReusableCollectionItem>
struct Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09;
// System.Action`1<UnityEngine.UIElements.VisualElement>
struct Action_1_t66B514BE877E216616DEDD40416127189FE16FA3;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<UnityEngine.UIElements.VisualElement,System.Int32>
struct Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,AirFramework.ITimeManagedPool>
struct Dictionary_2_tE6047BCAA4DAC1C22011DC8967BC62A77469F80B;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.GeometryChangedEvent>
struct EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerMoveEvent>
struct EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA;
// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerUpEvent>
struct EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<UnityEngine.UIElements.VisualElement>
struct Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
// System.Func`2<System.Char,System.Char>
struct Func_2_t98484B0812610F727324B05DF0039164FD39A4E7;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem>
struct IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>
struct IEnumerable_1_tE925592D6CE31E7FA5349FCEE9007F3DF53409FD;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t067D943FA808557FBA1FBED8EA4E9A1BFCB791B8;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>
struct IEnumerator_1_t4CA3732E083480E40018894623B3C184576E5EFD;
// System.Linq.Enumerable/Iterator`1<System.Char>
struct Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<UnityEngine.UIElements.ReusableCollectionItem>
struct List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// UnityEngine.Pool.ObjectPool`1<System.Object>
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// AirFramework.UnitKeyDynamicDictionary`2<System.Int64,AirFramework.Unit>
struct UnitKeyDynamicDictionary_2_t4E68C854326B297889CB4347C9E1EDD84C6C328C;
// AirFramework.UnitKeyDynamicDictionary`2<System.Type,AirFramework.Unit>
struct UnitKeyDynamicDictionary_2_t3A82C1E7CAE48EB6D48B74ED1E7613876983CF71;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
// UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345;
// AirFramework.View`1<System.Object>
struct View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873;
// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Object>
struct VisualElementScheduledItem_1_tBBBFD9E425D8A2ECE1C614FC867E3D3127B37509;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>
struct WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D;
// Sirenix.Utilities.WeakValueGetter`1<System.Object>
struct WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2;
// Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>
struct WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2;
// Sirenix.Utilities.WeakValueSetter`1<System.Object>
struct WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>
struct WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>
struct WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>
struct WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>
struct WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AirFramework.AirTask
struct AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// YooAsset.AssetOperationHandle
struct AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// AirFramework.Internal.AsyncTreeTokenNode
struct AsyncTreeTokenNode_t30276ED5F4277A1AED2D115DAB4C1D29702AD6DC;
// UnityEngine.UIElements.BaseVerticalCollectionView
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.UIElements.CollectionViewController
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
// UnityEngine.UIElements.CollectionVirtualizationController
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// UnityEngine.UIElements.DefaultDragAndDropClient
struct DefaultDragAndDropClient_t22E34F0CC0902F8BB146736C13745F686C8E8BE3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UIElements.IBinding
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
// UnityEngine.UIElements.ICollectionDragAndDropController
struct ICollectionDragAndDropController_t30018C4F1C5ADA75B5E68B48A7BACE33E851168C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// UnityEngine.UIElements.IStyle
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
// UnityEngine.UIElements.IVisualElementScheduledItem
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// YooAsset.InstantiateOperation
struct InstantiateOperation_t3A3C4296D9763CA01BB3F7C1285B0651AC23E66E;
// UnityEngine.UIElements.KeyboardNavigationManipulator
struct KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3;
// UnityEngine.UIElements.ListViewDragger
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD;
// UnityEngine.UIElements.ListViewDraggerAnimated
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// AirFramework.PoolManager
struct PoolManager_tB7F98065CA12981551D225676813C34D8A2F4067;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.ReusableCollectionItem
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UIElements.ScrollView
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9;
// UnityEngine.UIElements.Scroller
struct Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// AirFramework.UIDGenerator
struct UIDGenerator_t2049FC5B2CD0EBDDCAE4D03F9A2F38443E0520B3;
// AirFramework.View
struct View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualElementPanelActivator
struct VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoolManager_Allocate_TisAirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5_mA597DD40697A744FB92DF4341683A3E76F4226B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIElements.VerticalVirtualizationController`1/<>c<System.Object>
struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E  : public RuntimeObject
{
};

// System.Linq.Enumerable/Iterator`1<System.Char>
struct Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Il2CppChar ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
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

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Pool.ObjectPool`1<System.Object>
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.Pool.ObjectPool`1::m_List
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_List_0;
	// System.Func`1<T> UnityEngine.Pool.ObjectPool`1::m_CreateFunc
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_CreateFunc_1;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnGet
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnGet_2;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnRelease
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnRelease_3;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnDestroy
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnDestroy_4;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_5;
	// System.Boolean UnityEngine.Pool.ObjectPool`1::m_CollectionCheck
	bool ___m_CollectionCheck_6;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_7;
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// UnityEngine.UIElements.CollectionViewController
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVerticalCollectionView UnityEngine.UIElements.CollectionViewController::m_View
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View_0;
	// System.Collections.IList UnityEngine.UIElements.CollectionViewController::m_ItemsSource
	RuntimeObject* ___m_ItemsSource_1;
	// System.Action UnityEngine.UIElements.CollectionViewController::itemsSourceChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged_2;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.UIElements.CollectionViewController::itemIndexChanged
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged_3;
};

// UnityEngine.UIElements.CollectionVirtualizationController
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801  : public RuntimeObject
{
	// UnityEngine.UIElements.ScrollView UnityEngine.UIElements.CollectionVirtualizationController::m_ScrollView
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

// UnityEngine.UIElements.ReusableCollectionItem
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086  : public RuntimeObject
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::<bindableElement>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CbindableElementU3Ek__BackingField_0;
	// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues> UnityEngine.UIElements.ReusableCollectionItem::<animator>k__BackingField
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___U3CanimatorU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.ReusableCollectionItem::<index>k__BackingField
	int32_t ___U3CindexU3Ek__BackingField_2;
	// System.Int32 UnityEngine.UIElements.ReusableCollectionItem::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_3;
	// System.Action`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.ReusableCollectionItem::onGeometryChanged
	Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___onGeometryChanged_4;
	// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.GeometryChangedEvent> UnityEngine.UIElements.ReusableCollectionItem::m_GeometryChangedEventCallback
	EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30* ___m_GeometryChangedEventCallback_5;
};

// UnityEngine.UIElements.ScheduledItem
struct ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0  : public RuntimeObject
{
	// System.Func`1<System.Boolean> UnityEngine.UIElements.ScheduledItem::timerUpdateStopCondition
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___timerUpdateStopCondition_0;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<startMs>k__BackingField
	int64_t ___U3CstartMsU3Ek__BackingField_3;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<delayMs>k__BackingField
	int64_t ___U3CdelayMsU3Ek__BackingField_4;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<intervalMs>k__BackingField
	int64_t ___U3CintervalMsU3Ek__BackingField_5;
	// System.Int64 UnityEngine.UIElements.ScheduledItem::<endTimeMs>k__BackingField
	int64_t ___U3CendTimeMsU3Ek__BackingField_6;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// AirFramework.Unit
struct Unit_t9F7F55F448F3FDF292A55C03ABC5F95F24EFDCD9  : public RuntimeObject
{
	// System.Boolean AirFramework.Unit::_disposed
	bool ____disposed_0;
	// System.Boolean AirFramework.Unit::isDestruction
	bool ___isDestruction_1;
	// System.Int64 AirFramework.Unit::_id
	int64_t ____id_3;
	// AirFramework.UnitKeyDynamicDictionary`2<System.Int64,AirFramework.Unit> AirFramework.Unit::childs
	UnitKeyDynamicDictionary_2_t4E68C854326B297889CB4347C9E1EDD84C6C328C* ___childs_4;
	// AirFramework.UnitKeyDynamicDictionary`2<System.Type,AirFramework.Unit> AirFramework.Unit::components
	UnitKeyDynamicDictionary_2_t3A82C1E7CAE48EB6D48B74ED1E7613876983CF71* ___components_5;
	// System.Boolean AirFramework.Unit::<IsComponent>k__BackingField
	bool ___U3CIsComponentU3Ek__BackingField_6;
	// AirFramework.Unit AirFramework.Unit::<Parent>k__BackingField
	Unit_t9F7F55F448F3FDF292A55C03ABC5F95F24EFDCD9* ___U3CParentU3Ek__BackingField_7;
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

// UnityEngine.UIElements.CustomStyleProperty`1<System.Int32>
struct CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F 
{
	// System.String UnityEngine.UIElements.CustomStyleProperty`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CustomStyleProperty`1
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.UIElements.CustomStyleProperty`1
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Collections.Generic.List`1/Enumerator<System.Char>
struct Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Il2CppChar ____current_3;
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

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>
struct StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345  : public CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801
{
	// UnityEngine.UIElements.BaseVerticalCollectionView UnityEngine.UIElements.VerticalVirtualizationController`1::m_ListView
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_ListView_1;
	// UnityEngine.Pool.ObjectPool`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1::m_Pool
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___m_Pool_2;
	// System.Collections.Generic.List`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1::m_ActiveItems
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ActiveItems_3;
	// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1::m_LastFocusedElementIndex
	int32_t ___m_LastFocusedElementIndex_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UIElements.VerticalVirtualizationController`1::m_LastFocusedElementTreeChildIndexes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_LastFocusedElementTreeChildIndexes_5;
	// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1::m_FirstVisibleIndex
	int32_t ___m_FirstVisibleIndex_6;
	// System.Func`2<T,System.Boolean> UnityEngine.UIElements.VerticalVirtualizationController`1::m_VisibleItemPredicateDelegate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___m_VisibleItemPredicateDelegate_7;
	// System.Collections.Generic.List`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1::m_ScrollInsertionList
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ScrollInsertionList_8;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VerticalVirtualizationController`1::k_EmptyRows
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___k_EmptyRows_9;
};

// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>
struct WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>
struct WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;
};

// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;
};

// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>
struct WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// AirFramework.AbstractModule
struct AbstractModule_tDE3A189282C0D5EFE57D402B3A91E4989A3FDD52  : public Unit_t9F7F55F448F3FDF292A55C03ABC5F95F24EFDCD9
{
};

// AirFramework.AirTaskBuilder
struct AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD 
{
	// AirFramework.AirTask AirFramework.AirTaskBuilder::task
	AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* ___task_0;
};
// Native definition for P/Invoke marshalling of AirFramework.AirTaskBuilder
struct AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD_marshaled_pinvoke
{
	AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* ___task_0;
};
// Native definition for COM marshalling of AirFramework.AirTaskBuilder
struct AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD_marshaled_com
{
	AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* ___task_0;
};

// AirFramework.AirTaskCompleted
struct AirTaskCompleted_tB037A4A97E58BDC8213FC08F38E3307582ECB1C3 
{
	union
	{
		struct
		{
		};
		uint8_t AirTaskCompleted_tB037A4A97E58BDC8213FC08F38E3307582ECB1C3__padding[1];
	};
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
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

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// AirFramework.PoolableObject
struct PoolableObject_tC90C22A50A6DB02CEFE975ABBBEFC0F531D3476D  : public Unit_t9F7F55F448F3FDF292A55C03ABC5F95F24EFDCD9
{
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.UIElements.StyleFloat
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	// System.Single UnityEngine.UIElements.StyleFloat::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFloat::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.UIElements.ListViewDragger/DragPosition
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 
{
	// System.Int32 UnityEngine.UIElements.ListViewDragger/DragPosition::insertAtIndex
	int32_t ___insertAtIndex_0;
	// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDragger/DragPosition::recycledItem
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem_1;
	// UnityEngine.UIElements.DragAndDropPosition UnityEngine.UIElements.ListViewDragger/DragPosition::dragAndDropPosition
	int32_t ___dragAndDropPosition_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ListViewDragger/DragPosition
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_pinvoke
{
	int32_t ___insertAtIndex_0;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem_1;
	int32_t ___dragAndDropPosition_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ListViewDragger/DragPosition
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_com
{
	int32_t ___insertAtIndex_0;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem_1;
	int32_t ___dragAndDropPosition_2;
};

// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A  : public ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::<element>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementU3Ek__BackingField_7;
	// System.Boolean UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::isScheduled
	bool ___isScheduled_8;
	// UnityEngine.UIElements.VisualElementPanelActivator UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::m_Activator
	VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB* ___m_Activator_9;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// AirFramework.View`1/<LoadAsync>d__4<System.Object>
struct U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07 
{
	// System.Int32 AirFramework.View`1/<LoadAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// AirFramework.AirTaskBuilder AirFramework.View`1/<LoadAsync>d__4::<>t__builder
	AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD ___U3CU3Et__builder_1;
	// AirFramework.View`1<T> AirFramework.View`1/<LoadAsync>d__4::<>4__this
	View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* ___U3CU3E4__this_2;
	// YooAsset.InstantiateOperation AirFramework.View`1/<LoadAsync>d__4::<objHandle>5__2
	InstantiateOperation_t3A3C4296D9763CA01BB3F7C1285B0651AC23E66E* ___U3CobjHandleU3E5__2_3;
	// System.Object AirFramework.View`1/<LoadAsync>d__4::<>u__1
	RuntimeObject* ___U3CU3Eu__1_4;
	// AirFramework.AirTaskCompleted AirFramework.View`1/<LoadAsync>d__4::<>u__2
	AirTaskCompleted_tB037A4A97E58BDC8213FC08F38E3307582ECB1C3 ___U3CU3Eu__2_5;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Object>
struct VisualElementScheduledItem_1_tBBBFD9E425D8A2ECE1C614FC867E3D3127B37509  : public BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A
{
	// ActionType UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1::updateEvent
	RuntimeObject* ___updateEvent_10;
};

// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>
struct WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675  : public Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// AirFramework.AirTaskBase
struct AirTaskBase_tAE38FABD5EA0E5592E5CD41AC6316D9672A3C75C  : public PoolableObject_tC90C22A50A6DB02CEFE975ABBBEFC0F531D3476D
{
	// ETaskStatus AirFramework.AirTaskBase::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_8;
	// System.Action AirFramework.AirTaskBase::finish
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___finish_9;
	// System.Action`1<AirFramework.AirTaskBase> AirFramework.AirTaskBase::finishWith
	Action_1_t9CFAF6C75D9C578B71B58AC3475E9C79F0FF28E5* ___finishWith_10;
	// AirFramework.Internal.AsyncTreeTokenNode AirFramework.AirTaskBase::<Token>k__BackingField
	AsyncTreeTokenNode_t30276ED5F4277A1AED2D115DAB4C1D29702AD6DC* ___U3CTokenU3Ek__BackingField_11;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.UIElements.DragEventsProcessor
struct DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6  : public RuntimeObject
{
	// System.Boolean UnityEngine.UIElements.DragEventsProcessor::m_IsRegistered
	bool ___m_IsRegistered_0;
	// UnityEngine.UIElements.DragEventsProcessor/DragState UnityEngine.UIElements.DragEventsProcessor::m_DragState
	int32_t ___m_DragState_1;
	// UnityEngine.Vector3 UnityEngine.UIElements.DragEventsProcessor::m_Start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Start_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.DragEventsProcessor::m_Target
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target_3;
	// UnityEngine.UIElements.DefaultDragAndDropClient UnityEngine.UIElements.DragEventsProcessor::dragAndDropClient
	DefaultDragAndDropClient_t22E34F0CC0902F8BB146736C13745F686C8E8BE3* ___dragAndDropClient_4;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
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

// AirFramework.PoolManager
struct PoolManager_tB7F98065CA12981551D225676813C34D8A2F4067  : public AbstractModule_tDE3A189282C0D5EFE57D402B3A91E4989A3FDD52
{
	// System.Collections.Generic.Dictionary`2<System.Type,AirFramework.ITimeManagedPool> AirFramework.PoolManager::pools
	Dictionary_2_tE6047BCAA4DAC1C22011DC8967BC62A77469F80B* ___pools_8;
	// System.Single AirFramework.PoolManager::DefaultRecycleCycleTime
	float ___DefaultRecycleCycleTime_9;
	// System.Single AirFramework.PoolManager::DefaultRecycleRatio
	float ___DefaultRecycleRatio_10;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localTransformScaleZero
	bool ___localTransformScaleZero_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_17;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_21;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_26;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_38;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UIElements.StyleLength
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_1;
};

// AirFramework.View
struct View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E  : public PoolableObject_tC90C22A50A6DB02CEFE975ABBBEFC0F531D3476D
{
	// System.Boolean AirFramework.View::<IsLoaded>k__BackingField
	bool ___U3CIsLoadedU3Ek__BackingField_9;
	// System.Boolean AirFramework.View::<IsLoading>k__BackingField
	bool ___U3CIsLoadingU3Ek__BackingField_10;
	// System.Boolean AirFramework.View::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_11;
};

// System.Numerics.Vector`1/VectorSizeHelper<System.UInt64>
struct VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D 
{
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1/VectorSizeHelper::_placeholder
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ____placeholder_0;
	// System.Byte System.Numerics.Vector`1/VectorSizeHelper::_byte
	uint8_t ____byte_1;
};

// AirFramework.View`1<System.Object>
struct View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873  : public View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E
{
	// T AirFramework.View`1::<Refs>k__BackingField
	RuntimeObject* ___U3CRefsU3Ek__BackingField_12;
};

// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// AirFramework.AirTask
struct AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5  : public AirTaskBase_tAE38FABD5EA0E5592E5CD41AC6316D9672A3C75C
{
	// System.Action AirFramework.AirTask::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_12;
	// System.Action`1<AirFramework.AirTask> AirFramework.AirTask::_callback
	Action_1_tFEE92C8D6367FF03298CA126ECFB06EFA6B5EAA5* ____callback_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UIElements.ListViewDragger
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD  : public DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6
{
	// UnityEngine.UIElements.ListViewDragger/DragPosition UnityEngine.UIElements.ListViewDragger::m_LastDragPosition
	DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 ___m_LastDragPosition_5;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ListViewDragger::m_DragHoverBar
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverBar_6;
	// UnityEngine.UIElements.ICollectionDragAndDropController UnityEngine.UIElements.ListViewDragger::<dragAndDropController>k__BackingField
	RuntimeObject* ___U3CdragAndDropControllerU3Ek__BackingField_7;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Char,System.Char>
struct Func_2_t98484B0812610F727324B05DF0039164FD39A4E7  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>
struct WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D  : public MulticastDelegate_t
{
};

// Sirenix.Utilities.WeakValueGetter`1<System.Object>
struct WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>
struct WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2  : public MulticastDelegate_t
{
};

// Sirenix.Utilities.WeakValueSetter`1<System.Object>
struct WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BindableElement
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.IBinding UnityEngine.UIElements.BindableElement::<binding>k__BackingField
	RuntimeObject* ___U3CbindingU3Ek__BackingField_65;
	// System.String UnityEngine.UIElements.BindableElement::<bindingPath>k__BackingField
	String_t* ___U3CbindingPathU3Ek__BackingField_66;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.UIElements.ListViewDraggerAnimated
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5  : public ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD
{
	// System.Int32 UnityEngine.UIElements.ListViewDraggerAnimated::m_DragStartIndex
	int32_t ___m_DragStartIndex_8;
	// System.Int32 UnityEngine.UIElements.ListViewDraggerAnimated::m_CurrentIndex
	int32_t ___m_CurrentIndex_9;
	// System.Single UnityEngine.UIElements.ListViewDraggerAnimated::m_SelectionHeight
	float ___m_SelectionHeight_10;
	// System.Single UnityEngine.UIElements.ListViewDraggerAnimated::m_LocalOffsetOnStart
	float ___m_LocalOffsetOnStart_11;
	// UnityEngine.Vector3 UnityEngine.UIElements.ListViewDraggerAnimated::m_CurrentPointerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CurrentPointerPosition_12;
	// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDraggerAnimated::m_Item
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_Item_13;
	// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDraggerAnimated::m_OffsetItem
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_OffsetItem_14;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.UIElements.ScrollView
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.ScrollerVisibility UnityEngine.UIElements.ScrollView::m_HorizontalScrollerVisibility
	int32_t ___m_HorizontalScrollerVisibility_65;
	// UnityEngine.UIElements.ScrollerVisibility UnityEngine.UIElements.ScrollView::m_VerticalScrollerVisibility
	int32_t ___m_VerticalScrollerVisibility_66;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_AttachedRootVisualContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_AttachedRootVisualContainer_67;
	// System.Single UnityEngine.UIElements.ScrollView::m_SingleLineHeight
	float ___m_SingleLineHeight_68;
	// System.Boolean UnityEngine.UIElements.ScrollView::m_MouseWheelScrollSizeIsInline
	bool ___m_MouseWheelScrollSizeIsInline_69;
	// System.Single UnityEngine.UIElements.ScrollView::m_HorizontalPageSize
	float ___m_HorizontalPageSize_70;
	// System.Single UnityEngine.UIElements.ScrollView::m_VerticalPageSize
	float ___m_VerticalPageSize_71;
	// System.Single UnityEngine.UIElements.ScrollView::m_MouseWheelScrollSize
	float ___m_MouseWheelScrollSize_72;
	// System.Single UnityEngine.UIElements.ScrollView::m_ScrollDecelerationRate
	float ___m_ScrollDecelerationRate_74;
	// System.Single UnityEngine.UIElements.ScrollView::m_Elasticity
	float ___m_Elasticity_76;
	// UnityEngine.UIElements.ScrollView/TouchScrollBehavior UnityEngine.UIElements.ScrollView::m_TouchScrollBehavior
	int32_t ___m_TouchScrollBehavior_77;
	// UnityEngine.UIElements.ScrollView/NestedInteractionKind UnityEngine.UIElements.ScrollView::m_NestedInteractionKind
	int32_t ___m_NestedInteractionKind_78;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::<contentViewport>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontentViewportU3Ek__BackingField_79;
	// UnityEngine.UIElements.Scroller UnityEngine.UIElements.ScrollView::<horizontalScroller>k__BackingField
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3ChorizontalScrollerU3Ek__BackingField_80;
	// UnityEngine.UIElements.Scroller UnityEngine.UIElements.ScrollView::<verticalScroller>k__BackingField
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3CverticalScrollerU3Ek__BackingField_81;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_ContentContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentContainer_82;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_ContentAndVerticalScrollContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentAndVerticalScrollContainer_83;
	// UnityEngine.UIElements.ScrollViewMode UnityEngine.UIElements.ScrollView::m_Mode
	int32_t ___m_Mode_94;
	// System.Int32 UnityEngine.UIElements.ScrollView::m_ScrollingPointerId
	int32_t ___m_ScrollingPointerId_95;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_StartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_StartPosition_96;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_PointerStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartPosition_97;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_98;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_SpringBackVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SpringBackVelocity_99;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_LowBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LowBounds_100;
	// UnityEngine.Vector2 UnityEngine.UIElements.ScrollView::m_HighBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_HighBounds_101;
	// System.Single UnityEngine.UIElements.ScrollView::m_LastVelocityLerpTime
	float ___m_LastVelocityLerpTime_102;
	// System.Boolean UnityEngine.UIElements.ScrollView::m_StartedMoving
	bool ___m_StartedMoving_103;
	// System.Boolean UnityEngine.UIElements.ScrollView::m_TouchStoppedVelocity
	bool ___m_TouchStoppedVelocity_104;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::m_CapturedTarget
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CapturedTarget_105;
	// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerMoveEvent> UnityEngine.UIElements.ScrollView::m_CapturedTargetPointerMoveCallback
	EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA* ___m_CapturedTargetPointerMoveCallback_106;
	// UnityEngine.UIElements.EventCallback`1<UnityEngine.UIElements.PointerUpEvent> UnityEngine.UIElements.ScrollView::m_CapturedTargetPointerUpCallback
	EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913* ___m_CapturedTargetPointerUpCallback_107;
	// UnityEngine.UIElements.IVisualElementScheduledItem UnityEngine.UIElements.ScrollView::m_PostPointerUpAnimation
	RuntimeObject* ___m_PostPointerUpAnimation_108;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.UIElements.BaseVerticalCollectionView
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Object>> UnityEngine.UIElements.BaseVerticalCollectionView::onItemsChosen
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___onItemsChosen_67;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Object>> UnityEngine.UIElements.BaseVerticalCollectionView::onSelectionChange
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___onSelectionChange_68;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.Int32>> UnityEngine.UIElements.BaseVerticalCollectionView::onSelectedIndicesChange
	Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115* ___onSelectedIndicesChange_69;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::itemIndexChanged
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged_70;
	// System.Action UnityEngine.UIElements.BaseVerticalCollectionView::itemsSourceChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged_71;
	// System.Func`2<System.Int32,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_GetItemId
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___m_GetItemId_72;
	// System.Func`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.BaseVerticalCollectionView::m_MakeItem
	Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2* ___m_MakeItem_73;
	// System.Action`2<UnityEngine.UIElements.VisualElement,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_BindItem
	Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* ___m_BindItem_74;
	// System.Action`2<UnityEngine.UIElements.VisualElement,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::<unbindItem>k__BackingField
	Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* ___U3CunbindItemU3Ek__BackingField_75;
	// System.Action`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.BaseVerticalCollectionView::<destroyItem>k__BackingField
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___U3CdestroyItemU3Ek__BackingField_76;
	// UnityEngine.UIElements.SelectionType UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectionType
	int32_t ___m_SelectionType_77;
	// System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::m_HorizontalScrollingEnabled
	bool ___m_HorizontalScrollingEnabled_79;
	// UnityEngine.UIElements.AlternatingRowBackground UnityEngine.UIElements.BaseVerticalCollectionView::m_ShowAlternatingRowBackgrounds
	int32_t ___m_ShowAlternatingRowBackgrounds_80;
	// System.Single UnityEngine.UIElements.BaseVerticalCollectionView::m_FixedItemHeight
	float ___m_FixedItemHeight_82;
	// System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::m_ItemHeightIsInline
	bool ___m_ItemHeightIsInline_83;
	// UnityEngine.UIElements.CollectionVirtualizationMethod UnityEngine.UIElements.BaseVerticalCollectionView::m_VirtualizationMethod
	int32_t ___m_VirtualizationMethod_84;
	// UnityEngine.UIElements.ScrollView UnityEngine.UIElements.BaseVerticalCollectionView::m_ScrollView
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView_85;
	// UnityEngine.UIElements.CollectionViewController UnityEngine.UIElements.BaseVerticalCollectionView::m_ViewController
	CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* ___m_ViewController_86;
	// UnityEngine.UIElements.CollectionVirtualizationController UnityEngine.UIElements.BaseVerticalCollectionView::m_VirtualizationController
	CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* ___m_VirtualizationController_87;
	// UnityEngine.UIElements.KeyboardNavigationManipulator UnityEngine.UIElements.BaseVerticalCollectionView::m_NavigationManipulator
	KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3* ___m_NavigationManipulator_88;
	// UnityEngine.Vector2 UnityEngine.UIElements.BaseVerticalCollectionView::m_ScrollOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollOffset_89;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectedIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIds_90;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectedIndices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIndices_91;
	// System.Collections.Generic.List`1<System.Object> UnityEngine.UIElements.BaseVerticalCollectionView::m_SelectedItems
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_SelectedItems_92;
	// System.Single UnityEngine.UIElements.BaseVerticalCollectionView::m_LastHeight
	float ___m_LastHeight_93;
	// System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::m_IsRangeSelectionDirectionUp
	bool ___m_IsRangeSelectionDirectionUp_94;
	// UnityEngine.UIElements.ListViewDragger UnityEngine.UIElements.BaseVerticalCollectionView::m_Dragger
	ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* ___m_Dragger_95;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::m_ItemIndexChangedCallback
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___m_ItemIndexChangedCallback_97;
	// System.Action UnityEngine.UIElements.BaseVerticalCollectionView::m_ItemsSourceChangedCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_ItemsSourceChangedCallback_98;
	// UnityEngine.Vector3 UnityEngine.UIElements.BaseVerticalCollectionView::m_TouchDownPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TouchDownPosition_108;
};

// UnityEngine.UIElements.VerticalVirtualizationController`1/<>c<System.Object>
struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields
{
	// UnityEngine.UIElements.VerticalVirtualizationController`1/<>c<T> UnityEngine.UIElements.VerticalVirtualizationController`1/<>c::<>9
	U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* ___U3CU3E9_0;
	// System.Func`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1/<>c::<>9__25_0
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__25_0_1;
	// System.Action`1<T> UnityEngine.UIElements.VerticalVirtualizationController`1/<>c::<>9__25_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__25_1_2;
};

// UnityEngine.UIElements.VerticalVirtualizationController`1/<>c<System.Object>

// System.Linq.Enumerable/Iterator`1<System.Char>

// System.Linq.Enumerable/Iterator`1<System.Char>

// System.Linq.Enumerable/Iterator`1<System.Object>

// System.Linq.Enumerable/Iterator`1<System.Object>

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Char>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>

// UnityEngine.Pool.ObjectPool`1<System.Object>

// UnityEngine.Pool.ObjectPool`1<System.Object>

// UnityEngine.UIElements.CollectionViewController

// UnityEngine.UIElements.CollectionViewController

// UnityEngine.UIElements.CollectionVirtualizationController

// UnityEngine.UIElements.CollectionVirtualizationController

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Globalization.NumberFormatInfo

// UnityEngine.UIElements.ReusableCollectionItem

// UnityEngine.UIElements.ReusableCollectionItem

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Collections.Generic.List`1/Enumerator<System.Char>

// System.Collections.Generic.List`1/Enumerator<System.Char>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>

// UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>

// UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>

// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>

// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// AirFramework.AirTaskBuilder

// AirFramework.AirTaskBuilder

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// UnityEngine.UIElements.Focusable

// UnityEngine.UIElements.Focusable

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Rect

// UnityEngine.Rect

// System.Numerics.Register

// System.Numerics.Register

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// UnityEngine.UIElements.StyleFloat

// UnityEngine.UIElements.StyleFloat

// UnityEngine.UIElements.StyleSelectorPart

// UnityEngine.UIElements.StyleSelectorPart

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// System.Void

// System.Void

// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem

// UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem

// UnityEngine.UIElements.VisualElement/Hierarchy

// UnityEngine.UIElements.VisualElement/Hierarchy

// AirFramework.View`1/<LoadAsync>d__4<System.Object>

// AirFramework.View`1/<LoadAsync>d__4<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>

// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Object>

// UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Object>

// System.Linq.Enumerable/WhereListIterator`1<System.Object>

// System.Linq.Enumerable/WhereListIterator`1<System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>

// System.Delegate

// System.Delegate

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// AirFramework.PoolManager

// AirFramework.PoolManager

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.UIElements.StyleLength

// UnityEngine.UIElements.StyleLength

// AirFramework.View
struct View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E_StaticFields
{
	// YooAsset.AssetOperationHandle AirFramework.View::prefabHandle
	AssetOperationHandle_t3C4EE34040385828202FA37D72CC91D7668FB32B* ___prefabHandle_8;
};

// AirFramework.View

// System.Numerics.Vector`1/VectorSizeHelper<System.UInt64>

// System.Numerics.Vector`1/VectorSizeHelper<System.UInt64>

// AirFramework.View`1<System.Object>

// AirFramework.View`1<System.Object>

// System.WeakReference`1<System.Object>

// System.WeakReference`1<System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// AirFramework.AirTask
struct AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5_StaticFields
{
	// AirFramework.AirTaskCompleted AirFramework.AirTask::completedTask
	AirTaskCompleted_tB037A4A97E58BDC8213FC08F38E3307582ECB1C3 ___completedTask_14;
};

// AirFramework.AirTask

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.UIElements.ListViewDragger

// UnityEngine.UIElements.ListViewDragger

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// UnityEngine.UIElements.VisualElement

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`1<System.Object>

// System.Func`1<System.Object>

// System.Func`2<System.Char,System.Boolean>

// System.Func`2<System.Char,System.Boolean>

// System.Func`2<System.Char,System.Char>

// System.Func`2<System.Char,System.Char>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>

// Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>

// Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>

// Sirenix.Utilities.WeakValueGetter`1<System.Object>

// Sirenix.Utilities.WeakValueGetter`1<System.Object>

// Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>

// Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>

// Sirenix.Utilities.WeakValueSetter`1<System.Object>

// Sirenix.Utilities.WeakValueSetter`1<System.Object>

// System.AsyncCallback

// System.AsyncCallback

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// UnityEngine.UIElements.ListViewDraggerAnimated

// UnityEngine.UIElements.ListViewDraggerAnimated

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.UIElements.ScrollView
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9_StaticFields
{
	// System.Single UnityEngine.UIElements.ScrollView::k_DefaultScrollDecelerationRate
	float ___k_DefaultScrollDecelerationRate_73;
	// System.Single UnityEngine.UIElements.ScrollView::k_DefaultElasticity
	float ___k_DefaultElasticity_75;
	// System.String UnityEngine.UIElements.ScrollView::ussClassName
	String_t* ___ussClassName_84;
	// System.String UnityEngine.UIElements.ScrollView::viewportUssClassName
	String_t* ___viewportUssClassName_85;
	// System.String UnityEngine.UIElements.ScrollView::contentAndVerticalScrollUssClassName
	String_t* ___contentAndVerticalScrollUssClassName_86;
	// System.String UnityEngine.UIElements.ScrollView::contentUssClassName
	String_t* ___contentUssClassName_87;
	// System.String UnityEngine.UIElements.ScrollView::hScrollerUssClassName
	String_t* ___hScrollerUssClassName_88;
	// System.String UnityEngine.UIElements.ScrollView::vScrollerUssClassName
	String_t* ___vScrollerUssClassName_89;
	// System.String UnityEngine.UIElements.ScrollView::horizontalVariantUssClassName
	String_t* ___horizontalVariantUssClassName_90;
	// System.String UnityEngine.UIElements.ScrollView::verticalVariantUssClassName
	String_t* ___verticalVariantUssClassName_91;
	// System.String UnityEngine.UIElements.ScrollView::verticalHorizontalVariantUssClassName
	String_t* ___verticalHorizontalVariantUssClassName_92;
	// System.String UnityEngine.UIElements.ScrollView::scrollVariantUssClassName
	String_t* ___scrollVariantUssClassName_93;
};

// UnityEngine.UIElements.ScrollView

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.UIElements.BaseVerticalCollectionView
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.BaseVerticalCollectionView::k_EmptyItems
	List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7* ___k_EmptyItems_78;
	// System.Int32 UnityEngine.UIElements.BaseVerticalCollectionView::s_DefaultItemHeight
	int32_t ___s_DefaultItemHeight_81;
	// UnityEngine.UIElements.CustomStyleProperty`1<System.Int32> UnityEngine.UIElements.BaseVerticalCollectionView::s_ItemHeightProperty
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___s_ItemHeightProperty_96;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::ussClassName
	String_t* ___ussClassName_99;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::borderUssClassName
	String_t* ___borderUssClassName_100;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemUssClassName
	String_t* ___itemUssClassName_101;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::dragHoverBarUssClassName
	String_t* ___dragHoverBarUssClassName_102;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemDragHoverUssClassName
	String_t* ___itemDragHoverUssClassName_103;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemSelectedVariantUssClassName
	String_t* ___itemSelectedVariantUssClassName_104;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::itemAlternativeBackgroundUssClassName
	String_t* ___itemAlternativeBackgroundUssClassName_105;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::listScrollViewUssClassName
	String_t* ___listScrollViewUssClassName_106;
	// System.String UnityEngine.UIElements.BaseVerticalCollectionView::backgroundFillUssClassName
	String_t* ___backgroundFillUssClassName_107;
};

// UnityEngine.UIElements.BaseVerticalCollectionView
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 m_Items[1];

	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
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


// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Numerics.Register&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
// T System.Numerics.Vector`1<System.UInt64>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector`1<System.UInt64>::Equals(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector`1<System.UInt64>::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_gshared_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Vector`1<System.UInt64>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector`1<System.UInt64>::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector`1<System.UInt64>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared (int32_t ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_m7A1EC217638144ACB4F5B46031846AAA3FACEFE5_gshared (StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC ___0_lhs, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void AirFramework.AirTaskBuilder::Start<AirFramework.View`1/<LoadAsync>d__4<System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AirTaskBuilder_Start_TisU3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07_m5A0D848C3E4CF04FA3F65DBC4FA589F6B3B852AC_gshared_inline (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* __this, U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07* ___0_stateMachine, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Char>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Char>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2_gshared (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// T AirFramework.PoolManager::Allocate<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoolManager_Allocate_TisRuntimeObject_m29C20C8F70B982E138668FAF8FECCAD8A47F9C91_gshared (PoolManager_tB7F98065CA12981551D225676813C34D8A2F4067* __this, const RuntimeMethod* method) ;
// System.Void AirFramework.View`1/<LoadAsync>d__4<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__4_MoveNext_m4815F1907A7C9BA124E0782A582F0F6E7D068D6B_gshared (U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07* __this, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector::get_IsHardwareAccelerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(T)
inline void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, uint64_t, const RuntimeMethod*))Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6_gshared)(__this, ___0_value, method);
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Void*,System.Int32)
inline void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, void*, int32_t, const RuntimeMethod*))Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B_gshared)(__this, ___0_dataPointer, ___1_offset, method);
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Void*)
inline void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, void*, const RuntimeMethod*))Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA_gshared)(__this, ___0_dataPointer, method);
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Numerics.Register&)
inline void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared)(__this, ___0_existingRegister, method);
}
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T System.Numerics.Vector`1<System.UInt64>::get_Item(System.Int32)
inline uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Numerics.Vector`1<System.UInt64>::Equals(System.Numerics.Vector`1<T>)
inline bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, const RuntimeMethod*))Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_gshared)(__this, ___0_other, method);
}
// System.Boolean System.Numerics.Vector`1<System.UInt64>::Equals(System.Object)
inline bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, RuntimeObject*, const RuntimeMethod*))Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_gshared_inline)(__this, ___0_obj, method);
}
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
// System.Int32 System.SByte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF (int8_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Vector`1<System.UInt64>::GetHashCode()
inline int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, const RuntimeMethod*))Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Numerics.Vector`1<System.UInt64>::ToString(System.String,System.IFormatProvider)
inline String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, String_t*, RuntimeObject*, const RuntimeMethod*))Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C_gshared)(__this, ___0_format, ___1_formatProvider, method);
}
// System.String System.Numerics.Vector`1<System.UInt64>::ToString()
inline String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, const RuntimeMethod*))Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Byte System.Numerics.ConstantHelper::GetByteWithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
// System.SByte System.Numerics.ConstantHelper::GetSByteWithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
// System.UInt16 System.Numerics.ConstantHelper::GetUInt16WithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
// System.Int16 System.Numerics.ConstantHelper::GetInt16WithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
// System.UInt32 System.Numerics.ConstantHelper::GetUInt32WithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
// System.Int32 System.Numerics.ConstantHelper::GetInt32WithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
// System.UInt64 System.Numerics.ConstantHelper::GetUInt64WithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
// System.Int64 System.Numerics.ConstantHelper::GetInt64WithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
// System.Single System.Numerics.ConstantHelper::GetSingleWithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
// System.Double System.Numerics.ConstantHelper::GetDoubleWithAllBitsSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
// UnityEngine.UIElements.ListViewDragger UnityEngine.UIElements.BaseVerticalCollectionView::get_dragger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.ListViewDraggerAnimated::get_isDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4 (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.ReusableCollectionItem::get_index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.ReusableCollectionItem UnityEngine.UIElements.ListViewDraggerAnimated::get_draggedItem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::op_Implicit(T)
inline StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030 (int32_t ___0_v, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared)(___0_v, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
inline bool StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD (StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___0_lhs, StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69, StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69, const RuntimeMethod*))StyleEnum_1_op_Equality_m7A1EC217638144ACB4F5B46031846AAA3FACEFE5_gshared)(___0_lhs, ___1_rhs, method);
}
// System.Single UnityEngine.UIElements.BaseVerticalCollectionView::get_lastHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// UnityEngine.UIElements.ScrollView UnityEngine.UIElements.BaseVerticalCollectionView::get_scrollView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.CollectionVirtualizationController::.ctor(UnityEngine.UIElements.ScrollView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2 (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* __this, ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___0_scrollView, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::AddToClassList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.BaseVerticalCollectionView::HasValidDataAndBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseVerticalCollectionView_HasValidDataAndBindings_mC01F3E931D8CD108ED1DD6CA81F524DA81CBD3BC (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.CollectionViewController UnityEngine.UIElements.BaseVerticalCollectionView::get_viewController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Collections.IList UnityEngine.UIElements.BaseVerticalCollectionView::get_itemsSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496 (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.ReusableCollectionItem::set_index(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.AlternatingRowBackground UnityEngine.UIElements.BaseVerticalCollectionView::get_showAlternatingRowBackgrounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::EnableInClassList(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, bool ___1_enable, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.ReusableCollectionItem::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.VisualElement::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::BringToFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::PlaceBehind(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_sibling, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::SendToBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement::FindElementInTree(UnityEngine.UIElements.VisualElement,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_outChildIndexes, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___0_index, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::ElementAtTreePath(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_childIndexes, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ScrollView::get_contentViewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::RemoveFromHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_child, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleFloat::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB (float ___0_v, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleLength::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019 (float ___0_v, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// AirFramework.AirTaskBuilder AirFramework.AirTaskBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD AirTaskBuilder_Create_m1BF3443860D8D1F23E5D5ED9DD7751C15B72418F_inline (const RuntimeMethod* method) ;
// System.Void AirFramework.AirTaskBuilder::Start<AirFramework.View`1/<LoadAsync>d__4<System.Object>>(TStateMachine&)
inline void AirTaskBuilder_Start_TisU3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07_m5A0D848C3E4CF04FA3F65DBC4FA589F6B3B852AC_inline (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* __this, U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD*, U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07*, const RuntimeMethod*))AirTaskBuilder_Start_TisU3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07_m5A0D848C3E4CF04FA3F65DBC4FA589F6B3B852AC_gshared_inline)(__this, ___0_stateMachine, method);
}
// AirFramework.AirTask AirFramework.AirTaskBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* AirTaskBuilder_get_Task_m1034753330CC186D831CFC05D7A62D5491BE5FC3_inline (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* __this, const RuntimeMethod* method) ;
// System.Void AirFramework.View::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void View_set_IsShowing_mCA498626D4899DE14D575CEABC94DFDC7B094EF7_inline (View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean AirFramework.View::get_IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool View_get_IsLoaded_mA0F887EF16C00AE58926D01E5818B3B0A4EA1BFE_inline (View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void AirFramework.View::set_IsLoaded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void View_set_IsLoaded_mAAC2024DE1A012152BE2F3A18F0D040DBFF0C774_inline (View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void AirFramework.View::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View__ctor_mF9DF524A40B3E01FDC5E98025BCFF8B73FA7C4A3 (View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement/BaseVisualElementScheduledItem::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68 (BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_handler, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Char>::get_Current()
inline Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*, const RuntimeMethod*))Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Char>::MoveNext()
inline bool Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2 (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*, const RuntimeMethod*))Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
// AirFramework.PoolManager AirFramework.Framework::get_Pool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolManager_tB7F98065CA12981551D225676813C34D8A2F4067* Framework_get_Pool_m51764312966AB27B1B4B7728BB1D7E5D7A61B8AC (const RuntimeMethod* method) ;
// T AirFramework.PoolManager::Allocate<AirFramework.AirTask>()
inline AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* PoolManager_Allocate_TisAirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5_mA597DD40697A744FB92DF4341683A3E76F4226B0 (PoolManager_tB7F98065CA12981551D225676813C34D8A2F4067* __this, const RuntimeMethod* method)
{
	return ((  AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* (*) (PoolManager_tB7F98065CA12981551D225676813C34D8A2F4067*, const RuntimeMethod*))PoolManager_Allocate_TisRuntimeObject_m29C20C8F70B982E138668FAF8FECCAD8A47F9C91_gshared)(__this, method);
}
// System.Void AirFramework.AirTaskBuilder::.ctor(AirFramework.AirTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AirTaskBuilder__ctor_m5ABAC4F308CC870A501280A6DA1CF07322F033AB_inline (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* __this, AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* ___0_task, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void AirFramework.View`1/<LoadAsync>d__4<System.Object>::MoveNext()
inline void U3CLoadAsyncU3Ed__4_MoveNext_m4815F1907A7C9BA124E0782A582F0F6E7D068D6B (U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07*, const RuntimeMethod*))U3CLoadAsyncU3Ed__4_MoveNext_m4815F1907A7C9BA124E0782A582F0F6E7D068D6B_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Numerics.Vector`1<System.UInt64>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_mC75C8C6E913E7FF8A3D10467D6DADE41711EF3CC_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_count_1;
		return L_0;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector`1<System.UInt64>::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_get_Zero_m052680C155E15387C16A5E044176ACB59DF53359_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_zero_2;
		return L_0;
	}
}
// System.Int32 System.Numerics.Vector`1<System.UInt64>::InitializeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	VectorSizeHelper_tF54ACCE947CB8A38047BEB642392A4E7345A157D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B19_0 = 0;
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* L_0 = (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)(&(&V_0)->____placeholder_0);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register_0);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0_0);
		V_1 = (uint8_t*)((uintptr_t)L_2);
		uint8_t* L_3 = (uint8_t*)(&(&V_0)->____byte_1);
		uint8_t* L_4 = V_1;
		V_2 = (-1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		G_B1_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
		if (!L_9)
		{
			G_B2_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
			goto IL_0045;
		}
	}
	{
		V_2 = 1;
		G_B21_0 = G_B1_0;
		goto IL_0176;
	}

IL_0045:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		G_B3_0 = G_B2_0;
		if (!L_14)
		{
			G_B4_0 = G_B2_0;
			goto IL_0067;
		}
	}
	{
		V_2 = 1;
		G_B21_0 = G_B3_0;
		goto IL_0176;
	}

IL_0067:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		G_B5_0 = G_B4_0;
		if (!L_19)
		{
			G_B6_0 = G_B4_0;
			goto IL_0089;
		}
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B7_0 = G_B6_0;
		if (!L_24)
		{
			G_B8_0 = G_B6_0;
			goto IL_00ab;
		}
	}
	{
		V_2 = 2;
		G_B21_0 = G_B7_0;
		goto IL_0176;
	}

IL_00ab:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		G_B9_0 = G_B8_0;
		if (!L_29)
		{
			G_B10_0 = G_B8_0;
			goto IL_00cd;
		}
	}
	{
		V_2 = 4;
		G_B21_0 = G_B9_0;
		goto IL_0176;
	}

IL_00cd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		G_B11_0 = G_B10_0;
		if (!L_34)
		{
			G_B12_0 = G_B10_0;
			goto IL_00ef;
		}
	}
	{
		V_2 = 4;
		G_B21_0 = G_B11_0;
		goto IL_0176;
	}

IL_00ef:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		G_B13_0 = G_B12_0;
		if (!L_39)
		{
			G_B14_0 = G_B12_0;
			goto IL_010e;
		}
	}
	{
		V_2 = 8;
		G_B21_0 = G_B13_0;
		goto IL_0176;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		G_B15_0 = G_B14_0;
		if (!L_44)
		{
			G_B16_0 = G_B14_0;
			goto IL_012d;
		}
	}
	{
		V_2 = 8;
		G_B21_0 = G_B15_0;
		goto IL_0176;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		G_B17_0 = G_B16_0;
		if (!L_49)
		{
			G_B18_0 = G_B16_0;
			goto IL_014c;
		}
	}
	{
		V_2 = 4;
		G_B21_0 = G_B17_0;
		goto IL_0176;
	}

IL_014c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		G_B19_0 = G_B18_0;
		if (!L_54)
		{
			G_B20_0 = G_B18_0;
			goto IL_016b;
		}
	}
	{
		V_2 = 8;
		G_B21_0 = G_B19_0;
		goto IL_0176;
	}

IL_016b:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_55 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_55);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_InitializeCount_mE29E088973A17B81B830C30831075135FC8E263A_RuntimeMethod_var)));
	}

IL_0176:
	{
		int32_t L_56 = V_2;
		return ((int32_t)(G_B21_0/L_56));
	}
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_6 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_7 = (uint8_t*)(&L_6->___byte_0_0);
		V_1 = L_7;
		uint8_t* L_8 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_8);
		V_2 = 0;
		goto IL_0052;
	}

IL_003f:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_2;
		uint64_t L_11 = ___0_value;
		uint64_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_12);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10))) = (int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_13, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0052:
	{
		int32_t L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_16;
		L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_005e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_00b3;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_22 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_23 = (int8_t*)(&L_22->___sbyte_0_16);
		V_4 = L_23;
		int8_t* L_24 = V_4;
		V_3 = (int8_t*)((uintptr_t)L_24);
		V_5 = 0;
		goto IL_00a5;
	}

IL_008f:
	{
		int8_t* L_25 = V_3;
		int32_t L_26 = V_5;
		uint64_t L_27 = ___0_value;
		uint64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_28);
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26))) = (int8_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_29, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a5:
	{
		int32_t L_31 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_32;
		L_32 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_008f;
		}
	}
	{
		V_4 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00b3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_010d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_38 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_39 = (uint16_t*)(&L_38->___uint16_0_32);
		V_7 = L_39;
		uint16_t* L_40 = V_7;
		V_6 = (uint16_t*)((uintptr_t)L_40);
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_41 = V_6;
		int32_t L_42 = V_8;
		uint64_t L_43 = ___0_value;
		uint64_t L_44 = L_43;
		RuntimeObject* L_45 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_44);
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), 2))))) = (int16_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_45, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00ff:
	{
		int32_t L_47 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_48;
		L_48 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00e5;
		}
	}
	{
		V_7 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_010d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_0167;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_54 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_55 = (int16_t*)(&L_54->___int16_0_40);
		V_10 = L_55;
		int16_t* L_56 = V_10;
		V_9 = (int16_t*)((uintptr_t)L_56);
		V_11 = 0;
		goto IL_0159;
	}

IL_013f:
	{
		int16_t* L_57 = V_9;
		int32_t L_58 = V_11;
		uint64_t L_59 = ___0_value;
		uint64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_60);
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 2))))) = (int16_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_61, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		int32_t L_62 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0159:
	{
		int32_t L_63 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_64;
		L_64 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_013f;
		}
	}
	{
		V_10 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0167:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_68, NULL);
		if (!L_69)
		{
			goto IL_01c1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_70 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_71 = (uint32_t*)(&L_70->___uint32_0_48);
		V_13 = L_71;
		uint32_t* L_72 = V_13;
		V_12 = (uint32_t*)((uintptr_t)L_72);
		V_14 = 0;
		goto IL_01b3;
	}

IL_0199:
	{
		uint32_t* L_73 = V_12;
		int32_t L_74 = V_14;
		uint64_t L_75 = ___0_value;
		uint64_t L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_76);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_73, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_74), 4))))) = (int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_77, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		int32_t L_78 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01b3:
	{
		int32_t L_79 = V_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_80;
		L_80 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0199;
		}
	}
	{
		V_13 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_021b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_86 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_87 = (int32_t*)(&L_86->___int32_0_52);
		V_16 = L_87;
		int32_t* L_88 = V_16;
		V_15 = (int32_t*)((uintptr_t)L_88);
		V_17 = 0;
		goto IL_020d;
	}

IL_01f3:
	{
		int32_t* L_89 = V_15;
		int32_t L_90 = V_17;
		uint64_t L_91 = ___0_value;
		uint64_t L_92 = L_91;
		RuntimeObject* L_93 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_92);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_93, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_94 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_020d:
	{
		int32_t L_95 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_96;
		L_96 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		V_16 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_021b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		bool L_101;
		L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_0275;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_102 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_103 = (uint64_t*)(&L_102->___uint64_0_56);
		V_19 = L_103;
		uint64_t* L_104 = V_19;
		V_18 = (uint64_t*)((uintptr_t)L_104);
		V_20 = 0;
		goto IL_0267;
	}

IL_024d:
	{
		uint64_t* L_105 = V_18;
		int32_t L_106 = V_20;
		uint64_t L_107 = ___0_value;
		uint64_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_108);
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_105, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_106), 8))))) = (int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_109, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		int32_t L_110 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_0267:
	{
		int32_t L_111 = V_20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_112;
		L_112 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_024d;
		}
	}
	{
		V_19 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_0275:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_115 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_116;
		L_116 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_115, NULL);
		bool L_117;
		L_117 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_114, L_116, NULL);
		if (!L_117)
		{
			goto IL_02cf;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_118 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_119 = (int64_t*)(&L_118->___int64_0_58);
		V_22 = L_119;
		int64_t* L_120 = V_22;
		V_21 = (int64_t*)((uintptr_t)L_120);
		V_23 = 0;
		goto IL_02c1;
	}

IL_02a7:
	{
		int64_t* L_121 = V_21;
		int32_t L_122 = V_23;
		uint64_t L_123 = ___0_value;
		uint64_t L_124 = L_123;
		RuntimeObject* L_125 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_124);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), 8))))) = (int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_125, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		int32_t L_126 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_02c1:
	{
		int32_t L_127 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_128;
		L_128 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_02a7;
		}
	}
	{
		V_22 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_02cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_130, L_132, NULL);
		if (!L_133)
		{
			goto IL_0329;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_134 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_135 = (float*)(&L_134->___single_0_60);
		V_25 = L_135;
		float* L_136 = V_25;
		V_24 = (float*)((uintptr_t)L_136);
		V_26 = 0;
		goto IL_031b;
	}

IL_0301:
	{
		float* L_137 = V_24;
		int32_t L_138 = V_26;
		uint64_t L_139 = ___0_value;
		uint64_t L_140 = L_139;
		RuntimeObject* L_141 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_140);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_137, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_138), 4))))) = (float)((*(float*)((float*)(float*)UnBox(L_141, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		int32_t L_142 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_031b:
	{
		int32_t L_143 = V_26;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_144;
		L_144 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_0301;
		}
	}
	{
		V_25 = (float*)((uintptr_t)0);
		return;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_145 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_146;
		L_146 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_145, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		bool L_149;
		L_149 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_146, L_148, NULL);
		if (!L_149)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_150 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_151 = (double*)(&L_150->___double_0_64);
		V_28 = L_151;
		double* L_152 = V_28;
		V_27 = (double*)((uintptr_t)L_152);
		V_29 = 0;
		goto IL_0378;
	}

IL_035e:
	{
		double* L_153 = V_27;
		int32_t L_154 = V_29;
		uint64_t L_155 = ___0_value;
		uint64_t L_156 = L_155;
		RuntimeObject* L_157 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_156);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_153, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_154), 8))))) = (double)((*(double*)((double*)(double*)UnBox(L_157, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		int32_t L_158 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0378:
	{
		int32_t L_159 = V_29;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_160;
		L_160 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_159) < ((int32_t)L_160)))
		{
			goto IL_035e;
		}
	}
	{
		V_28 = (double*)((uintptr_t)0);
		return;
	}

IL_0386:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_164;
		L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
		bool L_165;
		L_165 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_162, L_164, NULL);
		if (!L_165)
		{
			goto IL_0505;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_166 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_167 = ___0_value;
		uint64_t L_168 = L_167;
		RuntimeObject* L_169 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_168);
		L_166->___byte_0_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_169, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_170 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_171 = ___0_value;
		uint64_t L_172 = L_171;
		RuntimeObject* L_173 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_172);
		L_170->___byte_1_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_173, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_175 = ___0_value;
		uint64_t L_176 = L_175;
		RuntimeObject* L_177 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_176);
		L_174->___byte_2_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_177, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_178 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_179 = ___0_value;
		uint64_t L_180 = L_179;
		RuntimeObject* L_181 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_180);
		L_178->___byte_3_3 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_181, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_182 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_183 = ___0_value;
		uint64_t L_184 = L_183;
		RuntimeObject* L_185 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_184);
		L_182->___byte_4_4 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_185, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_186 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_187 = ___0_value;
		uint64_t L_188 = L_187;
		RuntimeObject* L_189 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_188);
		L_186->___byte_5_5 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_189, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_190 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_191 = ___0_value;
		uint64_t L_192 = L_191;
		RuntimeObject* L_193 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_192);
		L_190->___byte_6_6 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_193, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_194 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_195 = ___0_value;
		uint64_t L_196 = L_195;
		RuntimeObject* L_197 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_196);
		L_194->___byte_7_7 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_197, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_199 = ___0_value;
		uint64_t L_200 = L_199;
		RuntimeObject* L_201 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_200);
		L_198->___byte_8_8 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_201, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_202 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_203 = ___0_value;
		uint64_t L_204 = L_203;
		RuntimeObject* L_205 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_204);
		L_202->___byte_9_9 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_205, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_206 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_207 = ___0_value;
		uint64_t L_208 = L_207;
		RuntimeObject* L_209 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_208);
		L_206->___byte_10_10 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_209, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_210 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_211 = ___0_value;
		uint64_t L_212 = L_211;
		RuntimeObject* L_213 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_212);
		L_210->___byte_11_11 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_213, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_214 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_215 = ___0_value;
		uint64_t L_216 = L_215;
		RuntimeObject* L_217 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_216);
		L_214->___byte_12_12 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_217, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_219 = ___0_value;
		uint64_t L_220 = L_219;
		RuntimeObject* L_221 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_220);
		L_218->___byte_13_13 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_221, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_222 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_223 = ___0_value;
		uint64_t L_224 = L_223;
		RuntimeObject* L_225 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_224);
		L_222->___byte_14_14 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_225, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_226 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_227 = ___0_value;
		uint64_t L_228 = L_227;
		RuntimeObject* L_229 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_228);
		L_226->___byte_15_15 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_229, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		return;
	}

IL_0505:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_230 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_231;
		L_231 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_230, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_232 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_233;
		L_233 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_232, NULL);
		bool L_234;
		L_234 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_231, L_233, NULL);
		if (!L_234)
		{
			goto IL_0684;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_235 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_236 = ___0_value;
		uint64_t L_237 = L_236;
		RuntimeObject* L_238 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_237);
		L_235->___sbyte_0_16 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_238, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_240 = ___0_value;
		uint64_t L_241 = L_240;
		RuntimeObject* L_242 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_241);
		L_239->___sbyte_1_17 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_242, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_243 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_244 = ___0_value;
		uint64_t L_245 = L_244;
		RuntimeObject* L_246 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_245);
		L_243->___sbyte_2_18 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_246, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_247 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_248 = ___0_value;
		uint64_t L_249 = L_248;
		RuntimeObject* L_250 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_249);
		L_247->___sbyte_3_19 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_250, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_251 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_252 = ___0_value;
		uint64_t L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_253);
		L_251->___sbyte_4_20 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_254, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_255 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_256 = ___0_value;
		uint64_t L_257 = L_256;
		RuntimeObject* L_258 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_257);
		L_255->___sbyte_5_21 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_258, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_260 = ___0_value;
		uint64_t L_261 = L_260;
		RuntimeObject* L_262 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_261);
		L_259->___sbyte_6_22 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_262, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_263 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_264 = ___0_value;
		uint64_t L_265 = L_264;
		RuntimeObject* L_266 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_265);
		L_263->___sbyte_7_23 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_266, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_267 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_268 = ___0_value;
		uint64_t L_269 = L_268;
		RuntimeObject* L_270 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_269);
		L_267->___sbyte_8_24 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_270, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_271 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_272 = ___0_value;
		uint64_t L_273 = L_272;
		RuntimeObject* L_274 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_273);
		L_271->___sbyte_9_25 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_274, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_275 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_276 = ___0_value;
		uint64_t L_277 = L_276;
		RuntimeObject* L_278 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_277);
		L_275->___sbyte_10_26 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_278, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_280 = ___0_value;
		uint64_t L_281 = L_280;
		RuntimeObject* L_282 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_281);
		L_279->___sbyte_11_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_282, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_283 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_284 = ___0_value;
		uint64_t L_285 = L_284;
		RuntimeObject* L_286 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_285);
		L_283->___sbyte_12_28 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_286, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_287 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_288 = ___0_value;
		uint64_t L_289 = L_288;
		RuntimeObject* L_290 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_289);
		L_287->___sbyte_13_29 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_290, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_291 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_292 = ___0_value;
		uint64_t L_293 = L_292;
		RuntimeObject* L_294 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_293);
		L_291->___sbyte_14_30 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_294, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_295 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_296 = ___0_value;
		uint64_t L_297 = L_296;
		RuntimeObject* L_298 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_297);
		L_295->___sbyte_15_31 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_298, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		return;
	}

IL_0684:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_299 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_300;
		L_300 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_299, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_301 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_302;
		L_302 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_301, NULL);
		bool L_303;
		L_303 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_300, L_302, NULL);
		if (!L_303)
		{
			goto IL_0753;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_305 = ___0_value;
		uint64_t L_306 = L_305;
		RuntimeObject* L_307 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_306);
		L_304->___uint16_0_32 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_307, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_308 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_309 = ___0_value;
		uint64_t L_310 = L_309;
		RuntimeObject* L_311 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_310);
		L_308->___uint16_1_33 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_311, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_312 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_313 = ___0_value;
		uint64_t L_314 = L_313;
		RuntimeObject* L_315 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_314);
		L_312->___uint16_2_34 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_315, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_316 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_317 = ___0_value;
		uint64_t L_318 = L_317;
		RuntimeObject* L_319 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_318);
		L_316->___uint16_3_35 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_319, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_320 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_321 = ___0_value;
		uint64_t L_322 = L_321;
		RuntimeObject* L_323 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_322);
		L_320->___uint16_4_36 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_323, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_325 = ___0_value;
		uint64_t L_326 = L_325;
		RuntimeObject* L_327 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_326);
		L_324->___uint16_5_37 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_327, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_328 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_329 = ___0_value;
		uint64_t L_330 = L_329;
		RuntimeObject* L_331 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_330);
		L_328->___uint16_6_38 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_331, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_332 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_333 = ___0_value;
		uint64_t L_334 = L_333;
		RuntimeObject* L_335 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_334);
		L_332->___uint16_7_39 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_335, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		return;
	}

IL_0753:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_338 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_339;
		L_339 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_338, NULL);
		bool L_340;
		L_340 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_337, L_339, NULL);
		if (!L_340)
		{
			goto IL_0822;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_341 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_342 = ___0_value;
		uint64_t L_343 = L_342;
		RuntimeObject* L_344 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_343);
		L_341->___int16_0_40 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_344, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_345 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_346 = ___0_value;
		uint64_t L_347 = L_346;
		RuntimeObject* L_348 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_347);
		L_345->___int16_1_41 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_348, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_349 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_350 = ___0_value;
		uint64_t L_351 = L_350;
		RuntimeObject* L_352 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_351);
		L_349->___int16_2_42 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_352, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_353 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_354 = ___0_value;
		uint64_t L_355 = L_354;
		RuntimeObject* L_356 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_355);
		L_353->___int16_3_43 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_356, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_357 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_358 = ___0_value;
		uint64_t L_359 = L_358;
		RuntimeObject* L_360 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_359);
		L_357->___int16_4_44 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_360, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_361 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_362 = ___0_value;
		uint64_t L_363 = L_362;
		RuntimeObject* L_364 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_363);
		L_361->___int16_5_45 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_364, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_366 = ___0_value;
		uint64_t L_367 = L_366;
		RuntimeObject* L_368 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_367);
		L_365->___int16_6_46 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_368, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_369 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_370 = ___0_value;
		uint64_t L_371 = L_370;
		RuntimeObject* L_372 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_371);
		L_369->___int16_7_47 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_372, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		return;
	}

IL_0822:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_373 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_374;
		L_374 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_373, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_375 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_376;
		L_376 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_375, NULL);
		bool L_377;
		L_377 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_374, L_376, NULL);
		if (!L_377)
		{
			goto IL_0896;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_378 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_379 = ___0_value;
		uint64_t L_380 = L_379;
		RuntimeObject* L_381 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_380);
		L_378->___uint32_0_48 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_381, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_382 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_383 = ___0_value;
		uint64_t L_384 = L_383;
		RuntimeObject* L_385 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_384);
		L_382->___uint32_1_49 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_385, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_386 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_387 = ___0_value;
		uint64_t L_388 = L_387;
		RuntimeObject* L_389 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_388);
		L_386->___uint32_2_50 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_389, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_390 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_391 = ___0_value;
		uint64_t L_392 = L_391;
		RuntimeObject* L_393 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_392);
		L_390->___uint32_3_51 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_393, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		return;
	}

IL_0896:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_394 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_395;
		L_395 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_394, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_396 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_397;
		L_397 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_396, NULL);
		bool L_398;
		L_398 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_395, L_397, NULL);
		if (!L_398)
		{
			goto IL_090a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_399 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_400 = ___0_value;
		uint64_t L_401 = L_400;
		RuntimeObject* L_402 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_401);
		L_399->___int32_0_52 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_402, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_403 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_404 = ___0_value;
		uint64_t L_405 = L_404;
		RuntimeObject* L_406 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_405);
		L_403->___int32_1_53 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_406, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_407 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_408 = ___0_value;
		uint64_t L_409 = L_408;
		RuntimeObject* L_410 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_409);
		L_407->___int32_2_54 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_410, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_411 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_412 = ___0_value;
		uint64_t L_413 = L_412;
		RuntimeObject* L_414 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_413);
		L_411->___int32_3_55 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_414, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		return;
	}

IL_090a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_415 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_416;
		L_416 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_415, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_417 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_418;
		L_418 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_417, NULL);
		bool L_419;
		L_419 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_416, L_418, NULL);
		if (!L_419)
		{
			goto IL_0952;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_420 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_421 = ___0_value;
		uint64_t L_422 = L_421;
		RuntimeObject* L_423 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_422);
		L_420->___uint64_0_56 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_423, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_424 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_425 = ___0_value;
		uint64_t L_426 = L_425;
		RuntimeObject* L_427 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_426);
		L_424->___uint64_1_57 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_427, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		return;
	}

IL_0952:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_428 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_429;
		L_429 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_428, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_430 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_431;
		L_431 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_430, NULL);
		bool L_432;
		L_432 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_429, L_431, NULL);
		if (!L_432)
		{
			goto IL_099a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_433 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_434 = ___0_value;
		uint64_t L_435 = L_434;
		RuntimeObject* L_436 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_435);
		L_433->___int64_0_58 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_436, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_437 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_438 = ___0_value;
		uint64_t L_439 = L_438;
		RuntimeObject* L_440 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_439);
		L_437->___int64_1_59 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_440, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		return;
	}

IL_099a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_441 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_442;
		L_442 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_441, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_443 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_444;
		L_444 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_443, NULL);
		bool L_445;
		L_445 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_442, L_444, NULL);
		if (!L_445)
		{
			goto IL_0a0e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_446 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_447 = ___0_value;
		uint64_t L_448 = L_447;
		RuntimeObject* L_449 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_448);
		L_446->___single_0_60 = ((*(float*)((float*)(float*)UnBox(L_449, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_450 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_451 = ___0_value;
		uint64_t L_452 = L_451;
		RuntimeObject* L_453 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_452);
		L_450->___single_1_61 = ((*(float*)((float*)(float*)UnBox(L_453, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_454 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_455 = ___0_value;
		uint64_t L_456 = L_455;
		RuntimeObject* L_457 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_456);
		L_454->___single_2_62 = ((*(float*)((float*)(float*)UnBox(L_457, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_458 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_459 = ___0_value;
		uint64_t L_460 = L_459;
		RuntimeObject* L_461 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_460);
		L_458->___single_3_63 = ((*(float*)((float*)(float*)UnBox(L_461, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		return;
	}

IL_0a0e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_462 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_463;
		L_463 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_462, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_464 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_465;
		L_465 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_464, NULL);
		bool L_466;
		L_466 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_463, L_465, NULL);
		if (!L_466)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_467 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_468 = ___0_value;
		uint64_t L_469 = L_468;
		RuntimeObject* L_470 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_469);
		L_467->___double_0_64 = ((*(double*)((double*)(double*)UnBox(L_470, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_471 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_472 = ___0_value;
		uint64_t L_473 = L_472;
		RuntimeObject* L_474 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_473);
		L_471->___double_1_65 = ((*(double*)((double*)(double*)UnBox(L_474, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
	}

IL_0a55:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6(_thisAdjusted, ___0_value, method);
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_dataPointer;
		Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B(__this, L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA(_thisAdjusted, ___0_dataPointer, method);
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		void* L_5 = ___0_dataPointer;
		V_0 = (uint8_t*)L_5;
		uint8_t* L_6 = V_0;
		int32_t L_7 = ___1_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_9 = (uint8_t*)(&L_8->___byte_0_0);
		V_2 = L_9;
		uint8_t* L_10 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_10);
		V_3 = 0;
		goto IL_0047;
	}

IL_003b:
	{
		uint8_t* L_11 = V_1;
		int32_t L_12 = V_3;
		uint8_t* L_13 = V_0;
		int32_t L_14 = V_3;
		int32_t L_15 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12))) = (int8_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0047:
	{
		int32_t L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_18;
		L_18 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003b;
		}
	}
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_0053:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}
	{
		void* L_24 = ___0_dataPointer;
		V_4 = (int8_t*)L_24;
		int8_t* L_25 = V_4;
		int32_t L_26 = ___1_offset;
		V_4 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_28 = (int8_t*)(&L_27->___sbyte_0_16);
		V_6 = L_28;
		int8_t* L_29 = V_6;
		V_5 = (int8_t*)((uintptr_t)L_29);
		V_7 = 0;
		goto IL_00a0;
	}

IL_008e:
	{
		int8_t* L_30 = V_5;
		int32_t L_31 = V_7;
		int8_t* L_32 = V_4;
		int32_t L_33 = V_7;
		int32_t L_34 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_32, L_33)));
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31))) = (int8_t)L_34;
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a0:
	{
		int32_t L_36 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_37;
		L_37 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_008e;
		}
	}
	{
		V_6 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00ae:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (!L_42)
		{
			goto IL_0112;
		}
	}
	{
		void* L_43 = ___0_dataPointer;
		V_8 = (uint16_t*)L_43;
		uint16_t* L_44 = V_8;
		int32_t L_45 = ___1_offset;
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_0_32);
		V_10 = L_47;
		uint16_t* L_48 = V_10;
		V_9 = (uint16_t*)((uintptr_t)L_48);
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_49 = V_9;
		int32_t L_50 = V_11;
		uint16_t* L_51 = V_8;
		int32_t L_52 = V_11;
		int32_t L_53 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2)))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), 2))))) = (int16_t)L_53;
		int32_t L_54 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0104:
	{
		int32_t L_55 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_56;
		L_56 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00ec;
		}
	}
	{
		V_10 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		bool L_61;
		L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_58, L_60, NULL);
		if (!L_61)
		{
			goto IL_0176;
		}
	}
	{
		void* L_62 = ___0_dataPointer;
		V_12 = (int16_t*)L_62;
		int16_t* L_63 = V_12;
		int32_t L_64 = ___1_offset;
		V_12 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_63, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_65 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_66 = (int16_t*)(&L_65->___int16_0_40);
		V_14 = L_66;
		int16_t* L_67 = V_14;
		V_13 = (int16_t*)((uintptr_t)L_67);
		V_15 = 0;
		goto IL_0168;
	}

IL_0150:
	{
		int16_t* L_68 = V_13;
		int32_t L_69 = V_15;
		int16_t* L_70 = V_12;
		int32_t L_71 = V_15;
		int32_t L_72 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_71), 2)))));
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 2))))) = (int16_t)L_72;
		int32_t L_73 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0168:
	{
		int32_t L_74 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_75;
		L_75 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0150;
		}
	}
	{
		V_14 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0176:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01da;
		}
	}
	{
		void* L_81 = ___0_dataPointer;
		V_16 = (uint32_t*)L_81;
		uint32_t* L_82 = V_16;
		int32_t L_83 = ___1_offset;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_82, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_83), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_85 = (uint32_t*)(&L_84->___uint32_0_48);
		V_18 = L_85;
		uint32_t* L_86 = V_18;
		V_17 = (uint32_t*)((uintptr_t)L_86);
		V_19 = 0;
		goto IL_01cc;
	}

IL_01b4:
	{
		uint32_t* L_87 = V_17;
		int32_t L_88 = V_19;
		uint32_t* L_89 = V_16;
		int32_t L_90 = V_19;
		int32_t L_91 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4)))));
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))) = (int32_t)L_91;
		int32_t L_92 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01cc:
	{
		int32_t L_93 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_94;
		L_94 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01b4;
		}
	}
	{
		V_18 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_96;
		L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		bool L_99;
		L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
		if (!L_99)
		{
			goto IL_023e;
		}
	}
	{
		void* L_100 = ___0_dataPointer;
		V_20 = (int32_t*)L_100;
		int32_t* L_101 = V_20;
		int32_t L_102 = ___1_offset;
		V_20 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_101, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_102), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_103 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_104 = (int32_t*)(&L_103->___int32_0_52);
		V_22 = L_104;
		int32_t* L_105 = V_22;
		V_21 = (int32_t*)((uintptr_t)L_105);
		V_23 = 0;
		goto IL_0230;
	}

IL_0218:
	{
		int32_t* L_106 = V_21;
		int32_t L_107 = V_23;
		int32_t* L_108 = V_20;
		int32_t L_109 = V_23;
		int32_t L_110 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_108, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_109), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_107), 4))))) = (int32_t)L_110;
		int32_t L_111 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0230:
	{
		int32_t L_112 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_113;
		L_113 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_0218;
		}
	}
	{
		V_22 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_023e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		if (!L_118)
		{
			goto IL_02a2;
		}
	}
	{
		void* L_119 = ___0_dataPointer;
		V_24 = (uint64_t*)L_119;
		uint64_t* L_120 = V_24;
		int32_t L_121 = ___1_offset;
		V_24 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_120, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_121), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_122 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_123 = (uint64_t*)(&L_122->___uint64_0_56);
		V_26 = L_123;
		uint64_t* L_124 = V_26;
		V_25 = (uint64_t*)((uintptr_t)L_124);
		V_27 = 0;
		goto IL_0294;
	}

IL_027c:
	{
		uint64_t* L_125 = V_25;
		int32_t L_126 = V_27;
		uint64_t* L_127 = V_24;
		int32_t L_128 = V_27;
		int64_t L_129 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_128), 8)))));
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_125, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_126), 8))))) = (int64_t)L_129;
		int32_t L_130 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_0294:
	{
		int32_t L_131 = V_27;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_132;
		L_132 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_027c;
		}
	}
	{
		V_26 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (!L_137)
		{
			goto IL_0306;
		}
	}
	{
		void* L_138 = ___0_dataPointer;
		V_28 = (int64_t*)L_138;
		int64_t* L_139 = V_28;
		int32_t L_140 = ___1_offset;
		V_28 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_140), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_141 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_142 = (int64_t*)(&L_141->___int64_0_58);
		V_30 = L_142;
		int64_t* L_143 = V_30;
		V_29 = (int64_t*)((uintptr_t)L_143);
		V_31 = 0;
		goto IL_02f8;
	}

IL_02e0:
	{
		int64_t* L_144 = V_29;
		int32_t L_145 = V_31;
		int64_t* L_146 = V_28;
		int32_t L_147 = V_31;
		int64_t L_148 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_146, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_147), 8)))));
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_144, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_145), 8))))) = (int64_t)L_148;
		int32_t L_149 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_02f8:
	{
		int32_t L_150 = V_31;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_151;
		L_151 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_02e0;
		}
	}
	{
		V_30 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_036a;
		}
	}
	{
		void* L_157 = ___0_dataPointer;
		V_32 = (float*)L_157;
		float* L_158 = V_32;
		int32_t L_159 = ___1_offset;
		V_32 = ((float*)il2cpp_codegen_add((intptr_t)L_158, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_159), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_160 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_161 = (float*)(&L_160->___single_0_60);
		V_34 = L_161;
		float* L_162 = V_34;
		V_33 = (float*)((uintptr_t)L_162);
		V_35 = 0;
		goto IL_035c;
	}

IL_0344:
	{
		float* L_163 = V_33;
		int32_t L_164 = V_35;
		float* L_165 = V_32;
		int32_t L_166 = V_35;
		float L_167 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_166), 4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_164), 4))))) = (float)L_167;
		int32_t L_168 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_035c:
	{
		int32_t L_169 = V_35;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_170;
		L_170 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0344;
		}
	}
	{
		V_34 = (float*)((uintptr_t)0);
		return;
	}

IL_036a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_173 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_174;
		L_174 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_173, NULL);
		bool L_175;
		L_175 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_172, L_174, NULL);
		if (!L_175)
		{
			goto IL_03ce;
		}
	}
	{
		void* L_176 = ___0_dataPointer;
		V_36 = (double*)L_176;
		double* L_177 = V_36;
		int32_t L_178 = ___1_offset;
		V_36 = ((double*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_179 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_180 = (double*)(&L_179->___double_0_64);
		V_38 = L_180;
		double* L_181 = V_38;
		V_37 = (double*)((uintptr_t)L_181);
		V_39 = 0;
		goto IL_03c0;
	}

IL_03a8:
	{
		double* L_182 = V_37;
		int32_t L_183 = V_39;
		double* L_184 = V_36;
		int32_t L_185 = V_39;
		double L_186 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_184, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_185), 8)))));
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_182, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_183), 8))))) = (double)L_186;
		int32_t L_187 = V_39;
		V_39 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_03c0:
	{
		int32_t L_188 = V_39;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_189;
		L_189 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_188) < ((int32_t)L_189)))
		{
			goto IL_03a8;
		}
	}
	{
		V_38 = (double*)((uintptr_t)0);
		return;
	}

IL_03ce:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_190 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_190);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_190, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_190, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	Vector_1__ctor_mB3EB022FA5067096F41350560FA447FBA16BFF2B(_thisAdjusted, ___0_dataPointer, ___1_offset, method);
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.ctor(System.Numerics.Register&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) 
{
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = ___0_existingRegister;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_1 = (*(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)L_0);
		__this->___register_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_AdjustorThunk (RuntimeObject* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606(_thisAdjusted, ___0_existingRegister, method);
}
// T System.Numerics.Vector`1<System.UInt64>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_14 = (uint8_t*)(&L_13->___byte_0_0);
		V_0 = L_14;
		uint8_t* L_15 = V_0;
		int32_t L_16 = ___0_index;
		int32_t L_17 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_15), L_16)));
		uint8_t L_18 = ((uint8_t)L_17);
		RuntimeObject* L_19 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_18);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_19, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_26 = (int8_t*)(&L_25->___sbyte_0_16);
		V_1 = L_26;
		int8_t* L_27 = V_1;
		int32_t L_28 = ___0_index;
		int32_t L_29 = *((int8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_27), L_28)));
		int8_t L_30 = ((int8_t)L_29);
		RuntimeObject* L_31 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_30);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0090:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00ca;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_37 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_38 = (uint16_t*)(&L_37->___uint16_0_32);
		V_2 = L_38;
		uint16_t* L_39 = V_2;
		int32_t L_40 = ___0_index;
		int32_t L_41 = *((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_39), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 2)))));
		uint16_t L_42 = ((uint16_t)L_41);
		RuntimeObject* L_43 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_42);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_43, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_00ca:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_50 = (int16_t*)(&L_49->___int16_0_40);
		V_3 = L_50;
		int16_t* L_51 = V_3;
		int32_t L_52 = ___0_index;
		int32_t L_53 = *((int16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_51), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2)))));
		int16_t L_54 = ((int16_t)L_53);
		RuntimeObject* L_55 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_54);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0140;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_61 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_62 = (uint32_t*)(&L_61->___uint32_0_48);
		V_4 = L_62;
		uint32_t* L_63 = V_4;
		int32_t L_64 = ___0_index;
		int32_t L_65 = *((uint32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_63), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 4)))));
		uint32_t L_66 = ((uint32_t)L_65);
		RuntimeObject* L_67 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_66);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_67, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0140:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_017c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_73 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_74 = (int32_t*)(&L_73->___int32_0_52);
		V_5 = L_74;
		int32_t* L_75 = V_5;
		int32_t L_76 = ___0_index;
		int32_t L_77 = *((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_75), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4)))));
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_78);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_017c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		if (!L_84)
		{
			goto IL_01b8;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_85 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_86 = (uint64_t*)(&L_85->___uint64_0_56);
		V_6 = L_86;
		uint64_t* L_87 = V_6;
		int32_t L_88 = ___0_index;
		int64_t L_89 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_87), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 8)))));
		uint64_t L_90 = ((uint64_t)L_89);
		RuntimeObject* L_91 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_90);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_91, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_01b8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		bool L_96;
		L_96 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_93, L_95, NULL);
		if (!L_96)
		{
			goto IL_01f4;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_97 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_98 = (int64_t*)(&L_97->___int64_0_58);
		V_7 = L_98;
		int64_t* L_99 = V_7;
		int32_t L_100 = ___0_index;
		int64_t L_101 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_99), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_100), 8)))));
		int64_t L_102 = L_101;
		RuntimeObject* L_103 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_102);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_103, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_01f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		bool L_108;
		L_108 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_105, L_107, NULL);
		if (!L_108)
		{
			goto IL_0230;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_110 = (float*)(&L_109->___single_0_60);
		V_8 = L_110;
		float* L_111 = V_8;
		int32_t L_112 = ___0_index;
		float L_113 = *((float*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_111), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_112), 4)))));
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_114);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_115, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0230:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		if (!L_120)
		{
			goto IL_026c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_121 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_122 = (double*)(&L_121->___double_0_64);
		V_9 = L_122;
		double* L_123 = V_9;
		int32_t L_124 = ___0_index;
		double L_125 = *((double*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_123), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_124), 8)))));
		double L_126 = L_125;
		RuntimeObject* L_127 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_126);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_127, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_026c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_128 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_128);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_128, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  uint64_t Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Vector`1<System.UInt64>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(__this, ((*(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Vector`1<System.UInt64>::Equals(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		uint64_t L_2;
		L_2 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_3 = V_0;
		uint64_t L_4;
		L_4 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_other), L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_5;
		L_5 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_01f0;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_15 = L_14->___byte_0_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register_0;
		uint8_t L_18 = L_17.___byte_0_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_20 = L_19->___byte_1_1;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = L_21.___register_0;
		uint8_t L_23 = L_22.___byte_1_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_25 = L_24->___byte_2_2;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register_0;
		uint8_t L_28 = L_27.___byte_2_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_30 = L_29->___byte_3_3;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register_0;
		uint8_t L_33 = L_32.___byte_3_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_35 = L_34->___byte_4_4;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register_0;
		uint8_t L_38 = L_37.___byte_4_4;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_40 = L_39->___byte_5_5;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = L_41.___register_0;
		uint8_t L_43 = L_42.___byte_5_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_45 = L_44->___byte_6_6;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = L_46.___register_0;
		uint8_t L_48 = L_47.___byte_6_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_48))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_50 = L_49->___byte_7_7;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_51 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_52 = L_51.___register_0;
		uint8_t L_53 = L_52.___byte_7_7;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_53))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_54 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_55 = L_54->___byte_8_8;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_56 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_57 = L_56.___register_0;
		uint8_t L_58 = L_57.___byte_8_8;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_58))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_59 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_60 = L_59->___byte_9_9;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_61 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register_0;
		uint8_t L_63 = L_62.___byte_9_9;
		if ((!(((uint32_t)L_60) == ((uint32_t)L_63))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_64 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_65 = L_64->___byte_10_10;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_66 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_67 = L_66.___register_0;
		uint8_t L_68 = L_67.___byte_10_10;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_68))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_69 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_70 = L_69->___byte_11_11;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_71 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register_0;
		uint8_t L_73 = L_72.___byte_11_11;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_73))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_74 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_75 = L_74->___byte_12_12;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_76 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_77 = L_76.___register_0;
		uint8_t L_78 = L_77.___byte_12_12;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_78))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_79 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_80 = L_79->___byte_13_13;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_81 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_82 = L_81.___register_0;
		uint8_t L_83 = L_82.___byte_13_13;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_83))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_85 = L_84->___byte_14_14;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_86 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_87 = L_86.___register_0;
		uint8_t L_88 = L_87.___byte_14_14;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_88))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_89 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t L_90 = L_89->___byte_15_15;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_91 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_92 = L_91.___register_0;
		uint8_t L_93 = L_92.___byte_15_15;
		return (bool)((((int32_t)L_90) == ((int32_t)L_93))? 1 : 0);
	}

IL_01ee:
	{
		return (bool)0;
	}

IL_01f0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		if (!L_98)
		{
			goto IL_03af;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_99 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_100 = L_99->___sbyte_0_16;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_101 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_102 = L_101.___register_0;
		int8_t L_103 = L_102.___sbyte_0_16;
		if ((!(((uint32_t)L_100) == ((uint32_t)L_103))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_104 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_105 = L_104->___sbyte_1_17;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_106 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_107 = L_106.___register_0;
		int8_t L_108 = L_107.___sbyte_1_17;
		if ((!(((uint32_t)L_105) == ((uint32_t)L_108))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_110 = L_109->___sbyte_2_18;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_111 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_112 = L_111.___register_0;
		int8_t L_113 = L_112.___sbyte_2_18;
		if ((!(((uint32_t)L_110) == ((uint32_t)L_113))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_114 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_115 = L_114->___sbyte_3_19;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_116 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_117 = L_116.___register_0;
		int8_t L_118 = L_117.___sbyte_3_19;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_118))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_119 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_120 = L_119->___sbyte_4_20;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_121 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_122 = L_121.___register_0;
		int8_t L_123 = L_122.___sbyte_4_20;
		if ((!(((uint32_t)L_120) == ((uint32_t)L_123))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_124 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_125 = L_124->___sbyte_5_21;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_126 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_127 = L_126.___register_0;
		int8_t L_128 = L_127.___sbyte_5_21;
		if ((!(((uint32_t)L_125) == ((uint32_t)L_128))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_129 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_130 = L_129->___sbyte_6_22;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_131 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_132 = L_131.___register_0;
		int8_t L_133 = L_132.___sbyte_6_22;
		if ((!(((uint32_t)L_130) == ((uint32_t)L_133))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_134 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_135 = L_134->___sbyte_7_23;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_136 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_137 = L_136.___register_0;
		int8_t L_138 = L_137.___sbyte_7_23;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_138))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_139 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_140 = L_139->___sbyte_8_24;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_141 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_142 = L_141.___register_0;
		int8_t L_143 = L_142.___sbyte_8_24;
		if ((!(((uint32_t)L_140) == ((uint32_t)L_143))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_144 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_145 = L_144->___sbyte_9_25;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_146 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_147 = L_146.___register_0;
		int8_t L_148 = L_147.___sbyte_9_25;
		if ((!(((uint32_t)L_145) == ((uint32_t)L_148))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_149 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_150 = L_149->___sbyte_10_26;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_151 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_152 = L_151.___register_0;
		int8_t L_153 = L_152.___sbyte_10_26;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_153))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_154 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_155 = L_154->___sbyte_11_27;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_156 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_157 = L_156.___register_0;
		int8_t L_158 = L_157.___sbyte_11_27;
		if ((!(((uint32_t)L_155) == ((uint32_t)L_158))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_159 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_160 = L_159->___sbyte_12_28;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_161 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_162 = L_161.___register_0;
		int8_t L_163 = L_162.___sbyte_12_28;
		if ((!(((uint32_t)L_160) == ((uint32_t)L_163))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_164 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_165 = L_164->___sbyte_13_29;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_166 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_167 = L_166.___register_0;
		int8_t L_168 = L_167.___sbyte_13_29;
		if ((!(((uint32_t)L_165) == ((uint32_t)L_168))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_169 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_170 = L_169->___sbyte_14_30;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_171 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_172 = L_171.___register_0;
		int8_t L_173 = L_172.___sbyte_14_30;
		if ((!(((uint32_t)L_170) == ((uint32_t)L_173))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t L_175 = L_174->___sbyte_15_31;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_176 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_177 = L_176.___register_0;
		int8_t L_178 = L_177.___sbyte_15_31;
		return (bool)((((int32_t)L_175) == ((int32_t)L_178))? 1 : 0);
	}

IL_03ad:
	{
		return (bool)0;
	}

IL_03af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		bool L_183;
		L_183 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_180, L_182, NULL);
		if (!L_183)
		{
			goto IL_0496;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_184 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_185 = L_184->___uint16_0_32;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_186 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_187 = L_186.___register_0;
		uint16_t L_188 = L_187.___uint16_0_32;
		if ((!(((uint32_t)L_185) == ((uint32_t)L_188))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_189 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_190 = L_189->___uint16_1_33;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_191 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_192 = L_191.___register_0;
		uint16_t L_193 = L_192.___uint16_1_33;
		if ((!(((uint32_t)L_190) == ((uint32_t)L_193))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_194 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_195 = L_194->___uint16_2_34;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_196 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_197 = L_196.___register_0;
		uint16_t L_198 = L_197.___uint16_2_34;
		if ((!(((uint32_t)L_195) == ((uint32_t)L_198))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_199 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_200 = L_199->___uint16_3_35;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_201 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_202 = L_201.___register_0;
		uint16_t L_203 = L_202.___uint16_3_35;
		if ((!(((uint32_t)L_200) == ((uint32_t)L_203))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_204 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_205 = L_204->___uint16_4_36;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_206 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_207 = L_206.___register_0;
		uint16_t L_208 = L_207.___uint16_4_36;
		if ((!(((uint32_t)L_205) == ((uint32_t)L_208))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_209 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_210 = L_209->___uint16_5_37;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_211 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_212 = L_211.___register_0;
		uint16_t L_213 = L_212.___uint16_5_37;
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_214 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_215 = L_214->___uint16_6_38;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_216 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_217 = L_216.___register_0;
		uint16_t L_218 = L_217.___uint16_6_38;
		if ((!(((uint32_t)L_215) == ((uint32_t)L_218))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_219 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t L_220 = L_219->___uint16_7_39;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_221 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_222 = L_221.___register_0;
		uint16_t L_223 = L_222.___uint16_7_39;
		return (bool)((((int32_t)L_220) == ((int32_t)L_223))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}

IL_0496:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		bool L_228;
		L_228 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_225, L_227, NULL);
		if (!L_228)
		{
			goto IL_057d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_229 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_230 = L_229->___int16_0_40;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_231 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register_0;
		int16_t L_233 = L_232.___int16_0_40;
		if ((!(((uint32_t)L_230) == ((uint32_t)L_233))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_234 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_235 = L_234->___int16_1_41;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_236 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_237 = L_236.___register_0;
		int16_t L_238 = L_237.___int16_1_41;
		if ((!(((uint32_t)L_235) == ((uint32_t)L_238))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_240 = L_239->___int16_2_42;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_241 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register_0;
		int16_t L_243 = L_242.___int16_2_42;
		if ((!(((uint32_t)L_240) == ((uint32_t)L_243))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_244 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_245 = L_244->___int16_3_43;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_246 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_247 = L_246.___register_0;
		int16_t L_248 = L_247.___int16_3_43;
		if ((!(((uint32_t)L_245) == ((uint32_t)L_248))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_249 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_250 = L_249->___int16_4_44;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_251 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_252 = L_251.___register_0;
		int16_t L_253 = L_252.___int16_4_44;
		if ((!(((uint32_t)L_250) == ((uint32_t)L_253))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_255 = L_254->___int16_5_45;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_256 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_257 = L_256.___register_0;
		int16_t L_258 = L_257.___int16_5_45;
		if ((!(((uint32_t)L_255) == ((uint32_t)L_258))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_260 = L_259->___int16_6_46;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_261 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_262 = L_261.___register_0;
		int16_t L_263 = L_262.___int16_6_46;
		if ((!(((uint32_t)L_260) == ((uint32_t)L_263))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t L_265 = L_264->___int16_7_47;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_266 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register_0;
		int16_t L_268 = L_267.___int16_7_47;
		return (bool)((((int32_t)L_265) == ((int32_t)L_268))? 1 : 0);
	}

IL_057b:
	{
		return (bool)0;
	}

IL_057d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_269 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_270;
		L_270 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_269, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_271 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_272;
		L_272 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_271, NULL);
		bool L_273;
		L_273 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_270, L_272, NULL);
		if (!L_273)
		{
			goto IL_05fb;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_275 = L_274->___uint32_0_48;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_276 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register_0;
		uint32_t L_278 = L_277.___uint32_0_48;
		if ((!(((uint32_t)L_275) == ((uint32_t)L_278))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_280 = L_279->___uint32_1_49;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_281 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_282 = L_281.___register_0;
		uint32_t L_283 = L_282.___uint32_1_49;
		if ((!(((uint32_t)L_280) == ((uint32_t)L_283))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_285 = L_284->___uint32_2_50;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_286 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_287 = L_286.___register_0;
		uint32_t L_288 = L_287.___uint32_2_50;
		if ((!(((uint32_t)L_285) == ((uint32_t)L_288))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t L_290 = L_289->___uint32_3_51;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_291 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_292 = L_291.___register_0;
		uint32_t L_293 = L_292.___uint32_3_51;
		return (bool)((((int32_t)L_290) == ((int32_t)L_293))? 1 : 0);
	}

IL_05f9:
	{
		return (bool)0;
	}

IL_05fb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_294 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_295;
		L_295 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_294, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_296 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_297;
		L_297 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_296, NULL);
		bool L_298;
		L_298 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_295, L_297, NULL);
		if (!L_298)
		{
			goto IL_0679;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_300 = L_299->___int32_0_52;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_301 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register_0;
		int32_t L_303 = L_302.___int32_0_52;
		if ((!(((uint32_t)L_300) == ((uint32_t)L_303))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_305 = L_304->___int32_1_53;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_306 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_307 = L_306.___register_0;
		int32_t L_308 = L_307.___int32_1_53;
		if ((!(((uint32_t)L_305) == ((uint32_t)L_308))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_310 = L_309->___int32_2_54;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_311 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register_0;
		int32_t L_313 = L_312.___int32_2_54;
		if ((!(((uint32_t)L_310) == ((uint32_t)L_313))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t L_315 = L_314->___int32_3_55;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_316 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_317 = L_316.___register_0;
		int32_t L_318 = L_317.___int32_3_55;
		return (bool)((((int32_t)L_315) == ((int32_t)L_318))? 1 : 0);
	}

IL_0677:
	{
		return (bool)0;
	}

IL_0679:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_319 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_320;
		L_320 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_319, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_321 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_322;
		L_322 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_321, NULL);
		bool L_323;
		L_323 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_320, L_322, NULL);
		if (!L_323)
		{
			goto IL_06c7;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_325 = L_324->___uint64_0_56;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_326 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_327 = L_326.___register_0;
		uint64_t L_328 = L_327.___uint64_0_56;
		if ((!(((uint64_t)L_325) == ((uint64_t)L_328))))
		{
			goto IL_06c5;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t L_330 = L_329->___uint64_1_57;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_331 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_332 = L_331.___register_0;
		uint64_t L_333 = L_332.___uint64_1_57;
		return (bool)((((int64_t)L_330) == ((int64_t)L_333))? 1 : 0);
	}

IL_06c5:
	{
		return (bool)0;
	}

IL_06c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		bool L_338;
		L_338 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_335, L_337, NULL);
		if (!L_338)
		{
			goto IL_0715;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_339 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t L_340 = L_339->___int64_0_58;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_341 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_342 = L_341.___register_0;
		int64_t L_343 = L_342.___int64_0_58;
		if ((!(((uint64_t)L_340) == ((uint64_t)L_343))))
		{
			goto IL_0713;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_344 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t L_345 = L_344->___int64_1_59;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_346 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_347 = L_346.___register_0;
		int64_t L_348 = L_347.___int64_1_59;
		return (bool)((((int64_t)L_345) == ((int64_t)L_348))? 1 : 0);
	}

IL_0713:
	{
		return (bool)0;
	}

IL_0715:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_349 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_350;
		L_350 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_349, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_351 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_352;
		L_352 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_351, NULL);
		bool L_353;
		L_353 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_350, L_352, NULL);
		if (!L_353)
		{
			goto IL_0793;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_354 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_355 = L_354->___single_0_60;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_356 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register_0;
		float L_358 = L_357.___single_0_60;
		if ((!(((float)L_355) == ((float)L_358))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_359 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_360 = L_359->___single_1_61;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_361 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_362 = L_361.___register_0;
		float L_363 = L_362.___single_1_61;
		if ((!(((float)L_360) == ((float)L_363))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_364 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_365 = L_364->___single_2_62;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_366 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register_0;
		float L_368 = L_367.___single_2_62;
		if ((!(((float)L_365) == ((float)L_368))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_369 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float L_370 = L_369->___single_3_63;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_371 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_372 = L_371.___register_0;
		float L_373 = L_372.___single_3_63;
		return (bool)((((float)L_370) == ((float)L_373))? 1 : 0);
	}

IL_0791:
	{
		return (bool)0;
	}

IL_0793:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_374 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_375;
		L_375 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_374, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_376 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_377;
		L_377 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_376, NULL);
		bool L_378;
		L_378 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_375, L_377, NULL);
		if (!L_378)
		{
			goto IL_07e1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_379 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double L_380 = L_379->___double_0_64;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_381 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_382 = L_381.___register_0;
		double L_383 = L_382.___double_0_64;
		if ((!(((double)L_380) == ((double)L_383))))
		{
			goto IL_07df;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_384 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double L_385 = L_384->___double_1_65;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_386 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_387 = L_386.___register_0;
		double L_388 = L_387.___double_1_65;
		return (bool)((((double)L_385) == ((double)L_388))? 1 : 0);
	}

IL_07df:
	{
		return (bool)0;
	}

IL_07e1:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_389 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_389);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_389, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_389, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27_AdjustorThunk (RuntimeObject* __this, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_other, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 System.Numerics.Vector`1<System.UInt64>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		uint64_t L_8;
		L_8 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_9);
		V_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		int32_t L_11;
		L_11 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_6, L_11, NULL);
		V_0 = L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a7;
		}
	}
	{
		V_3 = 0;
		goto IL_009d;
	}

IL_0078:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		uint64_t L_24;
		L_24 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_25 = L_24;
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_25);
		V_4 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_26, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		int32_t L_27;
		L_27 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF((&V_4), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_22, L_27, NULL);
		V_0 = L_28;
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009d:
	{
		int32_t L_30 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_31;
		L_31 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_32 = V_0;
		return L_32;
	}

IL_00a7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00fa;
		}
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_5;
		uint64_t L_40;
		L_40 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_41 = L_40;
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_41);
		V_6 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_42, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		int32_t L_43;
		L_43 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_44;
		L_44 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_38, L_43, NULL);
		V_0 = L_44;
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ef:
	{
		int32_t L_46 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_47;
		L_47 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_48 = V_0;
		return L_48;
	}

IL_00fa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_014d;
		}
	}
	{
		V_7 = 0;
		goto IL_0142;
	}

IL_011a:
	{
		int32_t L_54 = V_0;
		int32_t L_55 = V_7;
		uint64_t L_56;
		L_56 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_57 = L_56;
		RuntimeObject* L_58 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_57);
		V_8 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_58, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		int32_t L_59;
		L_59 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_60;
		L_60 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_54, L_59, NULL);
		V_0 = L_60;
		int32_t L_61 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0142:
	{
		int32_t L_62 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_63;
		L_63 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_64 = V_0;
		return L_64;
	}

IL_014d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		bool L_69;
		L_69 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_66, L_68, NULL);
		if (!L_69)
		{
			goto IL_01a0;
		}
	}
	{
		V_9 = 0;
		goto IL_0195;
	}

IL_016d:
	{
		int32_t L_70 = V_0;
		int32_t L_71 = V_9;
		uint64_t L_72;
		L_72 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_71, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_73 = L_72;
		RuntimeObject* L_74 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_73);
		V_10 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_74, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		int32_t L_75;
		L_75 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_10), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_76;
		L_76 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_70, L_75, NULL);
		V_0 = L_76;
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0195:
	{
		int32_t L_78 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_79;
		L_79 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_80 = V_0;
		return L_80;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_01f3;
		}
	}
	{
		V_11 = 0;
		goto IL_01e8;
	}

IL_01c0:
	{
		int32_t L_86 = V_0;
		int32_t L_87 = V_11;
		uint64_t L_88;
		L_88 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_87, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_89);
		V_12 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_90, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_91;
		L_91 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_12), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_92;
		L_92 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_86, L_91, NULL);
		V_0 = L_92;
		int32_t L_93 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_01e8:
	{
		int32_t L_94 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_95;
		L_95 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_01c0;
		}
	}
	{
		int32_t L_96 = V_0;
		return L_96;
	}

IL_01f3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		bool L_101;
		L_101 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_0246;
		}
	}
	{
		V_13 = 0;
		goto IL_023b;
	}

IL_0213:
	{
		int32_t L_102 = V_0;
		int32_t L_103 = V_13;
		uint64_t L_104;
		L_104 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_103, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_105);
		V_14 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_106, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		int32_t L_107;
		L_107 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_14), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_108;
		L_108 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_102, L_107, NULL);
		V_0 = L_108;
		int32_t L_109 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_023b:
	{
		int32_t L_110 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_111;
		L_111 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_0213;
		}
	}
	{
		int32_t L_112 = V_0;
		return L_112;
	}

IL_0246:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_113 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_114;
		L_114 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_113, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_115 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_116;
		L_116 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_115, NULL);
		bool L_117;
		L_117 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_114, L_116, NULL);
		if (!L_117)
		{
			goto IL_0299;
		}
	}
	{
		V_15 = 0;
		goto IL_028e;
	}

IL_0266:
	{
		int32_t L_118 = V_0;
		int32_t L_119 = V_15;
		uint64_t L_120;
		L_120 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_121 = L_120;
		RuntimeObject* L_122 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_121);
		V_16 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_122, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		int32_t L_123;
		L_123 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_16), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_124;
		L_124 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_118, L_123, NULL);
		V_0 = L_124;
		int32_t L_125 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_028e:
	{
		int32_t L_126 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_127;
		L_127 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_126) < ((int32_t)L_127)))
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_128 = V_0;
		return L_128;
	}

IL_0299:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_130, L_132, NULL);
		if (!L_133)
		{
			goto IL_02ec;
		}
	}
	{
		V_17 = 0;
		goto IL_02e1;
	}

IL_02b9:
	{
		int32_t L_134 = V_0;
		int32_t L_135 = V_17;
		uint64_t L_136;
		L_136 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_135, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_137 = L_136;
		RuntimeObject* L_138 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_137);
		V_18 = ((*(float*)((float*)(float*)UnBox(L_138, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		int32_t L_139;
		L_139 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_18), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_140;
		L_140 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_134, L_139, NULL);
		V_0 = L_140;
		int32_t L_141 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_02e1:
	{
		int32_t L_142 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_143;
		L_143 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_02b9;
		}
	}
	{
		int32_t L_144 = V_0;
		return L_144;
	}

IL_02ec:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_145 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_146;
		L_146 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_145, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		bool L_149;
		L_149 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_146, L_148, NULL);
		if (!L_149)
		{
			goto IL_033f;
		}
	}
	{
		V_19 = 0;
		goto IL_0334;
	}

IL_030c:
	{
		int32_t L_150 = V_0;
		int32_t L_151 = V_19;
		uint64_t L_152;
		L_152 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_151, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_153 = L_152;
		RuntimeObject* L_154 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_153);
		V_20 = ((*(double*)((double*)(double*)UnBox(L_154, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		int32_t L_155;
		L_155 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_20), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_156;
		L_156 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_150, L_155, NULL);
		V_0 = L_156;
		int32_t L_157 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_157, 1));
	}

IL_0334:
	{
		int32_t L_158 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_159;
		L_159 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_158) < ((int32_t)L_159)))
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_160 = V_0;
		return L_160;
	}

IL_033f:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_161 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_161);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_161, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_161, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_RuntimeMethod_var)));
	}

IL_034a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_162 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_163;
		L_163 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_162, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_165;
		L_165 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_164, NULL);
		bool L_166;
		L_166 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_163, L_165, NULL);
		if (!L_166)
		{
			goto IL_04da;
		}
	}
	{
		int32_t L_167 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_168 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_169 = (uint8_t*)(&L_168->___byte_0_0);
		int32_t L_170;
		L_170 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_169, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_171;
		L_171 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_167, L_170, NULL);
		V_0 = L_171;
		int32_t L_172 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_173 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_174 = (uint8_t*)(&L_173->___byte_1_1);
		int32_t L_175;
		L_175 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_174, NULL);
		int32_t L_176;
		L_176 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_172, L_175, NULL);
		V_0 = L_176;
		int32_t L_177 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_178 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_179 = (uint8_t*)(&L_178->___byte_2_2);
		int32_t L_180;
		L_180 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_179, NULL);
		int32_t L_181;
		L_181 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_177, L_180, NULL);
		V_0 = L_181;
		int32_t L_182 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_183 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_184 = (uint8_t*)(&L_183->___byte_3_3);
		int32_t L_185;
		L_185 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_184, NULL);
		int32_t L_186;
		L_186 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_182, L_185, NULL);
		V_0 = L_186;
		int32_t L_187 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_188 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_189 = (uint8_t*)(&L_188->___byte_4_4);
		int32_t L_190;
		L_190 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_189, NULL);
		int32_t L_191;
		L_191 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_187, L_190, NULL);
		V_0 = L_191;
		int32_t L_192 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_193 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_194 = (uint8_t*)(&L_193->___byte_5_5);
		int32_t L_195;
		L_195 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_194, NULL);
		int32_t L_196;
		L_196 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_192, L_195, NULL);
		V_0 = L_196;
		int32_t L_197 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_199 = (uint8_t*)(&L_198->___byte_6_6);
		int32_t L_200;
		L_200 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_199, NULL);
		int32_t L_201;
		L_201 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_197, L_200, NULL);
		V_0 = L_201;
		int32_t L_202 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_203 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_204 = (uint8_t*)(&L_203->___byte_7_7);
		int32_t L_205;
		L_205 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_204, NULL);
		int32_t L_206;
		L_206 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_202, L_205, NULL);
		V_0 = L_206;
		int32_t L_207 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_208 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_209 = (uint8_t*)(&L_208->___byte_8_8);
		int32_t L_210;
		L_210 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_209, NULL);
		int32_t L_211;
		L_211 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_207, L_210, NULL);
		V_0 = L_211;
		int32_t L_212 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_213 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_214 = (uint8_t*)(&L_213->___byte_9_9);
		int32_t L_215;
		L_215 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_214, NULL);
		int32_t L_216;
		L_216 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_212, L_215, NULL);
		V_0 = L_216;
		int32_t L_217 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_219 = (uint8_t*)(&L_218->___byte_10_10);
		int32_t L_220;
		L_220 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_219, NULL);
		int32_t L_221;
		L_221 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_217, L_220, NULL);
		V_0 = L_221;
		int32_t L_222 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_223 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_224 = (uint8_t*)(&L_223->___byte_11_11);
		int32_t L_225;
		L_225 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_224, NULL);
		int32_t L_226;
		L_226 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_222, L_225, NULL);
		V_0 = L_226;
		int32_t L_227 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_228 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_229 = (uint8_t*)(&L_228->___byte_12_12);
		int32_t L_230;
		L_230 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_229, NULL);
		int32_t L_231;
		L_231 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_227, L_230, NULL);
		V_0 = L_231;
		int32_t L_232 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_233 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_234 = (uint8_t*)(&L_233->___byte_13_13);
		int32_t L_235;
		L_235 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_234, NULL);
		int32_t L_236;
		L_236 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_232, L_235, NULL);
		V_0 = L_236;
		int32_t L_237 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_238 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_239 = (uint8_t*)(&L_238->___byte_14_14);
		int32_t L_240;
		L_240 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_239, NULL);
		int32_t L_241;
		L_241 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_237, L_240, NULL);
		V_0 = L_241;
		int32_t L_242 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_243 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint8_t* L_244 = (uint8_t*)(&L_243->___byte_15_15);
		int32_t L_245;
		L_245 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_244, NULL);
		int32_t L_246;
		L_246 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_242, L_245, NULL);
		V_0 = L_246;
		int32_t L_247 = V_0;
		return L_247;
	}

IL_04da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_248 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_249;
		L_249 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_248, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_250 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_251;
		L_251 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_250, NULL);
		bool L_252;
		L_252 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_249, L_251, NULL);
		if (!L_252)
		{
			goto IL_066a;
		}
	}
	{
		int32_t L_253 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_255 = (int8_t*)(&L_254->___sbyte_0_16);
		int32_t L_256;
		L_256 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_255, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_257;
		L_257 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_253, L_256, NULL);
		V_0 = L_257;
		int32_t L_258 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_260 = (int8_t*)(&L_259->___sbyte_1_17);
		int32_t L_261;
		L_261 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_260, NULL);
		int32_t L_262;
		L_262 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_258, L_261, NULL);
		V_0 = L_262;
		int32_t L_263 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_265 = (int8_t*)(&L_264->___sbyte_2_18);
		int32_t L_266;
		L_266 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_265, NULL);
		int32_t L_267;
		L_267 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_263, L_266, NULL);
		V_0 = L_267;
		int32_t L_268 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_269 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_270 = (int8_t*)(&L_269->___sbyte_3_19);
		int32_t L_271;
		L_271 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_270, NULL);
		int32_t L_272;
		L_272 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_268, L_271, NULL);
		V_0 = L_272;
		int32_t L_273 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_275 = (int8_t*)(&L_274->___sbyte_4_20);
		int32_t L_276;
		L_276 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_275, NULL);
		int32_t L_277;
		L_277 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_273, L_276, NULL);
		V_0 = L_277;
		int32_t L_278 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_280 = (int8_t*)(&L_279->___sbyte_5_21);
		int32_t L_281;
		L_281 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_280, NULL);
		int32_t L_282;
		L_282 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_278, L_281, NULL);
		V_0 = L_282;
		int32_t L_283 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_285 = (int8_t*)(&L_284->___sbyte_6_22);
		int32_t L_286;
		L_286 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_285, NULL);
		int32_t L_287;
		L_287 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_283, L_286, NULL);
		V_0 = L_287;
		int32_t L_288 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_290 = (int8_t*)(&L_289->___sbyte_7_23);
		int32_t L_291;
		L_291 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_290, NULL);
		int32_t L_292;
		L_292 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_288, L_291, NULL);
		V_0 = L_292;
		int32_t L_293 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_294 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_295 = (int8_t*)(&L_294->___sbyte_8_24);
		int32_t L_296;
		L_296 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_295, NULL);
		int32_t L_297;
		L_297 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_293, L_296, NULL);
		V_0 = L_297;
		int32_t L_298 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_300 = (int8_t*)(&L_299->___sbyte_9_25);
		int32_t L_301;
		L_301 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_300, NULL);
		int32_t L_302;
		L_302 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_298, L_301, NULL);
		V_0 = L_302;
		int32_t L_303 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_305 = (int8_t*)(&L_304->___sbyte_10_26);
		int32_t L_306;
		L_306 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_305, NULL);
		int32_t L_307;
		L_307 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_303, L_306, NULL);
		V_0 = L_307;
		int32_t L_308 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_310 = (int8_t*)(&L_309->___sbyte_11_27);
		int32_t L_311;
		L_311 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_310, NULL);
		int32_t L_312;
		L_312 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_308, L_311, NULL);
		V_0 = L_312;
		int32_t L_313 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_315 = (int8_t*)(&L_314->___sbyte_12_28);
		int32_t L_316;
		L_316 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_315, NULL);
		int32_t L_317;
		L_317 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_313, L_316, NULL);
		V_0 = L_317;
		int32_t L_318 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_319 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_320 = (int8_t*)(&L_319->___sbyte_13_29);
		int32_t L_321;
		L_321 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_320, NULL);
		int32_t L_322;
		L_322 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_318, L_321, NULL);
		V_0 = L_322;
		int32_t L_323 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_325 = (int8_t*)(&L_324->___sbyte_14_30);
		int32_t L_326;
		L_326 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_325, NULL);
		int32_t L_327;
		L_327 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_323, L_326, NULL);
		V_0 = L_327;
		int32_t L_328 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int8_t* L_330 = (int8_t*)(&L_329->___sbyte_15_31);
		int32_t L_331;
		L_331 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_330, NULL);
		int32_t L_332;
		L_332 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_328, L_331, NULL);
		V_0 = L_332;
		int32_t L_333 = V_0;
		return L_333;
	}

IL_066a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		bool L_338;
		L_338 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_335, L_337, NULL);
		if (!L_338)
		{
			goto IL_0742;
		}
	}
	{
		int32_t L_339 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_340 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_341 = (uint16_t*)(&L_340->___uint16_0_32);
		int32_t L_342;
		L_342 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_341, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_343;
		L_343 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_339, L_342, NULL);
		V_0 = L_343;
		int32_t L_344 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_345 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_346 = (uint16_t*)(&L_345->___uint16_1_33);
		int32_t L_347;
		L_347 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_346, NULL);
		int32_t L_348;
		L_348 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_344, L_347, NULL);
		V_0 = L_348;
		int32_t L_349 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_350 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_351 = (uint16_t*)(&L_350->___uint16_2_34);
		int32_t L_352;
		L_352 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_351, NULL);
		int32_t L_353;
		L_353 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_349, L_352, NULL);
		V_0 = L_353;
		int32_t L_354 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_355 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_356 = (uint16_t*)(&L_355->___uint16_3_35);
		int32_t L_357;
		L_357 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_356, NULL);
		int32_t L_358;
		L_358 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_354, L_357, NULL);
		V_0 = L_358;
		int32_t L_359 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_360 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_361 = (uint16_t*)(&L_360->___uint16_4_36);
		int32_t L_362;
		L_362 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_361, NULL);
		int32_t L_363;
		L_363 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_359, L_362, NULL);
		V_0 = L_363;
		int32_t L_364 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_366 = (uint16_t*)(&L_365->___uint16_5_37);
		int32_t L_367;
		L_367 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_366, NULL);
		int32_t L_368;
		L_368 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_364, L_367, NULL);
		V_0 = L_368;
		int32_t L_369 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_370 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_371 = (uint16_t*)(&L_370->___uint16_6_38);
		int32_t L_372;
		L_372 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_371, NULL);
		int32_t L_373;
		L_373 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_369, L_372, NULL);
		V_0 = L_373;
		int32_t L_374 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_375 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint16_t* L_376 = (uint16_t*)(&L_375->___uint16_7_39);
		int32_t L_377;
		L_377 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_376, NULL);
		int32_t L_378;
		L_378 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_374, L_377, NULL);
		V_0 = L_378;
		int32_t L_379 = V_0;
		return L_379;
	}

IL_0742:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_380 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_381;
		L_381 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_380, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_382 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_383;
		L_383 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_382, NULL);
		bool L_384;
		L_384 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_381, L_383, NULL);
		if (!L_384)
		{
			goto IL_081a;
		}
	}
	{
		int32_t L_385 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_386 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_387 = (int16_t*)(&L_386->___int16_0_40);
		int32_t L_388;
		L_388 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_387, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_389;
		L_389 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_385, L_388, NULL);
		V_0 = L_389;
		int32_t L_390 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_391 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_392 = (int16_t*)(&L_391->___int16_1_41);
		int32_t L_393;
		L_393 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_392, NULL);
		int32_t L_394;
		L_394 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_390, L_393, NULL);
		V_0 = L_394;
		int32_t L_395 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_396 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_397 = (int16_t*)(&L_396->___int16_2_42);
		int32_t L_398;
		L_398 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_397, NULL);
		int32_t L_399;
		L_399 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_395, L_398, NULL);
		V_0 = L_399;
		int32_t L_400 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_401 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_402 = (int16_t*)(&L_401->___int16_3_43);
		int32_t L_403;
		L_403 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_402, NULL);
		int32_t L_404;
		L_404 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_400, L_403, NULL);
		V_0 = L_404;
		int32_t L_405 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_406 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_407 = (int16_t*)(&L_406->___int16_4_44);
		int32_t L_408;
		L_408 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_407, NULL);
		int32_t L_409;
		L_409 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_405, L_408, NULL);
		V_0 = L_409;
		int32_t L_410 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_411 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_412 = (int16_t*)(&L_411->___int16_5_45);
		int32_t L_413;
		L_413 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_412, NULL);
		int32_t L_414;
		L_414 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_410, L_413, NULL);
		V_0 = L_414;
		int32_t L_415 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_416 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_417 = (int16_t*)(&L_416->___int16_6_46);
		int32_t L_418;
		L_418 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_417, NULL);
		int32_t L_419;
		L_419 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_415, L_418, NULL);
		V_0 = L_419;
		int32_t L_420 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_421 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int16_t* L_422 = (int16_t*)(&L_421->___int16_7_47);
		int32_t L_423;
		L_423 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_422, NULL);
		int32_t L_424;
		L_424 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_420, L_423, NULL);
		V_0 = L_424;
		int32_t L_425 = V_0;
		return L_425;
	}

IL_081a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_426 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_427;
		L_427 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_426, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_428 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_429;
		L_429 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_428, NULL);
		bool L_430;
		L_430 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_427, L_429, NULL);
		if (!L_430)
		{
			goto IL_0893;
		}
	}
	{
		int32_t L_431 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_432 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_433 = (uint32_t*)(&L_432->___uint32_0_48);
		int32_t L_434;
		L_434 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_433, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_435;
		L_435 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_431, L_434, NULL);
		V_0 = L_435;
		int32_t L_436 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_437 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_438 = (uint32_t*)(&L_437->___uint32_1_49);
		int32_t L_439;
		L_439 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_438, NULL);
		int32_t L_440;
		L_440 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_436, L_439, NULL);
		V_0 = L_440;
		int32_t L_441 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_442 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_443 = (uint32_t*)(&L_442->___uint32_2_50);
		int32_t L_444;
		L_444 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_443, NULL);
		int32_t L_445;
		L_445 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_441, L_444, NULL);
		V_0 = L_445;
		int32_t L_446 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_447 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint32_t* L_448 = (uint32_t*)(&L_447->___uint32_3_51);
		int32_t L_449;
		L_449 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_448, NULL);
		int32_t L_450;
		L_450 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_446, L_449, NULL);
		V_0 = L_450;
		int32_t L_451 = V_0;
		return L_451;
	}

IL_0893:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_452 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_453;
		L_453 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_452, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_454 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_455;
		L_455 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_454, NULL);
		bool L_456;
		L_456 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_453, L_455, NULL);
		if (!L_456)
		{
			goto IL_090c;
		}
	}
	{
		int32_t L_457 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_458 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_459 = (int32_t*)(&L_458->___int32_0_52);
		int32_t L_460;
		L_460 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_459, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_461;
		L_461 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_457, L_460, NULL);
		V_0 = L_461;
		int32_t L_462 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_463 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_464 = (int32_t*)(&L_463->___int32_1_53);
		int32_t L_465;
		L_465 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_464, NULL);
		int32_t L_466;
		L_466 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_462, L_465, NULL);
		V_0 = L_466;
		int32_t L_467 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_468 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_469 = (int32_t*)(&L_468->___int32_2_54);
		int32_t L_470;
		L_470 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_469, NULL);
		int32_t L_471;
		L_471 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_467, L_470, NULL);
		V_0 = L_471;
		int32_t L_472 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_473 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int32_t* L_474 = (int32_t*)(&L_473->___int32_3_55);
		int32_t L_475;
		L_475 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_474, NULL);
		int32_t L_476;
		L_476 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_472, L_475, NULL);
		V_0 = L_476;
		int32_t L_477 = V_0;
		return L_477;
	}

IL_090c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_478 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_479;
		L_479 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_478, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_480 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_481;
		L_481 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_480, NULL);
		bool L_482;
		L_482 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_479, L_481, NULL);
		if (!L_482)
		{
			goto IL_0957;
		}
	}
	{
		int32_t L_483 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_484 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_485 = (uint64_t*)(&L_484->___uint64_0_56);
		int32_t L_486;
		L_486 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_485, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_487;
		L_487 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_483, L_486, NULL);
		V_0 = L_487;
		int32_t L_488 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_489 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		uint64_t* L_490 = (uint64_t*)(&L_489->___uint64_1_57);
		int32_t L_491;
		L_491 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_490, NULL);
		int32_t L_492;
		L_492 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_488, L_491, NULL);
		V_0 = L_492;
		int32_t L_493 = V_0;
		return L_493;
	}

IL_0957:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_494 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_495;
		L_495 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_494, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_496 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_497;
		L_497 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_496, NULL);
		bool L_498;
		L_498 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_495, L_497, NULL);
		if (!L_498)
		{
			goto IL_09a2;
		}
	}
	{
		int32_t L_499 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_500 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_501 = (int64_t*)(&L_500->___int64_0_58);
		int32_t L_502;
		L_502 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_501, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_503;
		L_503 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_499, L_502, NULL);
		V_0 = L_503;
		int32_t L_504 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_505 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		int64_t* L_506 = (int64_t*)(&L_505->___int64_1_59);
		int32_t L_507;
		L_507 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_506, NULL);
		int32_t L_508;
		L_508 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_504, L_507, NULL);
		V_0 = L_508;
		int32_t L_509 = V_0;
		return L_509;
	}

IL_09a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0a1b;
		}
	}
	{
		int32_t L_515 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_516 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_517 = (float*)(&L_516->___single_0_60);
		int32_t L_518;
		L_518 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_517, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_519;
		L_519 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_515, L_518, NULL);
		V_0 = L_519;
		int32_t L_520 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_521 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_522 = (float*)(&L_521->___single_1_61);
		int32_t L_523;
		L_523 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_522, NULL);
		int32_t L_524;
		L_524 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_520, L_523, NULL);
		V_0 = L_524;
		int32_t L_525 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_526 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_527 = (float*)(&L_526->___single_2_62);
		int32_t L_528;
		L_528 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_527, NULL);
		int32_t L_529;
		L_529 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_525, L_528, NULL);
		V_0 = L_529;
		int32_t L_530 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_531 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		float* L_532 = (float*)(&L_531->___single_3_63);
		int32_t L_533;
		L_533 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_532, NULL);
		int32_t L_534;
		L_534 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_530, L_533, NULL);
		V_0 = L_534;
		int32_t L_535 = V_0;
		return L_535;
	}

IL_0a1b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_536 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_537;
		L_537 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_536, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_538 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_539;
		L_539 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_538, NULL);
		bool L_540;
		L_540 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_537, L_539, NULL);
		if (!L_540)
		{
			goto IL_0a66;
		}
	}
	{
		int32_t L_541 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_542 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_543 = (double*)(&L_542->___double_0_64);
		int32_t L_544;
		L_544 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_543, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_545;
		L_545 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_541, L_544, NULL);
		V_0 = L_545;
		int32_t L_546 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_547 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register_0);
		double* L_548 = (double*)(&L_547->___double_1_65);
		int32_t L_549;
		L_549 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_548, NULL);
		int32_t L_550;
		L_550 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_546, L_549, NULL);
		V_0 = L_550;
		int32_t L_551 = V_0;
		return L_551;
	}

IL_0a66:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_552 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_552);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_552, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_552, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_mEC951E56E2DC500CF877DFAD5542E0920B73B00A(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Numerics.Vector`1<System.UInt64>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, (RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m3EBF88D3E195BD2C4B0D1CCBD9F71E32233CA4F4(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Numerics.Vector`1<System.UInt64>::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, (Il2CppChar)((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		uint64_t L_8;
		L_8 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_9);
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.String System.IFormattable::ToString(System.String,System.IFormatProvider) */, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, L_11, L_12);
		NullCheck(L_6);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, (Il2CppChar)((int32_t)32), NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_22;
		L_22 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_21) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_24;
		L_24 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		uint64_t L_25;
		L_25 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		uint64_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_26);
		String_t* L_28 = ___0_format;
		RuntimeObject* L_29 = ___1_formatProvider;
		String_t* L_30;
		L_30 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.String System.IFormattable::ToString(System.String,System.IFormatProvider) */, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, (RuntimeObject*)L_27, L_28, L_29);
		NullCheck(L_23);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, (Il2CppChar)((int32_t)62), NULL);
		StringBuilder_t* L_34 = V_0;
		NullCheck((RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_34);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m8F20119DB8CF7117F2D6E4D165C4A843F7D3586C(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Vector`1<System.UInt64>::op_Equality(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD4D4AE7733CACE50CA2FCFFFB0A16818EEC01293_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___1_right;
		bool L_1;
		L_1 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_1;
	}
}
// System.Boolean System.Numerics.Vector`1<System.UInt64>::op_Inequality(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_m4963768CF3F7944DA5E519ADB8668431198BBC36_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_0 = ___0_left;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector`1<System.UInt64>::op_Explicit(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_mEC3EDF70D967977C9CD17D95CD3D6B52F405B08B_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&(&___0_value)->___register_0);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_1), L_0, /*hidden argument*/Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector`1<System.UInt64>::Equals(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___0_left, Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		uint64_t L_12;
		L_12 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_13 = V_1;
		uint64_t L_14;
		L_14 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_15;
		L_15 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_12, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_19;
		L_19 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_21), (void*)L_20, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_27;
		L_27 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		uint64_t L_33;
		L_33 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_34 = V_3;
		uint64_t L_35;
		L_35 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_36;
		L_36 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_33, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_40;
		L_40 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_42), (void*)L_41, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_48;
		L_48 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		uint64_t L_54;
		L_54 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_55 = V_5;
		uint64_t L_56;
		L_56 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_57;
		L_57 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_54, L_56, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_61;
		L_61 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_63), (void*)L_62, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_69;
		L_69 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		uint64_t L_75;
		L_75 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_74, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_76 = V_7;
		uint64_t L_77;
		L_77 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_78;
		L_78 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_75, L_77, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_82;
		L_82 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_84), (void*)L_83, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_90;
		L_90 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		uint64_t L_96;
		L_96 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_95, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_97 = V_9;
		uint64_t L_98;
		L_98 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_97, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_99;
		L_99 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_96, L_98, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_103;
		L_103 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_105), (void*)L_104, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_111;
		L_111 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		uint64_t L_117;
		L_117 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_116, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_118 = V_11;
		uint64_t L_119;
		L_119 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_118, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_120;
		L_120 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_117, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_124;
		L_124 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_126), (void*)L_125, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_132;
		L_132 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		uint64_t L_138;
		L_138 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_137, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_139 = V_13;
		uint64_t L_140;
		L_140 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_139, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_141;
		L_141 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_138, L_140, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_145;
		L_145 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_147), (void*)L_146, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_153;
		L_153 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		uint64_t L_159;
		L_159 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_158, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_160 = V_15;
		uint64_t L_161;
		L_161 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_160, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_162;
		L_162 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_159, L_161, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_166;
		L_166 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_168), (void*)L_167, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_174;
		L_174 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		uint64_t L_180;
		L_180 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_179, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_181 = V_17;
		uint64_t L_182;
		L_182 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_181, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_183;
		L_183 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_180, L_182, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_187;
		L_187 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_189), (void*)L_188, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_195;
		L_195 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		uint64_t L_201;
		L_201 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___0_left), L_200, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_202 = V_19;
		uint64_t L_203;
		L_203 = Vector_1_get_Item_m685EA4A01E8AF51DC7B5F78DE0583F8FD4997C99((&___1_right), L_202, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_204;
		L_204 = ((  bool (*) (uint64_t, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)))(L_201, L_203, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_208;
		L_208 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_mBEC18AF78DE340D929AD22019717DE9ED57A4CCA((&L_210), (void*)L_209, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_211);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var)));
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = L_217.___register_0;
		uint8_t L_219 = L_218.___byte_0_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = L_220.___register_0;
		uint8_t L_222 = L_221.___byte_0_0;
		G_B84_0 = (&V_20);
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0_0 = (uint8_t)G_B86_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = L_224.___register_0;
		uint8_t L_226 = L_225.___byte_1_1;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = L_227.___register_0;
		uint8_t L_229 = L_228.___byte_1_1;
		G_B87_0 = (&V_20);
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1_1 = (uint8_t)G_B89_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register_0;
		uint8_t L_233 = L_232.___byte_2_2;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = L_234.___register_0;
		uint8_t L_236 = L_235.___byte_2_2;
		G_B90_0 = (&V_20);
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2_2 = (uint8_t)G_B92_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = L_238.___register_0;
		uint8_t L_240 = L_239.___byte_3_3;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register_0;
		uint8_t L_243 = L_242.___byte_3_3;
		G_B93_0 = (&V_20);
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3_3 = (uint8_t)G_B95_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = L_245.___register_0;
		uint8_t L_247 = L_246.___byte_4_4;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = L_248.___register_0;
		uint8_t L_250 = L_249.___byte_4_4;
		G_B96_0 = (&V_20);
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4_4 = (uint8_t)G_B98_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = L_252.___register_0;
		uint8_t L_254 = L_253.___byte_5_5;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = L_255.___register_0;
		uint8_t L_257 = L_256.___byte_5_5;
		G_B99_0 = (&V_20);
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5_5 = (uint8_t)G_B101_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = L_259.___register_0;
		uint8_t L_261 = L_260.___byte_6_6;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = L_262.___register_0;
		uint8_t L_264 = L_263.___byte_6_6;
		G_B102_0 = (&V_20);
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6_6 = (uint8_t)G_B104_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register_0;
		uint8_t L_268 = L_267.___byte_7_7;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = L_269.___register_0;
		uint8_t L_271 = L_270.___byte_7_7;
		G_B105_0 = (&V_20);
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7_7 = (uint8_t)G_B107_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = L_273.___register_0;
		uint8_t L_275 = L_274.___byte_8_8;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register_0;
		uint8_t L_278 = L_277.___byte_8_8;
		G_B108_0 = (&V_20);
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8_8 = (uint8_t)G_B110_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = L_280.___register_0;
		uint8_t L_282 = L_281.___byte_9_9;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = L_283.___register_0;
		uint8_t L_285 = L_284.___byte_9_9;
		G_B111_0 = (&V_20);
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9_9 = (uint8_t)G_B113_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = L_287.___register_0;
		uint8_t L_289 = L_288.___byte_10_10;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = L_290.___register_0;
		uint8_t L_292 = L_291.___byte_10_10;
		G_B114_0 = (&V_20);
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10_10 = (uint8_t)G_B116_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = L_294.___register_0;
		uint8_t L_296 = L_295.___byte_11_11;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = L_297.___register_0;
		uint8_t L_299 = L_298.___byte_11_11;
		G_B117_0 = (&V_20);
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11_11 = (uint8_t)G_B119_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register_0;
		uint8_t L_303 = L_302.___byte_12_12;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = L_304.___register_0;
		uint8_t L_306 = L_305.___byte_12_12;
		G_B120_0 = (&V_20);
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12_12 = (uint8_t)G_B122_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = L_308.___register_0;
		uint8_t L_310 = L_309.___byte_13_13;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register_0;
		uint8_t L_313 = L_312.___byte_13_13;
		G_B123_0 = (&V_20);
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13_13 = (uint8_t)G_B125_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = L_315.___register_0;
		uint8_t L_317 = L_316.___byte_14_14;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = L_318.___register_0;
		uint8_t L_320 = L_319.___byte_14_14;
		G_B126_0 = (&V_20);
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14_14 = (uint8_t)G_B128_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = L_322.___register_0;
		uint8_t L_324 = L_323.___byte_15_15;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = L_325.___register_0;
		uint8_t L_327 = L_326.___byte_15_15;
		G_B129_0 = (&V_20);
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15_15 = (uint8_t)G_B131_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_329), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = L_335.___register_0;
		int8_t L_337 = L_336.___sbyte_0_16;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = L_338.___register_0;
		int8_t L_340 = L_339.___sbyte_0_16;
		G_B134_0 = (&V_20);
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0_16 = (int8_t)G_B136_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = L_342.___register_0;
		int8_t L_344 = L_343.___sbyte_1_17;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = L_345.___register_0;
		int8_t L_347 = L_346.___sbyte_1_17;
		G_B137_0 = (&V_20);
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1_17 = (int8_t)G_B139_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = L_349.___register_0;
		int8_t L_351 = L_350.___sbyte_2_18;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = L_352.___register_0;
		int8_t L_354 = L_353.___sbyte_2_18;
		G_B140_0 = (&V_20);
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2_18 = (int8_t)G_B142_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register_0;
		int8_t L_358 = L_357.___sbyte_3_19;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = L_359.___register_0;
		int8_t L_361 = L_360.___sbyte_3_19;
		G_B143_0 = (&V_20);
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3_19 = (int8_t)G_B145_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = L_363.___register_0;
		int8_t L_365 = L_364.___sbyte_4_20;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register_0;
		int8_t L_368 = L_367.___sbyte_4_20;
		G_B146_0 = (&V_20);
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4_20 = (int8_t)G_B148_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = L_370.___register_0;
		int8_t L_372 = L_371.___sbyte_5_21;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = L_373.___register_0;
		int8_t L_375 = L_374.___sbyte_5_21;
		G_B149_0 = (&V_20);
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5_21 = (int8_t)G_B151_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = L_377.___register_0;
		int8_t L_379 = L_378.___sbyte_6_22;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = L_380.___register_0;
		int8_t L_382 = L_381.___sbyte_6_22;
		G_B152_0 = (&V_20);
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6_22 = (int8_t)G_B154_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = L_384.___register_0;
		int8_t L_386 = L_385.___sbyte_7_23;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = L_387.___register_0;
		int8_t L_389 = L_388.___sbyte_7_23;
		G_B155_0 = (&V_20);
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7_23 = (int8_t)G_B157_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = L_391.___register_0;
		int8_t L_393 = L_392.___sbyte_8_24;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = L_394.___register_0;
		int8_t L_396 = L_395.___sbyte_8_24;
		G_B158_0 = (&V_20);
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8_24 = (int8_t)G_B160_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = L_398.___register_0;
		int8_t L_400 = L_399.___sbyte_9_25;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = L_401.___register_0;
		int8_t L_403 = L_402.___sbyte_9_25;
		G_B161_0 = (&V_20);
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9_25 = (int8_t)G_B163_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = L_405.___register_0;
		int8_t L_407 = L_406.___sbyte_10_26;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = L_408.___register_0;
		int8_t L_410 = L_409.___sbyte_10_26;
		G_B164_0 = (&V_20);
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10_26 = (int8_t)G_B166_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = L_412.___register_0;
		int8_t L_414 = L_413.___sbyte_11_27;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = L_415.___register_0;
		int8_t L_417 = L_416.___sbyte_11_27;
		G_B167_0 = (&V_20);
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11_27 = (int8_t)G_B169_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = L_419.___register_0;
		int8_t L_421 = L_420.___sbyte_12_28;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = L_422.___register_0;
		int8_t L_424 = L_423.___sbyte_12_28;
		G_B170_0 = (&V_20);
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12_28 = (int8_t)G_B172_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = L_426.___register_0;
		int8_t L_428 = L_427.___sbyte_13_29;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = L_429.___register_0;
		int8_t L_431 = L_430.___sbyte_13_29;
		G_B173_0 = (&V_20);
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13_29 = (int8_t)G_B175_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = L_433.___register_0;
		int8_t L_435 = L_434.___sbyte_14_30;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = L_436.___register_0;
		int8_t L_438 = L_437.___sbyte_14_30;
		G_B176_0 = (&V_20);
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14_30 = (int8_t)G_B178_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = L_440.___register_0;
		int8_t L_442 = L_441.___sbyte_15_31;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = L_443.___register_0;
		int8_t L_445 = L_444.___sbyte_15_31;
		G_B179_0 = (&V_20);
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15_31 = (int8_t)G_B181_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_447), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = L_453.___register_0;
		uint16_t L_455 = L_454.___uint16_0_32;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = L_456.___register_0;
		uint16_t L_458 = L_457.___uint16_0_32;
		G_B184_0 = (&V_20);
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0_32 = (uint16_t)G_B186_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = L_460.___register_0;
		uint16_t L_462 = L_461.___uint16_1_33;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = L_463.___register_0;
		uint16_t L_465 = L_464.___uint16_1_33;
		G_B187_0 = (&V_20);
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1_33 = (uint16_t)G_B189_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = L_467.___register_0;
		uint16_t L_469 = L_468.___uint16_2_34;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = L_470.___register_0;
		uint16_t L_472 = L_471.___uint16_2_34;
		G_B190_0 = (&V_20);
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2_34 = (uint16_t)G_B192_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = L_474.___register_0;
		uint16_t L_476 = L_475.___uint16_3_35;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = L_477.___register_0;
		uint16_t L_479 = L_478.___uint16_3_35;
		G_B193_0 = (&V_20);
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3_35 = (uint16_t)G_B195_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = L_481.___register_0;
		uint16_t L_483 = L_482.___uint16_4_36;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = L_484.___register_0;
		uint16_t L_486 = L_485.___uint16_4_36;
		G_B196_0 = (&V_20);
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4_36 = (uint16_t)G_B198_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = L_488.___register_0;
		uint16_t L_490 = L_489.___uint16_5_37;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = L_491.___register_0;
		uint16_t L_493 = L_492.___uint16_5_37;
		G_B199_0 = (&V_20);
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5_37 = (uint16_t)G_B201_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = L_495.___register_0;
		uint16_t L_497 = L_496.___uint16_6_38;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = L_498.___register_0;
		uint16_t L_500 = L_499.___uint16_6_38;
		G_B202_0 = (&V_20);
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6_38 = (uint16_t)G_B204_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = L_502.___register_0;
		uint16_t L_504 = L_503.___uint16_7_39;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = L_505.___register_0;
		uint16_t L_507 = L_506.___uint16_7_39;
		G_B205_0 = (&V_20);
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7_39 = (uint16_t)G_B207_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_509), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = L_515.___register_0;
		int16_t L_517 = L_516.___int16_0_40;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = L_518.___register_0;
		int16_t L_520 = L_519.___int16_0_40;
		G_B210_0 = (&V_20);
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0_40 = (int16_t)G_B212_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = L_522.___register_0;
		int16_t L_524 = L_523.___int16_1_41;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = L_525.___register_0;
		int16_t L_527 = L_526.___int16_1_41;
		G_B213_0 = (&V_20);
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1_41 = (int16_t)G_B215_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = L_529.___register_0;
		int16_t L_531 = L_530.___int16_2_42;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = L_532.___register_0;
		int16_t L_534 = L_533.___int16_2_42;
		G_B216_0 = (&V_20);
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2_42 = (int16_t)G_B218_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = L_536.___register_0;
		int16_t L_538 = L_537.___int16_3_43;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = L_539.___register_0;
		int16_t L_541 = L_540.___int16_3_43;
		G_B219_0 = (&V_20);
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3_43 = (int16_t)G_B221_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = L_543.___register_0;
		int16_t L_545 = L_544.___int16_4_44;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = L_546.___register_0;
		int16_t L_548 = L_547.___int16_4_44;
		G_B222_0 = (&V_20);
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4_44 = (int16_t)G_B224_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = L_550.___register_0;
		int16_t L_552 = L_551.___int16_5_45;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = L_553.___register_0;
		int16_t L_555 = L_554.___int16_5_45;
		G_B225_0 = (&V_20);
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5_45 = (int16_t)G_B227_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = L_557.___register_0;
		int16_t L_559 = L_558.___int16_6_46;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = L_560.___register_0;
		int16_t L_562 = L_561.___int16_6_46;
		G_B228_0 = (&V_20);
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6_46 = (int16_t)G_B230_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = L_564.___register_0;
		int16_t L_566 = L_565.___int16_7_47;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = L_567.___register_0;
		int16_t L_569 = L_568.___int16_7_47;
		G_B231_0 = (&V_20);
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7_47 = (int16_t)G_B233_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_571), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = L_577.___register_0;
		uint32_t L_579 = L_578.___uint32_0_48;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = L_580.___register_0;
		uint32_t L_582 = L_581.___uint32_0_48;
		G_B236_0 = (&V_20);
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0_48 = G_B238_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = L_584.___register_0;
		uint32_t L_586 = L_585.___uint32_1_49;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = L_587.___register_0;
		uint32_t L_589 = L_588.___uint32_1_49;
		G_B239_0 = (&V_20);
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1_49 = G_B241_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = L_591.___register_0;
		uint32_t L_593 = L_592.___uint32_2_50;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = L_594.___register_0;
		uint32_t L_596 = L_595.___uint32_2_50;
		G_B242_0 = (&V_20);
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2_50 = G_B244_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = L_598.___register_0;
		uint32_t L_600 = L_599.___uint32_3_51;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = L_601.___register_0;
		uint32_t L_603 = L_602.___uint32_3_51;
		G_B245_0 = (&V_20);
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3_51 = G_B247_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_605), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = L_611.___register_0;
		int32_t L_613 = L_612.___int32_0_52;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = L_614.___register_0;
		int32_t L_616 = L_615.___int32_0_52;
		G_B250_0 = (&V_20);
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0_52 = G_B252_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = L_618.___register_0;
		int32_t L_620 = L_619.___int32_1_53;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = L_621.___register_0;
		int32_t L_623 = L_622.___int32_1_53;
		G_B253_0 = (&V_20);
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1_53 = G_B255_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = L_625.___register_0;
		int32_t L_627 = L_626.___int32_2_54;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = L_628.___register_0;
		int32_t L_630 = L_629.___int32_2_54;
		G_B256_0 = (&V_20);
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2_54 = G_B258_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = L_632.___register_0;
		int32_t L_634 = L_633.___int32_3_55;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = L_635.___register_0;
		int32_t L_637 = L_636.___int32_3_55;
		G_B259_0 = (&V_20);
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3_55 = G_B261_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_639), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = L_645.___register_0;
		uint64_t L_647 = L_646.___uint64_0_56;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = L_648.___register_0;
		uint64_t L_650 = L_649.___uint64_0_56;
		G_B264_0 = (&V_20);
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0_56 = G_B266_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = L_652.___register_0;
		uint64_t L_654 = L_653.___uint64_1_57;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = L_655.___register_0;
		uint64_t L_657 = L_656.___uint64_1_57;
		G_B267_0 = (&V_20);
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1_57 = G_B269_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_659), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = L_665.___register_0;
		int64_t L_667 = L_666.___int64_0_58;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = L_668.___register_0;
		int64_t L_670 = L_669.___int64_0_58;
		G_B272_0 = (&V_20);
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0_58 = G_B274_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = L_672.___register_0;
		int64_t L_674 = L_673.___int64_1_59;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = L_675.___register_0;
		int64_t L_677 = L_676.___int64_1_59;
		G_B275_0 = (&V_20);
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1_59 = G_B277_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_679), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = L_685.___register_0;
		float L_687 = L_686.___single_0_60;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = L_688.___register_0;
		float L_690 = L_689.___single_0_60;
		G_B280_0 = (&V_20);
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0_60 = G_B282_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = L_692.___register_0;
		float L_694 = L_693.___single_1_61;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = L_695.___register_0;
		float L_697 = L_696.___single_1_61;
		G_B283_0 = (&V_20);
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1_61 = G_B285_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = L_699.___register_0;
		float L_701 = L_700.___single_2_62;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = L_702.___register_0;
		float L_704 = L_703.___single_2_62;
		G_B286_0 = (&V_20);
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2_62 = G_B288_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = L_706.___register_0;
		float L_708 = L_707.___single_3_63;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = L_709.___register_0;
		float L_711 = L_710.___single_3_63;
		G_B289_0 = (&V_20);
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3_63 = G_B291_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_713), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = L_719.___register_0;
		double L_721 = L_720.___double_0_64;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = L_722.___register_0;
		double L_724 = L_723.___double_0_64;
		G_B294_0 = (&V_20);
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0_64 = G_B296_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = L_726.___register_0;
		double L_728 = L_727.___double_1_65;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = L_729.___register_0;
		double L_731 = L_730.___double_1_65;
		G_B297_0 = (&V_20);
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1_65 = G_B299_0;
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_733), (&V_20), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_734);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_Equals_m10063846A51F9D722BC0A8999A9F6B12C37988FF_RuntimeMethod_var)));
	}
}
// System.Boolean System.Numerics.Vector`1<System.UInt64>::ScalarEquals(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_gshared (uint64_t ___0_left, uint64_t ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		uint64_t L_5 = ___0_left;
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_6);
		uint64_t L_8 = ___1_right;
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_9);
		return (bool)((((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		uint64_t L_16 = ___0_left;
		uint64_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_17);
		uint64_t L_19 = ___1_right;
		uint64_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_20);
		return (bool)((((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_18, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_21, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		uint64_t L_27 = ___0_left;
		uint64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_28);
		uint64_t L_30 = ___1_right;
		uint64_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_31);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_29, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_32, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00d0;
		}
	}
	{
		uint64_t L_38 = ___0_left;
		uint64_t L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_39);
		uint64_t L_41 = ___1_right;
		uint64_t L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_42);
		return (bool)((((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_40, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_43, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		uint64_t L_49 = ___0_left;
		uint64_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_50);
		uint64_t L_52 = ___1_right;
		uint64_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_53);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_51, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_54, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (!L_59)
		{
			goto IL_0138;
		}
	}
	{
		uint64_t L_60 = ___0_left;
		uint64_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_61);
		uint64_t L_63 = ___1_right;
		uint64_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_64);
		return (bool)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_62, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_016c;
		}
	}
	{
		uint64_t L_71 = ___0_left;
		uint64_t L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_72);
		uint64_t L_74 = ___1_right;
		uint64_t L_75 = L_74;
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_75);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_73, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_76, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01a0;
		}
	}
	{
		uint64_t L_82 = ___0_left;
		uint64_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_83);
		uint64_t L_85 = ___1_right;
		uint64_t L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_86);
		return (bool)((((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_84, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_87, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_01d4;
		}
	}
	{
		uint64_t L_93 = ___0_left;
		uint64_t L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_94);
		uint64_t L_96 = ___1_right;
		uint64_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_97);
		return (bool)((((float)((*(float*)((float*)(float*)UnBox(L_95, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)(float*)UnBox(L_98, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0208;
		}
	}
	{
		uint64_t L_104 = ___0_left;
		uint64_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_105);
		uint64_t L_107 = ___1_right;
		uint64_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_108);
		return (bool)((((double)((*(double*)((double*)(double*)UnBox(L_106, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)(double*)UnBox(L_109, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_110);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_ScalarEquals_m73081D1B852400C74618D0A814BBED2FE272175D_RuntimeMethod_var)));
	}
}
// T System.Numerics.Vector`1<System.UInt64>::GetOneValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t L_5 = ((uint8_t)1);
		RuntimeObject* L_6 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_5);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_6, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0027:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		int8_t L_12 = ((int8_t)1);
		RuntimeObject* L_13 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_12);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_13, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_004e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		uint16_t L_19 = ((uint16_t)1);
		RuntimeObject* L_20 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_19);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_20, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0075:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_009c;
		}
	}
	{
		int16_t L_26 = ((int16_t)1);
		RuntimeObject* L_27 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_26);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_27, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00c3;
		}
	}
	{
		uint32_t L_33 = ((uint32_t)1);
		RuntimeObject* L_34 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_33);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_34, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_00c3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_40 = 1;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_41, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_00ea:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0112;
		}
	}
	{
		uint64_t L_47 = ((uint64_t)((int64_t)1));
		RuntimeObject* L_48 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_47);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_48, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_013a;
		}
	}
	{
		int64_t L_54 = ((int64_t)1);
		RuntimeObject* L_55 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_54);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_013a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0165;
		}
	}
	{
		float L_61 = (1.0f);
		RuntimeObject* L_62 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_61);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_62, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0165:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_0194;
		}
	}
	{
		double L_68 = (1.0);
		RuntimeObject* L_69 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_68);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_69, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0194:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_70 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_70);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_GetOneValue_mE2DE5D8CFC8D7A4990743C160CD1C4ED71CDA288_RuntimeMethod_var)));
	}
}
// T System.Numerics.Vector`1<System.UInt64>::GetAllBitsSetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		uint8_t L_5;
		L_5 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_6);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_7, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_002b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int8_t L_13;
		L_13 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		int8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_14);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		uint16_t L_21;
		L_21 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		uint16_t L_22 = L_21;
		RuntimeObject* L_23 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_22);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00ac;
		}
	}
	{
		int16_t L_29;
		L_29 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		int16_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_30);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_00ac:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t L_37;
		L_37 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		uint32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_38);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_39, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_00d7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_45;
		L_45 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_46);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_47, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0102:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		if (!L_52)
		{
			goto IL_012d;
		}
	}
	{
		uint64_t L_53;
		L_53 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		uint64_t L_54 = L_53;
		RuntimeObject* L_55 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_54);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0158;
		}
	}
	{
		int64_t L_61;
		L_61 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		int64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_62);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_63, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0158:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_0183;
		}
	}
	{
		float L_69;
		L_69 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		float L_70 = L_69;
		RuntimeObject* L_71 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_70);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_71, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_0183:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01ae;
		}
	}
	{
		double L_77;
		L_77 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		double L_78 = L_77;
		RuntimeObject* L_79 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_78);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))));
	}

IL_01ae:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_80 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_80);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector_1_GetAllBitsSetValue_m99E582A6A7DA5089B26FE42E5F8FDE26A6005ED0_RuntimeMethod_var)));
	}
}
// System.Void System.Numerics.Vector`1<System.UInt64>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m152F538F7C3F6DB8EA8C03902F8A68FF06A70109_gshared (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_count_1 = L_0;
		il2cpp_codegen_initobj((&((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_zero_2), sizeof(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A));
		uint64_t L_1;
		L_1 = ((  uint64_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6((&L_2), L_1, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_one_3 = L_2;
		uint64_t L_3;
		L_3 = ((  uint64_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector_1__ctor_m1B5D6A9264B4450B3C14BD8FF9430354A337F2D6((&L_4), L_3, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_allOnes_4 = L_4;
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
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_activeItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_activeItems_m5771BE91B7EE5DD1CD69E13A60D9DAD9F81E8535_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems_3;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var));
	}
}
// System.Boolean UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::VisibleItemPredicate(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerticalVirtualizationController_1_VisibleItemPredicate_mF74E98CD97471A785AC772347CC1112EE868CBF0_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = (bool)0;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_ListView_1;
		NullCheck(L_0);
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_1;
		L_1 = BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline(L_0, NULL);
		V_1 = ((ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)IsInstClass((RuntimeObject*)L_1, ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var));
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_2 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4(L_4, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_6 = ___0_i;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_6);
		int32_t L_7;
		L_7 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_6, NULL);
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_8 = V_1;
		NullCheck(L_8);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_9;
		L_9 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_9, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)L_10))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 0;
	}

IL_003f:
	{
		V_0 = (bool)G_B4_0;
	}

IL_0040:
	{
		RuntimeObject* L_11 = ___0_i;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_12, NULL);
		NullCheck(L_13);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_14;
		L_14 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(16 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> UnityEngine.UIElements.IStyle::get_display() */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_13);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_15;
		L_15 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_16;
		L_16 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_14, L_15, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		bool L_17 = V_0;
		G_B8_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B8_0 = 0;
	}

IL_0069:
	{
		V_3 = (bool)G_B8_0;
		goto IL_006c;
	}

IL_006c:
	{
		bool L_18 = V_3;
		return L_18;
	}
}
// T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_firstVisibleItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_firstVisibleItem_m82CAFF6CE0A7E6C2097640ECD92EE8971182E59C_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___m_VisibleItemPredicateDelegate_7;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_2;
	}
}
// T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_lastVisibleItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___m_VisibleItemPredicateDelegate_7;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_2;
	}
}
// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_visibleItemCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_visibleItemCount_m6808CEB4E53AC329802DC87298F99C249C3CF112_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___m_VisibleItemPredicateDelegate_7;
		int32_t L_2;
		L_2 = ((  int32_t (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Int32 UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_lastVisibleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_lastVisibleIndex_m9F891EADB85C9DB78B0EA7CFEE559669D4CD0D02_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_1 = L_0;
		G_B1_0 = ((RuntimeObject*)(L_1));
		if (L_1)
		{
			G_B2_0 = ((RuntimeObject*)(L_1));
			goto IL_0012;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)G_B2_0);
		int32_t L_2;
		L_2 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)G_B2_0, NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::get_lastHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VerticalVirtualizationController_1_get_lastHeight_m2B0E6420EAB9557359C528A459EE84BDC1926D29_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_ListView_1;
		NullCheck(L_0);
		float L_1;
		L_1 = BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::.ctor(UnityEngine.UIElements.BaseVerticalCollectionView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1__ctor_mDD14CF7DF7586CFCB5E6EF69BC643CF090377096_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_collectionView, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B2_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B2_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B1_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B1_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B4_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B4_3 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B3_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B3_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9__25_0_1;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_2 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_3);
		((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = L_3;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9__25_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9__25_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9__25_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = NULL;
		G_B3_2 = G_B2_0;
		G_B3_3 = G_B2_1;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = NULL;
			G_B4_2 = G_B2_0;
			G_B4_3 = G_B2_1;
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_7 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_8);
		((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = L_8;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9__25_1_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 5)))->___U3CU3E9__25_1_2), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0040:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_10 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_10);
		((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, bool, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_10, G_B4_2, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)G_B4_1, G_B4_0, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(G_B4_3);
		G_B4_3->___m_Pool_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_3->___m_Pool_2), (void*)L_10);
		__this->___m_LastFocusedElementIndex_4 = (-1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_11, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___m_LastFocusedElementTreeChildIndexes_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastFocusedElementTreeChildIndexes_5), (void*)L_11);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_12);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		__this->___m_ScrollInsertionList_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollInsertionList_8), (void*)L_12);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_13 = ___0_collectionView;
		NullCheck(L_13);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_14;
		L_14 = BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline(L_13, NULL);
		CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, L_14, NULL);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_15 = ___0_collectionView;
		__this->___m_ListView_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ListView_1), (void*)L_15);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_16 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_16);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		__this->___m_ActiveItems_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveItems_3), (void*)L_16);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_17 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_17);
		((  void (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_17, (RuntimeObject*)__this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__this->___m_VisibleItemPredicateDelegate_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VisibleItemPredicateDelegate_7), (void*)L_17);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_18, NULL);
		__this->___k_EmptyRows_9 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_EmptyRows_9), (void*)L_18);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = __this->___k_EmptyRows_9;
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_20 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___backgroundFillUssClassName_107;
		NullCheck(L_19);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(L_19, L_20, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::Refresh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Refresh_mA648D405FBCF47E4BE5AAA5B52116A5811BA2B31_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, bool ___0_rebuild, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B8_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_ListView_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = BaseVerticalCollectionView_HasValidDataAndBindings_mC01F3E931D8CD108ED1DD6CA81F524DA81CBD3BC(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_012c;
	}

IL_0014:
	{
		int32_t L_2 = __this->___m_FirstVisibleIndex_6;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_ActiveItems_3;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_3 = L_6;
		RuntimeObject* L_7 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_8, NULL);
		NullCheck(L_9);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_10;
		L_10 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(16 /* UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> UnityEngine.UIElements.IStyle::get_display() */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_9);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_11;
		L_11 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_12;
		L_12 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_10, L_11, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		V_4 = L_12;
		bool L_13 = ___0_rebuild;
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_15 = V_0;
		bool L_16 = V_4;
		V_6 = (bool)((int32_t)((int32_t)L_15&(int32_t)L_16));
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_18 = __this->___m_ListView_1;
		NullCheck(L_18);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_19;
		L_19 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_18, NULL);
		RuntimeObject* L_20 = V_3;
		RuntimeObject* L_21 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21);
		int32_t L_22;
		L_22 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21, NULL);
		NullCheck(L_19);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(9 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_19, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_20, L_22);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_23 = __this->___m_ListView_1;
		NullCheck(L_23);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_24;
		L_24 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_23, NULL);
		RuntimeObject* L_25 = V_3;
		NullCheck(L_24);
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(10 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeDestroyItem(UnityEngine.UIElements.ReusableCollectionItem) */, L_24, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25);
	}

IL_009a:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_26 = __this->___m_Pool_2;
		RuntimeObject* L_27 = V_3;
		NullCheck(L_26);
		((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_26, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		goto IL_0128;
	}

IL_00a9:
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_29 = V_2;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_30 = __this->___m_ListView_1;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_30, NULL);
		NullCheck((RuntimeObject*)L_31);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
		G_B8_0 = ((((int32_t)L_29) < ((int32_t)L_32))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B8_0 = 0;
	}

IL_00c3:
	{
		V_7 = (bool)G_B8_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_0111;
		}
	}
	{
		bool L_34 = V_0;
		bool L_35 = V_4;
		V_8 = (bool)((int32_t)((int32_t)L_34&(int32_t)L_35));
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_010e;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_37 = __this->___m_ListView_1;
		NullCheck(L_37);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_38;
		L_38 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_37, NULL);
		RuntimeObject* L_39 = V_3;
		RuntimeObject* L_40 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_40);
		int32_t L_41;
		L_41 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_40, NULL);
		NullCheck(L_38);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(9 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_38, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_39, L_41);
		RuntimeObject* L_42 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_42);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_42, (-1), NULL);
		RuntimeObject* L_43 = V_3;
		int32_t L_44 = V_2;
		((  void (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_43, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
	}

IL_010e:
	{
		goto IL_0127;
	}

IL_0111:
	{
		bool L_45 = V_4;
		V_9 = L_45;
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_47 = V_1;
		int32_t L_48 = L_47;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::ReleaseItem(System.Int32) */, __this, L_48);
	}

IL_0127:
	{
	}

IL_0128:
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_012c:
	{
		int32_t L_50 = V_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_51 = __this->___m_ActiveItems_3;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_10 = (bool)((((int32_t)L_50) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_10;
		if (L_53)
		{
			goto IL_0014;
		}
	}
	{
		bool L_54 = ___0_rebuild;
		V_11 = L_54;
		bool L_55 = V_11;
		if (!L_55)
		{
			goto IL_0170;
		}
	}
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_56 = __this->___m_Pool_2;
		NullCheck(L_56);
		((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_57 = __this->___m_ActiveItems_3;
		NullCheck(L_57);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_58 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_58);
		VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_58, NULL);
	}

IL_0170:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::Setup(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_recycledItem, int32_t ___1_newIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_ListView_1;
		NullCheck(L_0);
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_1;
		L_1 = BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline(L_0, NULL);
		V_0 = ((ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)IsInstClass((RuntimeObject*)L_1, ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var));
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_2 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4(L_4, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_6 = V_0;
		NullCheck(L_6);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_7;
		L_7 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_7, NULL);
		int32_t L_9 = ___1_newIndex;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_10 = V_0;
		NullCheck(L_10);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_11;
		L_11 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_10, NULL);
		RuntimeObject* L_12 = ___0_recycledItem;
		G_B5_0 = ((((RuntimeObject*)(ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11) == ((RuntimeObject*)(RuntimeObject*)L_12))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 1;
	}

IL_0043:
	{
		G_B7_0 = G_B5_0;
		goto IL_0046;
	}

IL_0045:
	{
		G_B7_0 = 0;
	}

IL_0046:
	{
		V_6 = (bool)G_B7_0;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0275;
	}

IL_0051:
	{
		int32_t L_14 = ___1_newIndex;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_15 = __this->___m_ListView_1;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_15, NULL);
		NullCheck((RuntimeObject*)L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		V_7 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject* L_19 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_19);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_20, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_22;
		L_22 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_21);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_21, L_22);
		RuntimeObject* L_23 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23);
		int32_t L_24;
		L_24 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23, NULL);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		RuntimeObject* L_25 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25);
		int32_t L_26;
		L_26 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25, NULL);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_27 = __this->___m_ListView_1;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_27, NULL);
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		G_B13_0 = ((((int32_t)L_26) < ((int32_t)L_29))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B13_0 = 0;
	}

IL_00bb:
	{
		V_8 = (bool)G_B13_0;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_31 = __this->___m_ListView_1;
		NullCheck(L_31);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_32;
		L_32 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_31, NULL);
		RuntimeObject* L_33 = ___0_recycledItem;
		RuntimeObject* L_34 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_34);
		int32_t L_35;
		L_35 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_34, NULL);
		NullCheck(L_32);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(9 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_32, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_33, L_35);
		RuntimeObject* L_36 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_36);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_36, (-1), NULL);
	}

IL_00f2:
	{
		goto IL_0275;
	}

IL_00f7:
	{
		RuntimeObject* L_37 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_37);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38;
		L_38 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_38, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_40;
		L_40 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_39);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17 /* System.Void UnityEngine.UIElements.IStyle::set_display(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_41);
		int32_t L_42;
		L_42 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_41, NULL);
		int32_t L_43 = ___1_newIndex;
		V_9 = (bool)((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_012c;
		}
	}
	{
		goto IL_0275;
	}

IL_012c:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_45 = __this->___m_ListView_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_45, NULL);
		if (!L_46)
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_47 = ___1_newIndex;
		G_B21_0 = ((((int32_t)((int32_t)(L_47%2))) == ((int32_t)1))? 1 : 0);
		goto IL_0142;
	}

IL_0141:
	{
		G_B21_0 = 0;
	}

IL_0142:
	{
		V_1 = (bool)G_B21_0;
		RuntimeObject* L_48 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49;
		L_49 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48);
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_50 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName_105;
		bool L_51 = V_1;
		NullCheck(L_49);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_49, L_50, L_51, NULL);
		RuntimeObject* L_52 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_52);
		int32_t L_53;
		L_53 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_52, NULL);
		V_2 = L_53;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_54 = __this->___m_ListView_1;
		NullCheck(L_54);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_55;
		L_55 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_54, NULL);
		int32_t L_56 = ___1_newIndex;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 UnityEngine.UIElements.CollectionViewController::GetIdForIndex(System.Int32) */, L_55, L_56);
		V_3 = L_57;
		RuntimeObject* L_58 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_58);
		int32_t L_59;
		L_59 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_58, NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_59) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_10;
		if (!L_60)
		{
			goto IL_01b1;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_61 = __this->___m_ListView_1;
		NullCheck(L_61);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_62;
		L_62 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_61, NULL);
		RuntimeObject* L_63 = ___0_recycledItem;
		RuntimeObject* L_64 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_64);
		int32_t L_65;
		L_65 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_64, NULL);
		NullCheck(L_62);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(9 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_62, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_63, L_65);
	}

IL_01b1:
	{
		RuntimeObject* L_66 = ___0_recycledItem;
		int32_t L_67 = ___1_newIndex;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_66);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_66, L_67, NULL);
		RuntimeObject* L_68 = ___0_recycledItem;
		int32_t L_69 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_68);
		ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_68, L_69, NULL);
		int32_t L_70 = ___1_newIndex;
		int32_t L_71 = __this->___m_FirstVisibleIndex_6;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_70, L_71));
		int32_t L_72 = V_4;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_73 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_73);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74;
		L_74 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_73);
		NullCheck(L_74);
		int32_t L_75;
		L_75 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_74, NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_72) < ((int32_t)L_75))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_11;
		if (!L_76)
		{
			goto IL_0207;
		}
	}
	{
		RuntimeObject* L_77 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_77);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_78;
		L_78 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_77);
		NullCheck(L_78);
		VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E(L_78, NULL);
		goto IL_024f;
	}

IL_0207:
	{
		int32_t L_79 = V_4;
		V_12 = (bool)((((int32_t)((((int32_t)L_79) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_12;
		if (!L_80)
		{
			goto IL_023c;
		}
	}
	{
		RuntimeObject* L_81 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_81);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_82;
		L_82 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_81);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_83 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_83);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_84;
		L_84 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_83);
		int32_t L_85 = V_4;
		NullCheck(L_84);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_86;
		L_86 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_84, L_85, NULL);
		NullCheck(L_82);
		VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF(L_82, L_86, NULL);
		goto IL_024f;
	}

IL_023c:
	{
		RuntimeObject* L_87 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_87);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_88;
		L_88 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_87);
		NullCheck(L_88);
		VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511(L_88, NULL);
	}

IL_024f:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_89 = __this->___m_ListView_1;
		NullCheck(L_89);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_90;
		L_90 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_89, NULL);
		RuntimeObject* L_91 = ___0_recycledItem;
		int32_t L_92 = ___1_newIndex;
		NullCheck(L_90);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(8 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeBindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_90, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_91, L_92);
		RuntimeObject* L_93 = ___0_recycledItem;
		int32_t L_94 = V_2;
		((  void (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_93, L_94, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0275:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::OnFocus(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnFocus_m6A0CFE10225E6DF432E1A83349FD0D3338E2E2C8_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_leafTarget, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* V_4 = NULL;
	bool V_5 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_leafTarget;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_1 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1);
		V_0 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00c4;
	}

IL_0018:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = __this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_4);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_4, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_5 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6;
		L_6 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_leafTarget;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_6);
		bool L_9;
		L_9 = VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59(L_6, L_7, L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00bb;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_11 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = __this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_13, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_12);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_12, L_14, NULL);
		V_2 = L_15;
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem> UnityEngine.UIElements.CollectionVirtualizationController::get_activeItems() */, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.ReusableCollectionItem>::GetEnumerator() */, IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_3;
					if (!L_18)
					{
						goto IL_00aa;
					}
				}
				{
					RuntimeObject* L_19 = V_3;
					NullCheck((RuntimeObject*)L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				}

IL_00aa:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0096_1;
			}

IL_006c_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_21;
				L_21 = InterfaceFuncInvoker0< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.ReusableCollectionItem>::get_Current() */, IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var, L_20);
				V_4 = L_21;
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_22 = V_4;
				NullCheck(L_22);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23;
				L_23 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, L_22);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_2;
				V_5 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_24))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0095_1;
				}
			}
			{
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_26 = V_4;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_26, NULL);
				__this->___m_LastFocusedElementIndex_4 = L_27;
				goto IL_009e_1;
			}

IL_0095_1:
			{
			}

IL_0096_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck((RuntimeObject*)L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				if (L_29)
				{
					goto IL_006c_1;
				}
			}

IL_009e_1:
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = __this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_30);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_30, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		goto IL_00c4;
	}

IL_00bb:
	{
		__this->___m_LastFocusedElementIndex_4 = (-1);
	}

IL_00c4:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::OnBlur(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnBlur_m4F2963E229865EF1B63E2D5BA5C26B4D417C049E_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_willFocus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_willFocus;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_willFocus;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_2 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2);
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_5);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_5, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		__this->___m_LastFocusedElementIndex_4 = (-1);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::HandleFocus(UnityEngine.UIElements.ReusableCollectionItem,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_recycledItem, int32_t ___1_previousIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B5_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B4_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B10_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->___m_LastFocusedElementIndex_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0081;
	}

IL_0010:
	{
		int32_t L_2 = __this->___m_LastFocusedElementIndex_4;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = ___0_recycledItem;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_6 = ___0_recycledItem;
		NullCheck(L_6);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7;
		L_7 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, L_6);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_7);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9;
		L_9 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_7, L_8, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_0039;
		}
	}
	{
		goto IL_003f;
	}

IL_0039:
	{
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B5_0);
		VirtualActionInvoker0::Invoke(17 /* System.Void UnityEngine.UIElements.Focusable::Focus() */, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B5_0);
	}

IL_003f:
	{
		goto IL_0081;
	}

IL_0041:
	{
		int32_t L_11 = __this->___m_LastFocusedElementIndex_4;
		int32_t L_12 = ___1_previousIndex;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_14 = ___0_recycledItem;
		NullCheck(L_14);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, L_14);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___m_LastFocusedElementTreeChildIndexes_5;
		NullCheck(L_15);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17;
		L_17 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_15, L_16, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = L_17;
		G_B9_0 = L_18;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_0068;
		}
	}
	{
		goto IL_006e;
	}

IL_0068:
	{
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B10_0);
		VirtualActionInvoker0::Invoke(18 /* System.Void UnityEngine.UIElements.Focusable::Blur() */, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B10_0);
	}

IL_006e:
	{
		goto IL_0081;
	}

IL_0070:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_19 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_19);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_19);
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_20);
		VirtualActionInvoker0::Invoke(17 /* System.Void UnityEngine.UIElements.Focusable::Focus() */, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_20);
	}

IL_0081:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::UpdateBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_13 = NULL;
	bool V_14 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_17 = NULL;
	bool V_18 = false;
	float G_B3_0 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___k_EmptyRows_9;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_0, NULL);
		V_6 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_3 = L_2.___y_1;
		bool L_4;
		L_4 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = __this->___k_EmptyRows_9;
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_5, NULL);
		V_6 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_8 = L_7.___y_1;
		G_B3_0 = L_8;
		goto IL_0041;
	}

IL_003c:
	{
		G_B3_0 = (0.0f);
	}

IL_0041:
	{
		V_0 = G_B3_0;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_9 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck(L_9);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10;
		L_10 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_9, NULL);
		NullCheck(L_10);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_10, NULL);
		V_6 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_13 = L_12.___y_1;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_14 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(95 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_contentContainer() */, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_14);
		NullCheck(L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(L_15, NULL);
		V_6 = L_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		float L_18 = L_17.___y_1;
		float L_19 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_13, L_18)), L_19));
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_20 = __this->___m_ListView_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_009d;
		}
	}
	{
		float L_22 = V_1;
		G_B6_0 = ((((int32_t)((!(((float)L_22) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B6_0 = 1;
	}

IL_009e:
	{
		V_7 = (bool)G_B6_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = __this->___k_EmptyRows_9;
		NullCheck(L_24);
		VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(L_24, NULL);
		goto IL_01f3;
	}

IL_00b6:
	{
		RuntimeObject* L_25;
		L_25 = ((  RuntimeObject* (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_8 = (bool)((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01f3;
	}

IL_00cf:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = __this->___k_EmptyRows_9;
		NullCheck(L_27);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28;
		L_28 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(L_27, NULL);
		V_9 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_28) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_30 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
		NullCheck(L_30);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31;
		L_31 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_30, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32 = __this->___k_EmptyRows_9;
		NullCheck(L_31);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_31, L_32, NULL);
	}

IL_00fa:
	{
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		float L_33;
		L_33 = VirtualFuncInvoker1< float, int32_t >::Invoke(11 /* System.Single UnityEngine.UIElements.CollectionVirtualizationController::GetItemHeight(System.Int32) */, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, (-1));
		V_2 = L_33;
		float L_34 = V_1;
		float L_35 = V_2;
		int32_t L_36;
		L_36 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_34/L_35)), NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_3;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_38 = __this->___k_EmptyRows_9;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_38, NULL);
		V_10 = (bool)((((int32_t)L_37) > ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_41 = V_3;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = __this->___k_EmptyRows_9;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_42, NULL);
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_41, L_43));
		V_12 = 0;
		goto IL_016a;
	}

IL_0136:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_44, NULL);
		V_13 = L_44;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_45 = V_13;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_45, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_47;
		L_47 = StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB((0.0f), NULL);
		NullCheck(L_46);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(21 /* System.Void UnityEngine.UIElements.IStyle::set_flexShrink(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_46, L_47);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48 = __this->___k_EmptyRows_9;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = V_13;
		NullCheck(L_48);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_48, L_49, NULL);
		int32_t L_50 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_016a:
	{
		int32_t L_51 = V_12;
		int32_t L_52 = V_11;
		V_14 = (bool)((((int32_t)L_51) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_14;
		if (L_53)
		{
			goto IL_0136;
		}
	}
	{
	}

IL_0177:
	{
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.CollectionVirtualizationController::get_lastVisibleIndex() */, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		V_4 = L_54;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55 = __this->___k_EmptyRows_9;
		NullCheck(L_55);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_56;
		L_56 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_55, NULL);
		V_15 = L_56;
		int32_t L_57;
		L_57 = Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5((&V_15), NULL);
		V_5 = L_57;
		V_16 = 0;
		goto IL_01e7;
	}

IL_019a:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_58 = __this->___k_EmptyRows_9;
		NullCheck(L_58);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_59;
		L_59 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_58, NULL);
		V_15 = L_59;
		int32_t L_60 = V_16;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61;
		L_61 = Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467((&V_15), L_60, NULL);
		V_17 = L_61;
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = V_17;
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_63, NULL);
		float L_65 = V_2;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_66;
		L_66 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_65, NULL);
		NullCheck(L_64);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(24 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_64, L_66);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_67 = V_17;
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_68 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName_105;
		int32_t L_69 = V_4;
		NullCheck(L_67);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_67, L_68, (bool)((((int32_t)((int32_t)(L_69%2))) == ((int32_t)1))? 1 : 0), NULL);
		int32_t L_70 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_01e7:
	{
		int32_t L_71 = V_16;
		int32_t L_72 = V_5;
		V_18 = (bool)((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_18;
		if (L_73)
		{
			goto IL_019a;
		}
	}

IL_01f3:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::ReplaceActiveItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_ReplaceActiveItem_m44C942D46B174CEA07F73CD146AC9A4DF808DF26_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		V_0 = 0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems_3;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 35));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bc_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				V_2 = L_2;
				RuntimeObject* L_3 = V_2;
				NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3);
				int32_t L_4;
				L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3, NULL);
				int32_t L_5 = ___0_index;
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_00b7_1;
				}
			}
			{
				RuntimeObject* L_7;
				L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::GetOrMakeItem() */, __this);
				V_4 = L_7;
				RuntimeObject* L_8 = V_2;
				NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
				VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.UIElements.ReusableCollectionItem::DetachElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = __this->___m_ActiveItems_3;
				RuntimeObject* L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_12 = __this->___m_ListView_1;
				NullCheck(L_12);
				CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_13;
				L_13 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_12, NULL);
				RuntimeObject* L_14 = V_2;
				int32_t L_15 = ___0_index;
				NullCheck(L_13);
				VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(9 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_13, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_14, L_15);
				BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_16 = __this->___m_ListView_1;
				NullCheck(L_16);
				CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_17;
				L_17 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_16, NULL);
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(10 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeDestroyItem(UnityEngine.UIElements.ReusableCollectionItem) */, L_17, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_18);
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = __this->___m_ActiveItems_3;
				int32_t L_20 = V_0;
				RuntimeObject* L_21 = V_4;
				NullCheck(L_19);
				((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_19, L_20, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
				ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_22 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView_0;
				RuntimeObject* L_23 = V_4;
				NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24;
				L_24 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23);
				NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_22);
				VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_22, L_24, NULL);
				RuntimeObject* L_25 = V_4;
				int32_t L_26 = ___0_index;
				((  void (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_25, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				goto IL_00c8_1;
			}

IL_00b7_1:
			{
				int32_t L_27 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_00bc_1:
			{
				bool L_28;
				L_28 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
				if (L_28)
				{
					goto IL_0015_1;
				}
			}

IL_00c8_1:
			{
				goto IL_00d9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		return;
	}
}
// T UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::GetOrMakeItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_GetOrMakeItem_mE287AE2238E8F1DD7D7F95071669C8A7588742E2_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = __this->___m_Pool_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_2);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ReusableCollectionItem::get_rootElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_2);
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_5 = __this->___m_ListView_1;
		NullCheck(L_5);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_6;
		L_6 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_5, NULL);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(7 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeMakeItem(UnityEngine.UIElements.ReusableCollectionItem) */, L_6, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
	}

IL_0038:
	{
		RuntimeObject* L_8 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
		VirtualActionInvoker0::Invoke(6 /* System.Void UnityEngine.UIElements.ReusableCollectionItem::PreAttachElement() */, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
		RuntimeObject* L_9 = V_0;
		V_2 = L_9;
		goto IL_0048;
	}

IL_0048:
	{
		RuntimeObject* L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VerticalVirtualizationController`1<System.Object>::ReleaseItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_ReleaseItem_m1246B549EF5072DDD898308480867E71EEC27874_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_activeItemsIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems_3;
		int32_t L_1 = ___0_activeItemsIndex;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3);
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = V_1;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_7 = __this->___m_ListView_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_7, NULL);
		NullCheck((RuntimeObject*)L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		G_B3_0 = ((((int32_t)L_6) < ((int32_t)L_9))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_11 = __this->___m_ListView_1;
		NullCheck(L_11);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_12;
		L_12 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_11, NULL);
		RuntimeObject* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(9 /* System.Void UnityEngine.UIElements.CollectionViewController::InvokeUnbindItem(UnityEngine.UIElements.ReusableCollectionItem,System.Int32) */, L_12, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_13, L_14);
	}

IL_0052:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_15 = __this->___m_Pool_2;
		RuntimeObject* L_16 = V_0;
		NullCheck(L_15);
		((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = __this->___m_ActiveItems_3;
		int32_t L_18 = ___0_activeItemsIndex;
		NullCheck(L_17);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
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
// T AirFramework.View`1<System.Object>::get_Refs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* View_1_get_Refs_m6800BD6A107D4102FB3D1C0AEDA81416A484FABE_gshared (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* __this, const RuntimeMethod* method) 
{
	{
		// public T Refs { get; set; }
		RuntimeObject* L_0 = __this->___U3CRefsU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void AirFramework.View`1<System.Object>::set_Refs(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1_set_Refs_m2F86E4EDE2617ADF4F5689AB99460FB1810C8976_gshared (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public T Refs { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CRefsU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRefsU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// AirFramework.AirTask AirFramework.View`1<System.Object>::LoadAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* View_1_LoadAsync_mBCC6ED4DCD1E8DFCC0F4ECFBEC0756895FEE53F6_gshared (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* __this, const RuntimeMethod* method) 
{
	U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD L_0;
		L_0 = AirTaskBuilder_Create_m1BF3443860D8D1F23E5D5ED9DD7751C15B72418F_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___task_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* L_1 = (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD*)(&(&V_0)->___U3CU3Et__builder_1);
		AirTaskBuilder_Start_TisU3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07_m5A0D848C3E4CF04FA3F65DBC4FA589F6B3B852AC_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* L_2 = (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD*)(&(&V_0)->___U3CU3Et__builder_1);
		AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* L_3;
		L_3 = AirTaskBuilder_get_Task_m1034753330CC186D831CFC05D7A62D5491BE5FC3_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void AirFramework.View`1<System.Object>::OnAllocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1_OnAllocate_m004785975434DE7E724F14B3E1665A8C6F2B2BF3_gshared (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* __this, const RuntimeMethod* method) 
{
	{
		// IsShowing = true;
		NullCheck((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this);
		View_set_IsShowing_mCA498626D4899DE14D575CEABC94DFDC7B094EF7_inline((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AirFramework.View`1<System.Object>::OnRecycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1_OnRecycle_m42776B406C4DFB658FE3C6E7D84C484217003720_gshared (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* __this, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		NullCheck((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this);
		View_set_IsShowing_mCA498626D4899DE14D575CEABC94DFDC7B094EF7_inline((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AirFramework.View`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1_OnDestroy_m6BB069F3114F76B75CB2361C31141EB033EBE2DF_gshared (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsLoaded)
		NullCheck((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this);
		bool L_0;
		L_0 = View_get_IsLoaded_mA0F887EF16C00AE58926D01E5818B3B0A4EA1BFE_inline((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this, NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// GameObject.Destroy(Refs.gameObject);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, NULL);
	}

IL_001d:
	{
		// IsLoaded = false;
		NullCheck((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this);
		View_set_IsLoaded_mAAC2024DE1A012152BE2F3A18F0D040DBFF0C774_inline((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AirFramework.View`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_1__ctor_m2B7BFF62C6C00EF40629D157A822F76D32BC3391_gshared (View_1_t49E74714D7D0213071D2C671CEF7DFD2EDD73873* __this, const RuntimeMethod* method) 
{
	{
		View__ctor_mF9DF524A40B3E01FDC5E98025BCFF8B73FA7C4A3((View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E*)__this, NULL);
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
// System.Void UnityEngine.UIElements.VisualElement/VisualElementScheduledItem`1<System.Object>::.ctor(UnityEngine.UIElements.VisualElement,ActionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementScheduledItem_1__ctor_m3183DE9799B58C12B141B2A6E26641C1C7C8223B_gshared (VisualElementScheduledItem_1_tBBBFD9E425D8A2ECE1C614FC867E3D3127B37509* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_handler, RuntimeObject* ___1_upEvent, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_handler;
		BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68((BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A*)__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_upEvent;
		__this->___updateEvent_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___updateEvent_10), (void*)L_1);
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
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_target;
		((  void (*) (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___1_trackResurrection;
		__this->___trackResurrection_1 = L_0;
		bool L_1 = ___1_trackResurrection;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject* L_2 = ___0_target;
		int32_t L_3 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_2, L_3, NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		NullCheck(L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, NULL);
		__this->___trackResurrection_1 = L_3;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_6, NULL);
		V_0 = L_7;
		bool L_8 = __this->___trackResurrection_1;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_9, L_10, NULL);
		__this->___handle_0 = L_11;
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		bool L_3 = __this->___trackResurrection_1;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
		RuntimeObject* L_8;
		L_8 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_7, NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_6, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_8, NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		NullCheck(L_9);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_9, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, NULL, NULL);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_m22CABA82C1F2B17A77E275483306A0DADECAF151_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle_0);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
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
RuntimeObject* WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_Multicast(WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* currentDelegate = reinterpret_cast<WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instance, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_OpenInst(WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	NullCheck(___0_instance);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_instance, method);
}
RuntimeObject* WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_OpenStatic(WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_instance, method);
}
RuntimeObject* WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_OpenStaticInvoker(WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject** >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instance);
}
RuntimeObject* WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_ClosedStaticInvoker(WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject** >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instance);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter_1__ctor_m9DAA5929D3437618DD41A224A64E71367D1B636C_gshared (WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_Multicast;
}
// FieldType Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>::Invoke(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_1_Invoke_mED2D7DEE21E7E7039586ADB5DA9DD0E9C660852D_gshared (WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instance, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>::BeginInvoke(System.Object&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_1_BeginInvoke_m0842CA14F2A8A1A9C24334F7CB3F89CFFD670C63_gshared (WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = *___0_instance;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// FieldType Sirenix.Serialization.Utilities.WeakValueGetter`1<System.Object>::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_1_EndInvoke_m04041D0304BBA2E8A2B6BFFCB9A3BE65DE9981F9_gshared (WeakValueGetter_1_t0D1225D485B07A72C2C681A31DD628D427B7F05D* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_instance,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_Multicast(WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* currentDelegate = reinterpret_cast<WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instance, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_OpenInst(WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	NullCheck(___0_instance);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_instance, method);
}
RuntimeObject* WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_OpenStatic(WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_instance, method);
}
RuntimeObject* WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_OpenStaticInvoker(WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject** >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instance);
}
RuntimeObject* WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_ClosedStaticInvoker(WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject** >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instance);
}
// System.Void Sirenix.Utilities.WeakValueGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter_1__ctor_mA217CD723DF0837BD60816C206C4046BCE9CF9E3_gshared (WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_Multicast;
}
// FieldType Sirenix.Utilities.WeakValueGetter`1<System.Object>::Invoke(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_1_Invoke_mC5E2B391244AE9CF6E39E885B38AC34F3FB6B547_gshared (WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instance, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Utilities.WeakValueGetter`1<System.Object>::BeginInvoke(System.Object&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_1_BeginInvoke_m2F0F701F196C98D5EED0CB147D2E33D9AE77B984_gshared (WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = *___0_instance;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// FieldType Sirenix.Utilities.WeakValueGetter`1<System.Object>::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_1_EndInvoke_mB0FCF3624FF58299ABAEB517DE47408C065F3A54_gshared (WeakValueGetter_1_t5DE9B389852120C3AC5027BA0C2E7B5EE51D1FD2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_instance,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_Multicast(WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* currentDelegate = reinterpret_cast<WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instance, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_OpenInst(WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_instance);
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instance, ___1_value, method);
}
void WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_OpenStatic(WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instance, ___1_value, method);
}
void WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_OpenStaticInvoker(WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject**, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instance, ___1_value);
}
void WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_ClosedStaticInvoker(WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject**, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instance, ___1_value);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_1__ctor_m201FD36191F2F3B0228ED3DC2AF62530621DC2DC_gshared (WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_Multicast;
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>::Invoke(System.Object&,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_1_Invoke_m95A05365C29F6D57D1F41483DC674019AA7A01C6_gshared (WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instance, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>::BeginInvoke(System.Object&,FieldType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueSetter_1_BeginInvoke_mE60F7F2EFF60253D8886AF2F102E677B19B23AF3_gshared (WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = *___0_instance;
	__d_args[1] = ___1_value;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter`1<System.Object>::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_1_EndInvoke_mB48258214A2DBE088C39BA01D727829959289914_gshared (WeakValueSetter_1_tA963B6FAF1C63A7F56EB4071AB6AF317624F47C2* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_instance,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_Multicast(WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* currentDelegate = reinterpret_cast<WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instance, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_OpenInst(WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_instance);
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instance, ___1_value, method);
}
void WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_OpenStatic(WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instance, ___1_value, method);
}
void WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_OpenStaticInvoker(WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject**, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instance, ___1_value);
}
void WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_ClosedStaticInvoker(WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject**, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instance, ___1_value);
}
// System.Void Sirenix.Utilities.WeakValueSetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_1__ctor_m8C3B4559EE59552EB8264B4D6BA9797EDFDDBBC9_gshared (WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_Multicast;
}
// System.Void Sirenix.Utilities.WeakValueSetter`1<System.Object>::Invoke(System.Object&,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_1_Invoke_m6B2901B17F75AD9FE5BC8DCEB7B595E3057E51C0_gshared (WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instance, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Utilities.WeakValueSetter`1<System.Object>::BeginInvoke(System.Object&,FieldType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueSetter_1_BeginInvoke_m682D075AC2C182F06A58BAD8A2FF53A1290C6B17_gshared (WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = *___0_instance;
	__d_args[1] = ___1_value;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Sirenix.Utilities.WeakValueSetter`1<System.Object>::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_1_EndInvoke_m89BF796FCF1E2895BB87626FB575B70F5F03B783_gshared (WeakValueSetter_1_t354F98FA3528BB283D14B3B2C0183D13D1CCB9CA* __this, RuntimeObject** ___0_instance, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_instance,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereArrayIterator_1_Clone_m23B21F0E17F85746DFAF09C90772262DF3B707AF_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_2 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m205D669337F73902F61F7BBFD6165B9005890564_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___source_3;
		int32_t L_2 = __this->___index_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index_5;
		__this->___index_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___predicate_4;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = __this->___index_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->___source_3;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m00D679C5996A876F2AF50976C1F93D89F8F42C62_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_4 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mBA5C8B874F6A1A8AD981C46A7D054B5135517C43_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereEnumerableIterator_1_Clone_m29012D0BE1F245E54AE1603113E68C934C6B5FAF_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate_4;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_2 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m3DEE49AC82001271B1C7F17A5B33C2E36B853796_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
		((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m86690A73C6D58115878BCEC9F233AFA31A1C607D_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state_1 = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator_5;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate_4;
		Il2CppChar L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current_2 = L_10;
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Char>::Dispose() */, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Char>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m1A6FA62F2122EE2A8F051B00E135C20CCDCF77F8_gshared (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate_4;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_2 = ___0_predicate;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_3;
		L_3 = ((  Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_4 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereEnumerableIterator_1_Clone_m25DBF44FABBFE76AB4314BD7F62334FE2A74F5CA_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_2 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m7EB3C00CC0ED06056CF70FE322BF44A93F0C4136_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m7F8C3A8E4FC2835971FF35C1F4C51A061483BEDD_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator_5;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate_4;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___enumerator_5;
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m48ED4EDDA686615E779F1400A17479B243C85100_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_4 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereListIterator_1_Clone_mB7087945B135AFA9D70F30479082AD370DDDB66A_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_2 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mEE70CAE79424880884D3CD6947167DEDB297FB47_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_5))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_5))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_5);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate_4;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_11 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_5);
		bool L_12;
		L_12 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mD1D1F307DE1E555A5F7237BCA2C32947BCF6A14D_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_4 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9E856676CD28C48E31CDFFD36878CEB9894EA7EA_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereSelectArrayIterator_2_Clone_m1174858AF1E0D196A5C36D2FD4C81D6646C7D5F1_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate_4;
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = __this->___selector_5;
		WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* L_3 = (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m0786C9403DB8B55CA5F578694C873B2FAA32C370_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->___source_3;
		int32_t L_2 = __this->___index_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppChar L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index_6;
		__this->___index_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_6 = __this->___predicate_4;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate_4;
		Il2CppChar L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_10 = __this->___selector_5;
		Il2CppChar L_11 = V_0;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = ((  Il2CppChar (*) (Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current_2 = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->___source_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Char>::Dispose() */, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Char,System.Char>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD8F1D0F326DCA4EB134B2C7A219B88355361A0D6_gshared (WhereSelectArrayIterator_2_t5201B0144C9B22E2C8A7E2F2A63C241C89CE2859* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_1 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectArrayIterator_2_Clone_mDABFA8CCAFDC157CCF8428160F29DA90F22FCBD0_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector_5;
		WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* L_3 = (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m4A8194EF96624D7C6656C87F6058990E389F6290_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___source_3;
		int32_t L_2 = __this->___index_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index_6;
		__this->___index_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___predicate_4;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate_4;
		RuntimeObject* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_10 = __this->___selector_5;
		RuntimeObject* L_11 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___source_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m14341A500E696138BE1356922F31FA3E16E131D7_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mC246DFE6E89D80A80900F10D492E7093FF349C47_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectArrayIterator_2_Clone_mC58B097CD37B6E685B1E0FCBEBA7A4090AC38B1C_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = __this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = __this->___selector_5;
		WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* L_3 = (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB*, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7DECB795E90F03B26EED3D176C5AE451F79FFB70_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, const RuntimeMethod* method) 
{
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_1 = __this->___source_3;
		int32_t L_2 = __this->___index_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index_6;
		__this->___index_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_6 = __this->___predicate_4;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_10 = __this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_11 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index_6;
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_14 = __this->___source_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB937F9BD8E5AD7BE8381B407B28D772D3323B4B3_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m88FD7312A33F197FDDED392F8CEED6049D1FE991_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, RuntimeObject* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereSelectEnumerableIterator_2_Clone_mD5F280D35C0962703D3FCA43B214E07956C4FB5A_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate_4;
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = __this->___selector_5;
		WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* L_3 = (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m12E219C6FB875FC5B66A374EC54D2A5CCF8872F4_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
		((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mEEA1380FD259E49F52756FC212FB1FF41338A7FB_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator_6;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = __this->___predicate_4;
		Il2CppChar L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_11 = __this->___selector_5;
		Il2CppChar L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = ((  Il2CppChar (*) (Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Char>::Dispose() */, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Char,System.Char>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m51011A12E08CDBC5E2C6F2B9F872A2E1FBD18C35_gshared (WhereSelectEnumerableIterator_2_t34340067E396C40469AB8C426A8422EB77964523* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_1 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m2ED927CF2549A759AE2454F97E33F05FA19B552E_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector_5;
		WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* L_3 = (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mD2A476DDFBA6E23D20625E4C1C35AC98DE5F19F2_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC68F6626ADFD57493351521CE15400BBD158BC68_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator_6;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = __this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA93AACD32DB1D01903967A4CD1F5D74E84AA5F96_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m79D0125A1A65347F4522C73EA7D684850A856150_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = __this->___selector_5;
		WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* L_3 = (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m4059A77B770FEFC2E069A60DF9EE649B4D3C4DE5_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF9058AE915E95BB4D1B6852E177B962E5C72041C_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator_6;
		NullCheck(L_5);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = __this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7F40A08064DE17F179D3D40D6F7D38500D7167FE_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m464A0F88FBC476834CFEC766528072F8B4B4C8B8_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___0_source, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___1_predicate, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA* WhereSelectListIterator_2_Clone_m0E0EF202B83C28BF19FDF73C02171B1A6BFDC849_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = __this->___source_3;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_1 = __this->___predicate_4;
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_2 = __this->___selector_5;
		WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* L_3 = (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675*, List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9D96C3C31441478BF055EF604A7A86D8D6A63868_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = __this->___source_3;
		NullCheck(L_3);
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D L_4;
		L_4 = ((  Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_5 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		Il2CppChar L_6;
		L_6 = Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_8 = __this->___predicate_4;
		Il2CppChar L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t98484B0812610F727324B05DF0039164FD39A4E7* L_11 = __this->___selector_5;
		Il2CppChar L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = ((  Il2CppChar (*) (Func_2_t98484B0812610F727324B05DF0039164FD39A4E7*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* L_14 = (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mEB23589F285449D3A1439C810FB122ECDD2FFAC2(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Char>::Dispose() */, (Iterator_1_t756980BB26313AF5460A06A98D0851103A2124DA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Char,System.Char>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBD0795E250FB94137B1B87F8B068782D921A47F2_gshared (WhereSelectListIterator_2_tE2A8248565C3619FA9D213FB5EB362506049D675* __this, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039* L_1 = (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t20B89774AB79C9B874E82320ED6A20F15673F039*, RuntimeObject*, Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = __this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = __this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = __this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = __this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = __this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_0 = __this->___m_Dragger_95;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) 
{
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_0 = __this->___m_Item_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_LastHeight_93;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_0 = __this->___m_ScrollView_85;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_0 = __this->___m_ViewController_86;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CindexU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CcontentViewportU3Ek__BackingField_79;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD AirTaskBuilder_Create_m1BF3443860D8D1F23E5D5ED9DD7751C15B72418F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_Allocate_TisAirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5_mA597DD40697A744FB92DF4341683A3E76F4226B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AirTaskBuilder Create() => new AirTaskBuilder(Framework.Pool.Allocate<AirTask>());
		PoolManager_tB7F98065CA12981551D225676813C34D8A2F4067* L_0;
		L_0 = Framework_get_Pool_m51764312966AB27B1B4B7728BB1D7E5D7A61B8AC(NULL);
		NullCheck(L_0);
		AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* L_1;
		L_1 = PoolManager_Allocate_TisAirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5_mA597DD40697A744FB92DF4341683A3E76F4226B0(L_0, PoolManager_Allocate_TisAirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5_mA597DD40697A744FB92DF4341683A3E76F4226B0_RuntimeMethod_var);
		AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD L_2;
		memset((&L_2), 0, sizeof(L_2));
		AirTaskBuilder__ctor_m5ABAC4F308CC870A501280A6DA1CF07322F033AB_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* AirTaskBuilder_get_Task_m1034753330CC186D831CFC05D7A62D5491BE5FC3_inline (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* __this, const RuntimeMethod* method) 
{
	{
		// public AirTask Task => task;
		AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* L_0 = __this->___task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void View_set_IsShowing_mCA498626D4899DE14D575CEABC94DFDC7B094EF7_inline (View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; protected set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsShowingU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool View_get_IsLoaded_mA0F887EF16C00AE58926D01E5818B3B0A4EA1BFE_inline (View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLoaded { get; protected set; } = false;
		bool L_0 = __this->___U3CIsLoadedU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void View_set_IsLoaded_mAAC2024DE1A012152BE2F3A18F0D040DBFF0C774_inline (View_t7525EECCC6AF7AA917D2966FE3196A88F8A72D2E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsLoaded { get; protected set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsLoadedU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_mE275DCDE4DC3B6FB30AB80ACEAC8363207BA9BEC_gshared_inline (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Vector_1_Equals_mAE01D42B31EB54893DC4DB1BE8A99216AF784C27(__this, ((*(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)((Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)(Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AirTaskBuilder_Start_TisU3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07_m5A0D848C3E4CF04FA3F65DBC4FA589F6B3B852AC_gshared_inline (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* __this, U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CLoadAsyncU3Ed__4_tBB230D576F711187CCEF18BC73DE60D6FC491B07* L_0 = ___0_stateMachine;
		U3CLoadAsyncU3Ed__4_MoveNext_m4815F1907A7C9BA124E0782A582F0F6E7D068D6B(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Enumerator_get_Current_m50891A1A1A5F69FFF0D667B82BD22B8658F1A6E7_gshared_inline (Enumerator_t4016CCA94D50E9317613E883E74A4DCA4D1C287D* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AirTaskBuilder__ctor_m5ABAC4F308CC870A501280A6DA1CF07322F033AB_inline (AirTaskBuilder_t45EA2AB4D80A59544ADB854A233B4E590A45FFAD* __this, AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* ___0_task, const RuntimeMethod* method) 
{
	{
		// public AirTaskBuilder(AirTask task) => this.task = task;
		AirTask_tC970C760B30CD51ED650CFEF4548203762BC72A5* L_0 = ___0_task;
		__this->___task_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___task_0), (void*)L_0);
		return;
	}
}
