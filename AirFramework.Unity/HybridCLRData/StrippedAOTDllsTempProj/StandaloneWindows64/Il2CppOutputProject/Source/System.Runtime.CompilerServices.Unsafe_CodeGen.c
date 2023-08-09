#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000002 System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned(System.Byte&,T)
// 0x00000003 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_mDF58F6B66FE59AF2A00CE0E2B885DA6F2865BA8A (void);
// 0x00000005 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x00000006 T& System.Runtime.CompilerServices.Unsafe::AsRef(T&)
// 0x00000007 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000008 T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x00000009 System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan(T&,T&)
// 0x0000000A System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E (void);
// 0x0000000B System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_mCDC1F0E3639B43913D9103DD3C2543F5C0E4B07F (void);
static Il2CppMethodPointer s_methodPointers[11] = 
{
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlockUnaligned_mDF58F6B66FE59AF2A00CE0E2B885DA6F2865BA8A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E,
	IsReadOnlyAttribute__ctor_mCDC1F0E3639B43913D9103DD3C2543F5C0E4B07F,
};
static const int32_t s_InvokerIndices[11] = 
{
	0,
	0,
	0,
	6783,
	0,
	0,
	0,
	0,
	0,
	5429,
	5429,
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x06000003, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
};
extern const uint32_t g_rgctx_T_tEBAD0940DB52DC5349543CC3BDE62C848B32B00D;
extern const uint32_t g_rgctx_T_t9128C56B93A0B3D20E4B0519028DDB3D94DCD377;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tEBAD0940DB52DC5349543CC3BDE62C848B32B00D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9128C56B93A0B3D20E4B0519028DDB3D94DCD377 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	11,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	2,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
