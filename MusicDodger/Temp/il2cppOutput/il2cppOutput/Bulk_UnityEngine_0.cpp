#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "UnityEngine_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "UnityEngine_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequestMethodDeclarations.h"

// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"


// System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
extern "C" void AssetBundleCreateRequest__ctor_m284 (AssetBundleCreateRequest_t81 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m814(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern "C" AssetBundle_t83 * AssetBundleCreateRequest_get_assetBundle_m285 (AssetBundleCreateRequest_t81 * __this, const MethodInfo* method)
{
	typedef AssetBundle_t83 * (*AssetBundleCreateRequest_get_assetBundle_m285_ftn) (AssetBundleCreateRequest_t81 *);
	static AssetBundleCreateRequest_get_assetBundle_m285_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m285_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()
extern "C" void AssetBundleCreateRequest_DisableCompatibilityChecks_m286 (AssetBundleCreateRequest_t81 * __this, const MethodInfo* method)
{
	typedef void (*AssetBundleCreateRequest_DisableCompatibilityChecks_m286_ftn) (AssetBundleCreateRequest_t81 *);
	static AssetBundleCreateRequest_DisableCompatibilityChecks_m286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_DisableCompatibilityChecks_m286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequestMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"


// System.Void UnityEngine.AssetBundleRequest::.ctor()
extern "C" void AssetBundleRequest__ctor_m287 (AssetBundleRequest_t84 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m814(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern "C" Object_t71 * AssetBundleRequest_get_asset_m288 (AssetBundleRequest_t84 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t83 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		Object_t71 * L_3 = AssetBundle_LoadAsset_m290(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
extern "C" ObjectU5BU5D_t342* AssetBundleRequest_get_allAssets_m289 (AssetBundleRequest_t84 * __this, const MethodInfo* method)
{
	{
		AssetBundle_t83 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		ObjectU5BU5D_t342* L_3 = AssetBundle_LoadAssetWithSubAssets_Internal_m292(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern TypeInfo* NullReferenceException_t381_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t382_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral40;
extern "C" Object_t71 * AssetBundle_LoadAsset_m290 (AssetBundle_t83 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		ArgumentException_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		_stringLiteral38 = il2cpp_codegen_string_literal_from_index(38);
		_stringLiteral39 = il2cpp_codegen_string_literal_from_index(39);
		_stringLiteral40 = il2cpp_codegen_string_literal_from_index(40);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NullReferenceException_t381 * L_1 = (NullReferenceException_t381 *)il2cpp_codegen_object_new (NullReferenceException_t381_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m1452(L_1, _stringLiteral38, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m176(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t382 * L_4 = (ArgumentException_t382 *)il2cpp_codegen_object_new (ArgumentException_t382_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1453(L_4, _stringLiteral39, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		Type_t * L_5 = ___type;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		NullReferenceException_t381 * L_6 = (NullReferenceException_t381 *)il2cpp_codegen_object_new (NullReferenceException_t381_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m1452(L_6, _stringLiteral40, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		String_t* L_7 = ___name;
		Type_t * L_8 = ___type;
		Object_t71 * L_9 = AssetBundle_LoadAsset_Internal_m291(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t71 * AssetBundle_LoadAsset_Internal_m291 (AssetBundle_t83 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t71 * (*AssetBundle_LoadAsset_Internal_m291_ftn) (AssetBundle_t83 *, String_t*, Type_t *);
	static AssetBundle_LoadAsset_Internal_m291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAsset_Internal_m291_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t342* AssetBundle_LoadAssetWithSubAssets_Internal_m292 (AssetBundle_t83 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t342* (*AssetBundle_LoadAssetWithSubAssets_Internal_m292_ftn) (AssetBundle_t83 *, String_t*, Type_t *);
	static AssetBundle_LoadAssetWithSubAssets_Internal_m292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAssetWithSubAssets_Internal_m292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptionsMethodDeclarations.h"



// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"


// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" int32_t LayerMask_get_value_m293 (LayerMask_t86 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mask_0);
		return L_0;
	}
}
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
extern "C" void LayerMask_set_value_m294 (LayerMask_t86 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Mask_0 = L_0;
		return;
	}
}
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern "C" String_t* LayerMask_LayerToName_m295 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method)
{
	typedef String_t* (*LayerMask_LayerToName_m295_ftn) (int32_t);
	static LayerMask_LayerToName_m295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_LayerToName_m295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(___layer);
}
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C" int32_t LayerMask_NameToLayer_m296 (Object_t * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method)
{
	typedef int32_t (*LayerMask_NameToLayer_m296_ftn) (String_t*);
	static LayerMask_NameToLayer_m296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_NameToLayer_m296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(___layerName);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C" int32_t LayerMask_GetMask_m297 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___layerNames, const MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	StringU5BU5D_t45* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t45* L_0 = ___layerNames;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		StringU5BU5D_t45* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_1;
		int32_t L_5 = LayerMask_NameToLayer_m296(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t45* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" int32_t LayerMask_op_Implicit_m298 (Object_t * __this /* static, unused */, LayerMask_t86  ___mask, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&___mask)->___m_Mask_0);
		return L_0;
	}
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" LayerMask_t86  LayerMask_op_Implicit_m299 (Object_t * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method)
{
	LayerMask_t86  V_0 = {0};
	{
		int32_t L_0 = ___intVal;
		(&V_0)->___m_Mask_0 = L_0;
		LayerMask_t86  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogTypeMethodDeclarations.h"



// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"



// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
extern "C" String_t* SystemInfo_get_deviceUniqueIdentifier_m300 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*SystemInfo_get_deviceUniqueIdentifier_m300_ftn) ();
	static SystemInfo_get_deviceUniqueIdentifier_m300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_deviceUniqueIdentifier_m300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_deviceUniqueIdentifier()");
	return _il2cpp_icall_func();
}
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"


// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m301 (WaitForSeconds_t89 * __this, float ___seconds, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m923(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t89_marshal(const WaitForSeconds_t89& unmarshaled, WaitForSeconds_t89_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
void WaitForSeconds_t89_marshal_back(const WaitForSeconds_t89_marshaled& marshaled, WaitForSeconds_t89& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t89_marshal_cleanup(WaitForSeconds_t89_marshaled& marshaled)
{
}
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"



// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern "C" void WaitForFixedUpdate__ctor_m302 (WaitForFixedUpdate_t91 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m923(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"



// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" void WaitForEndOfFrame__ctor_m303 (WaitForEndOfFrame_t92 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m923(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m304 (Coroutine_t93 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m923(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m305 (Coroutine_t93 * __this, const MethodInfo* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m305_ftn) (Coroutine_t93 *);
	static Coroutine_ReleaseCoroutine_m305_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m305_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m306 (Coroutine_t93 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Coroutine_ReleaseCoroutine_m305(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Coroutine
void Coroutine_t93_marshal(const Coroutine_t93& unmarshaled, Coroutine_t93_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
void Coroutine_t93_marshal_back(const Coroutine_t93_marshaled& marshaled, Coroutine_t93& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
void Coroutine_t93_marshal_cleanup(Coroutine_t93_marshaled& marshaled)
{
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m307 (ScriptableObject_t94 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m890(__this, /*hidden argument*/NULL);
		ScriptableObject_Internal_CreateScriptableObject_m308(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m308 (Object_t * __this /* static, unused */, ScriptableObject_t94 * ___self, const MethodInfo* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m308_ftn) (ScriptableObject_t94 *);
	static ScriptableObject_Internal_CreateScriptableObject_m308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t94 * ScriptableObject_CreateInstance_m309 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method)
{
	typedef ScriptableObject_t94 * (*ScriptableObject_CreateInstance_m309_ftn) (String_t*);
	static ScriptableObject_CreateInstance_m309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstance_m309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(___className);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t94 * ScriptableObject_CreateInstance_m310 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ScriptableObject_t94 * L_1 = ScriptableObject_CreateInstanceFromType_m311(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t94 * ScriptableObject_CreateInstanceFromType_m311 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ScriptableObject_t94 * (*ScriptableObject_CreateInstanceFromType_m311_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t94_marshal(const ScriptableObject_t94& unmarshaled, ScriptableObject_t94_marshaled& marshaled)
{
}
void ScriptableObject_t94_marshal_back(const ScriptableObject_t94_marshaled& marshaled, ScriptableObject_t94& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t94_marshal_cleanup(ScriptableObject_t94_marshaled& marshaled)
{
}
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_0.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_2.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern "C" void GameCenterPlatform__ctor_m312 (GameCenterPlatform_t104 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern TypeInfo* AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern TypeInfo* UserProfileU5BU5D_t101_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t103_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1455_MethodInfo_var;
extern "C" void GameCenterPlatform__cctor_m313 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		UserProfileU5BU5D_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		List_1_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		List_1__ctor_m1455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t100*)SZArrayNew(AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_friends_10 = ((UserProfileU5BU5D_t101*)SZArrayNew(UserProfileU5BU5D_t101_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_users_11 = ((UserProfileU5BU5D_t101*)SZArrayNew(UserProfileU5BU5D_t101_il2cpp_TypeInfo_var, 0));
		List_1_t103 * L_0 = (List_1_t103 *)il2cpp_codegen_object_new (List_1_t103_il2cpp_TypeInfo_var);
		List_1__ctor_m1455(L_0, /*hidden argument*/List_1__ctor_m1455_MethodInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m314 (GameCenterPlatform_t104 * __this, Object_t * ___user, Action_1_t95 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t95 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1 = L_0;
		GameCenterPlatform_Internal_LoadFriends_m322(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m315 (GameCenterPlatform_t104 * __this, Object_t * ___user, Action_1_t95 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t95 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0 = L_0;
		GameCenterPlatform_Internal_Authenticate_m316(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C" void GameCenterPlatform_Internal_Authenticate_m316 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m316_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C" bool GameCenterPlatform_Internal_Authenticated_m317 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m317_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C" String_t* GameCenterPlatform_Internal_UserName_m318 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m318_ftn) ();
	static GameCenterPlatform_Internal_UserName_m318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C" String_t* GameCenterPlatform_Internal_UserID_m319 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m319_ftn) ();
	static GameCenterPlatform_Internal_UserID_m319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C" bool GameCenterPlatform_Internal_Underage_m320 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m320_ftn) ();
	static GameCenterPlatform_Internal_Underage_m320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C" Texture2D_t111 * GameCenterPlatform_Internal_UserImage_m321 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Texture2D_t111 * (*GameCenterPlatform_Internal_UserImage_m321_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C" void GameCenterPlatform_Internal_LoadFriends_m322 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m322_ftn) ();
	static GameCenterPlatform_Internal_LoadFriends_m322_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m322_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C" void GameCenterPlatform_Internal_LoadAchievementDescriptions_m323 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m323_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C" void GameCenterPlatform_Internal_LoadAchievements_m324 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m324_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievements_m324_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m324_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
extern "C" void GameCenterPlatform_Internal_ReportProgress_m325 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m325_ftn) (String_t*, double);
	static GameCenterPlatform_Internal_ReportProgress_m325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)");
	_il2cpp_icall_func(___id, ___progress);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
extern "C" void GameCenterPlatform_Internal_ReportScore_m326 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m326_ftn) (int64_t, String_t*);
	static GameCenterPlatform_Internal_ReportScore_m326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m326_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)");
	_il2cpp_icall_func(___score, ___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C" void GameCenterPlatform_Internal_LoadScores_m327 (Object_t * __this /* static, unused */, String_t* ___category, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m327_ftn) (String_t*);
	static GameCenterPlatform_Internal_LoadScores_m327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)");
	_il2cpp_icall_func(___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C" void GameCenterPlatform_Internal_ShowAchievementsUI_m328 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m328_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C" void GameCenterPlatform_Internal_ShowLeaderboardUI_m329 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m329_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
extern "C" void GameCenterPlatform_Internal_LoadUsers_m330 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___userIds, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m330_ftn) (StringU5BU5D_t45*);
	static GameCenterPlatform_Internal_LoadUsers_m330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])");
	_il2cpp_icall_func(___userIds);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C" void GameCenterPlatform_Internal_ResetAllAchievements_m331 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m331_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C" void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m332 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m332_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ResetAllAchievements_m333 (Object_t * __this /* static, unused */, Action_1_t95 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t95 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12 = L_0;
		GameCenterPlatform_Internal_ResetAllAchievements_m331(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m334 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m332(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m335 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int32_t L_1 = ___timeScope;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m336(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C" void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m336 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m336_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m336_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearAchievementDescriptions_m337 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t100* L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t100* L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_1);
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t100*)SZArrayNew(AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var, L_3));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetAchievementDescription_m338 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t293  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t100* L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_1 = ___number;
		AchievementDescription_t304 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m1319((&___data), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((AchievementDescription_t304 **)(AchievementDescription_t304 **)SZArrayLdElema(L_0, L_1)) = (AchievementDescription_t304 *)L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral41;
extern "C" void GameCenterPlatform_SetAchievementDescriptionImage_m339 (Object_t * __this /* static, unused */, Texture2D_t111 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		_stringLiteral41 = il2cpp_codegen_string_literal_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t100* L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_0);
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		Debug_Log_m254(NULL /*static, unused*/, _stringLiteral41, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t100* L_3 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		int32_t L_4 = ___number;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Texture2D_t111 * L_6 = ___texture;
		NullCheck((*(AchievementDescription_t304 **)(AchievementDescription_t304 **)SZArrayLdElema(L_3, L_5)));
		AchievementDescription_SetImage_m1357((*(AchievementDescription_t304 **)(AchievementDescription_t304 **)SZArrayLdElema(L_3, L_5)), L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1456_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral42;
extern "C" void GameCenterPlatform_TriggerAchievementDescriptionCallback_m340 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		_stringLiteral42 = il2cpp_codegen_string_literal_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t96 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t100* L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t100* L_2 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m254(NULL /*static, unused*/, _stringLiteral42, /*hidden argument*/NULL);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t96 * L_3 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		AchievementDescriptionU5BU5D_t100* L_4 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_adCache_9;
		NullCheck(L_3);
		Action_1_Invoke_m1456(L_3, (IAchievementDescriptionU5BU5D_t383*)(IAchievementDescriptionU5BU5D_t383*)L_4, /*hidden argument*/Action_1_Invoke_m1456_MethodInfo_var);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_AuthenticateCallbackWrapper_m341 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t95 * G_B3_0 = {0};
	Action_1_t95 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Action_1_t95 * G_B4_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m351(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t95 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AuthenticateCallback_0;
		int32_t L_2 = ___result;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		Action_1_Invoke_m1457(G_B4_1, G_B4_0, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearFriends_m342 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m369(NULL /*static, unused*/, (&((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriends_m343 (Object_t * __this /* static, unused */, GcUserProfileData_t292  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m1318((&___data), (&((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetFriendImage_m344 (Object_t * __this /* static, unused */, Texture2D_t111 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Texture2D_t111 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m368(NULL /*static, unused*/, (&((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_friends_10), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerFriendsCallbackWrapper_m345 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t95 * G_B5_0 = {0};
	Action_1_t95 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Action_1_t95 * G_B6_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t101* L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		LocalUser_t102 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		UserProfileU5BU5D_t101* L_2 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_friends_10;
		NullCheck(L_1);
		LocalUser_SetFriends_m1330(L_1, (IUserProfileU5BU5D_t301*)(IUserProfileU5BU5D_t301*)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_3 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_4 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_FriendsCallback_1;
		int32_t L_5 = ___result;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m1457(G_B6_1, G_B6_0, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern TypeInfo* AchievementU5BU5D_t384_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1458_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral43;
extern "C" void GameCenterPlatform_AchievementCallbackWrapper_m346 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t344* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		AchievementU5BU5D_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Action_1_Invoke_m1458_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		_stringLiteral43 = il2cpp_codegen_string_literal_from_index(43);
		s_Il2CppMethodIntialized = true;
	}
	AchievementU5BU5D_t384* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t97 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		GcAchievementDataU5BU5D_t344* L_1 = ___result;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m254(NULL /*static, unused*/, _stringLiteral43, /*hidden argument*/NULL);
	}

IL_001c:
	{
		GcAchievementDataU5BU5D_t344* L_2 = ___result;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t384*)SZArrayNew(AchievementU5BU5D_t384_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_003f;
	}

IL_002c:
	{
		AchievementU5BU5D_t384* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t344* L_5 = ___result;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		Achievement_t303 * L_7 = GcAchievementData_ToAchievement_m1320(((GcAchievementData_t294 *)(GcAchievementData_t294 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, L_7);
		*((Achievement_t303 **)(Achievement_t303 **)SZArrayLdElema(L_3, L_4)) = (Achievement_t303 *)L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t344* L_10 = ___result;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t97 * L_11 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3;
		AchievementU5BU5D_t384* L_12 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_m1458(L_11, (IAchievementU5BU5D_t385*)(IAchievementU5BU5D_t385*)L_12, /*hidden argument*/Action_1_Invoke_m1458_MethodInfo_var);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_ProgressCallbackWrapper_m347 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m1457(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreCallbackWrapper_m348 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m1457(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t386_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1459_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreLoaderCallbackWrapper_m349 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t345* ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		ScoreU5BU5D_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		Action_1_Invoke_m1459_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t386* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t98 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t345* L_1 = ___result;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t386*)SZArrayNew(ScoreU5BU5D_t386_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ScoreU5BU5D_t386* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t345* L_4 = ___result;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t305 * L_6 = GcScoreData_ToScore_m1321(((GcScoreData_t295 *)(GcScoreData_t295 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t305 **)(Score_t305 **)SZArrayLdElema(L_2, L_3)) = (Score_t305 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t345* L_9 = ___result;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t98 * L_10 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6;
		ScoreU5BU5D_t386* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m1459(L_10, (IScoreU5BU5D_t307*)(IScoreU5BU5D_t307*)L_11, /*hidden argument*/Action_1_Invoke_m1459_MethodInfo_var);
	}

IL_0041:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern TypeInfo* LocalUser_t102_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral44;
extern "C" Object_t * GameCenterPlatform_get_localUser_m350 (GameCenterPlatform_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		LocalUser_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral44 = il2cpp_codegen_string_literal_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		LocalUser_t102 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		LocalUser_t102 * L_1 = (LocalUser_t102 *)il2cpp_codegen_object_new (LocalUser_t102_il2cpp_TypeInfo_var);
		LocalUser__ctor_m1329(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m317(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		LocalUser_t102 * L_3 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m223(NULL /*static, unused*/, L_4, _stringLiteral44, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m351(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		LocalUser_t102 * L_6 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		return L_6;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_PopulateLocalUser_m351 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		LocalUser_t102 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m317(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m1331(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t102 * L_2 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m318(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m1337(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t102 * L_4 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m319(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m1338(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t102 * L_6 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		bool L_7 = GameCenterPlatform_Internal_Underage_m320(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocalUser_SetUnderage_m1332(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t102 * L_8 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_LocalUser_13;
		Texture2D_t111 * L_9 = GameCenterPlatform_Internal_UserImage_m321(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		UserProfile_SetImage_m1339(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern TypeInfo* AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1456_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievementDescriptions_m352 (GameCenterPlatform_t104 * __this, Action_1_t96 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t96 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m1456(L_1, (IAchievementDescriptionU5BU5D_t383*)(IAchievementDescriptionU5BU5D_t383*)((AchievementDescriptionU5BU5D_t100*)SZArrayNew(AchievementDescriptionU5BU5D_t100_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m1456_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t96 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AchievementDescriptionLoaderCallback_2 = L_2;
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m323(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportProgress_m353 (GameCenterPlatform_t104 * __this, String_t* ___id, double ___progress, Action_1_t95 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t95 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m1457(L_1, 0, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t95 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ProgressCallback_4 = L_2;
		String_t* L_3 = ___id;
		double L_4 = ___progress;
		GameCenterPlatform_Internal_ReportProgress_m325(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern TypeInfo* AchievementU5BU5D_t384_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1458_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievements_m354 (GameCenterPlatform_t104 * __this, Action_1_t97 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementU5BU5D_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1458_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t97 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m1458(L_1, (IAchievementU5BU5D_t385*)(IAchievementU5BU5D_t385*)((AchievementU5BU5D_t384*)SZArrayNew(AchievementU5BU5D_t384_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m1458_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t97 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_AchievementLoaderCallback_3 = L_2;
		GameCenterPlatform_Internal_LoadAchievements_m324(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportScore_m355 (GameCenterPlatform_t104 * __this, int64_t ___score, String_t* ___board, Action_1_t95 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t95 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m1457(L_1, 0, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t95 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ScoreCallback_5 = L_2;
		int64_t L_3 = ___score;
		String_t* L_4 = ___board;
		GameCenterPlatform_Internal_ReportScore_m326(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern TypeInfo* ScoreU5BU5D_t386_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1459_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m356 (GameCenterPlatform_t104 * __this, String_t* ___category, Action_1_t98 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1459_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483680);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t98 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m1459(L_1, (IScoreU5BU5D_t307*)(IScoreU5BU5D_t307*)((ScoreU5BU5D_t386*)SZArrayNew(ScoreU5BU5D_t386_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m1459_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t98 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ScoreLoaderCallback_6 = L_2;
		String_t* L_3 = ___category;
		GameCenterPlatform_Internal_LoadScores_m327(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t105_il2cpp_TypeInfo_var;
extern TypeInfo* GcLeaderboard_t106_il2cpp_TypeInfo_var;
extern TypeInfo* ILeaderboard_t346_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m357 (GameCenterPlatform_t104 * __this, Object_t * ___board, Action_1_t95 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Leaderboard_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		GcLeaderboard_t106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		ILeaderboard_t346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t105 * V_0 = {0};
	GcLeaderboard_t106 * V_1 = {0};
	Range_t308  V_2 = {0};
	Range_t308  V_3 = {0};
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t95 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m1457(L_1, 0, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
		return;
	}

IL_0013:
	{
		Action_1_t95 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7 = L_2;
		Object_t * L_3 = ___board;
		V_0 = ((Leaderboard_t105 *)Castclass(L_3, Leaderboard_t105_il2cpp_TypeInfo_var));
		Leaderboard_t105 * L_4 = V_0;
		GcLeaderboard_t106 * L_5 = (GcLeaderboard_t106 *)il2cpp_codegen_object_new (GcLeaderboard_t106_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_m373(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		List_1_t103 * L_6 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		GcLeaderboard_t106 * L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< GcLeaderboard_t106 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0) */, L_6, L_7);
		Leaderboard_t105 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t45* L_9 = Leaderboard_GetUserFilter_m1378(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GcLeaderboard_t106 * L_10 = V_1;
		Object_t * L_11 = ___board;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t346_il2cpp_TypeInfo_var, L_11);
		Object_t * L_13 = ___board;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t346_il2cpp_TypeInfo_var, L_13);
		Leaderboard_t105 * L_15 = V_0;
		NullCheck(L_15);
		StringU5BU5D_t45* L_16 = Leaderboard_GetUserFilter_m1378(L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		GcLeaderboard_Internal_LoadScoresWithUsers_m381(L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_005d:
	{
		GcLeaderboard_t106 * L_17 = V_1;
		Object_t * L_18 = ___board;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t346_il2cpp_TypeInfo_var, L_18);
		Object_t * L_20 = ___board;
		NullCheck(L_20);
		Range_t308  L_21 = (Range_t308 )InterfaceFuncInvoker0< Range_t308  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t346_il2cpp_TypeInfo_var, L_20);
		V_2 = L_21;
		int32_t L_22 = ((&V_2)->___from_0);
		Object_t * L_23 = ___board;
		NullCheck(L_23);
		Range_t308  L_24 = (Range_t308 )InterfaceFuncInvoker0< Range_t308  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t346_il2cpp_TypeInfo_var, L_23);
		V_3 = L_24;
		int32_t L_25 = ((&V_3)->___count_1);
		Object_t * L_26 = ___board;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t346_il2cpp_TypeInfo_var, L_26);
		Object_t * L_28 = ___board;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t346_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_17);
		GcLeaderboard_Internal_LoadScores_m380(L_17, L_19, L_22, L_25, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_LeaderboardCallbackWrapper_m358 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_LeaderboardCallback_7;
		bool L_2 = ___success;
		NullCheck(L_1);
		Action_1_Invoke_m1457(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern TypeInfo* Leaderboard_t105_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t387_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1460_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1461_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1462_MethodInfo_var;
extern "C" bool GameCenterPlatform_GetLoading_m359 (GameCenterPlatform_t104 * __this, Object_t * ___board, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Leaderboard_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Enumerator_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m1460_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		Enumerator_get_Current_m1461_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		Enumerator_MoveNext_m1462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		s_Il2CppMethodIntialized = true;
	}
	GcLeaderboard_t106 * V_0 = {0};
	Enumerator_t387  V_1 = {0};
	bool V_2 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		List_1_t103 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___m_GcBoards_14;
		NullCheck(L_1);
		Enumerator_t387  L_2 = List_1_GetEnumerator_m1460(L_1, /*hidden argument*/List_1_GetEnumerator_m1460_MethodInfo_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001d:
		{
			GcLeaderboard_t106 * L_3 = Enumerator_get_Current_m1461((&V_1), /*hidden argument*/Enumerator_get_Current_m1461_MethodInfo_var);
			V_0 = L_3;
			GcLeaderboard_t106 * L_4 = V_0;
			Object_t * L_5 = ___board;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m375(L_4, ((Leaderboard_t105 *)Castclass(L_5, Leaderboard_t105_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			GcLeaderboard_t106 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m382(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0042:
		{
			bool L_9 = Enumerator_MoveNext_m1462((&V_1), /*hidden argument*/Enumerator_MoveNext_m1462_MethodInfo_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t387  L_10 = V_1;
		Enumerator_t387  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t387_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_005f:
	{
		return 0;
	}

IL_0061:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern TypeInfo* ILocalUser_t343_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral45;
extern "C" bool GameCenterPlatform_VerifyAuthentication_m360 (GameCenterPlatform_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILocalUser_t343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		_stringLiteral45 = il2cpp_codegen_string_literal_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = GameCenterPlatform_get_localUser_m350(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t343_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m254(NULL /*static, unused*/, _stringLiteral45, /*hidden argument*/NULL);
		return 0;
	}

IL_001c:
	{
		return 1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowAchievementsUI_m361 (GameCenterPlatform_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m328(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m362 (GameCenterPlatform_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m329(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearUsers_m363 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m369(NULL /*static, unused*/, (&((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUser_m364 (Object_t * __this /* static, unused */, GcUserProfileData_t292  ___data, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m1318((&___data), (&((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SetUserImage_m365 (Object_t * __this /* static, unused */, Texture2D_t111 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Texture2D_t111 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m368(NULL /*static, unused*/, (&((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_users_11), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1463_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerUsersCallbackWrapper_m366 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1463_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t99 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t99 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8;
		UserProfileU5BU5D_t101* L_2 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_users_11;
		NullCheck(L_1);
		Action_1_Invoke_m1463(L_1, (IUserProfileU5BU5D_t301*)(IUserProfileU5BU5D_t301*)L_2, /*hidden argument*/Action_1_Invoke_m1463_MethodInfo_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern TypeInfo* UserProfileU5BU5D_t101_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1463_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadUsers_m367 (GameCenterPlatform_t104 * __this, StringU5BU5D_t45* ___userIds, Action_1_t99 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1463_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m360(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t99 * L_1 = ___callback;
		NullCheck(L_1);
		Action_1_Invoke_m1463(L_1, (IUserProfileU5BU5D_t301*)(IUserProfileU5BU5D_t301*)((UserProfileU5BU5D_t101*)SZArrayNew(UserProfileU5BU5D_t101_il2cpp_TypeInfo_var, 0)), /*hidden argument*/Action_1_Invoke_m1463_MethodInfo_var);
		return;
	}

IL_0018:
	{
		Action_1_t99 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_UsersCallback_8 = L_2;
		StringU5BU5D_t45* L_3 = ___userIds;
		GameCenterPlatform_Internal_LoadUsers_m330(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern TypeInfo* Texture2D_t111_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral46;
extern Il2CppCodeGenString* _stringLiteral47;
extern "C" void GameCenterPlatform_SafeSetUserImage_m368 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t101** ___array, Texture2D_t111 * ___texture, int32_t ___number, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(79);
		_stringLiteral46 = il2cpp_codegen_string_literal_from_index(46);
		_stringLiteral47 = il2cpp_codegen_string_literal_from_index(47);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t101** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t101**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t101**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0011:
	{
		Debug_Log_m254(NULL /*static, unused*/, _stringLiteral46, /*hidden argument*/NULL);
		Texture2D_t111 * L_3 = (Texture2D_t111 *)il2cpp_codegen_object_new (Texture2D_t111_il2cpp_TypeInfo_var);
		Texture2D__ctor_m406(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture = L_3;
	}

IL_0026:
	{
		UserProfileU5BU5D_t101** L_4 = ___array;
		NullCheck((*((UserProfileU5BU5D_t101**)L_4)));
		int32_t L_5 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t101**)L_4)))->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___number;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		UserProfileU5BU5D_t101** L_7 = ___array;
		int32_t L_8 = ___number;
		NullCheck((*((UserProfileU5BU5D_t101**)L_7)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t101**)L_7)), L_8);
		int32_t L_9 = L_8;
		Texture2D_t111 * L_10 = ___texture;
		NullCheck((*(UserProfile_t302 **)(UserProfile_t302 **)SZArrayLdElema((*((UserProfileU5BU5D_t101**)L_7)), L_9)));
		UserProfile_SetImage_m1339((*(UserProfile_t302 **)(UserProfile_t302 **)SZArrayLdElema((*((UserProfileU5BU5D_t101**)L_7)), L_9)), L_10, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_Log_m254(NULL /*static, unused*/, _stringLiteral47, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern TypeInfo* UserProfileU5BU5D_t101_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeClearArray_m369 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t101** ___array, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfileU5BU5D_t101** L_0 = ___array;
		if (!(*((UserProfileU5BU5D_t101**)L_0)))
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_t101** L_1 = ___array;
		NullCheck((*((UserProfileU5BU5D_t101**)L_1)));
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t101**)L_1)))->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0011:
	{
		UserProfileU5BU5D_t101** L_3 = ___array;
		int32_t L_4 = ___size;
		*((Object_t **)(L_3)) = (Object_t *)((UserProfileU5BU5D_t101*)SZArrayNew(UserProfileU5BU5D_t101_il2cpp_TypeInfo_var, L_4));
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern TypeInfo* Leaderboard_t105_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateLeaderboard_m370 (GameCenterPlatform_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Leaderboard_t105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		s_Il2CppMethodIntialized = true;
	}
	Leaderboard_t105 * V_0 = {0};
	{
		Leaderboard_t105 * L_0 = (Leaderboard_t105 *)il2cpp_codegen_object_new (Leaderboard_t105_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m1372(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_t105 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern TypeInfo* Achievement_t303_il2cpp_TypeInfo_var;
extern "C" Object_t * GameCenterPlatform_CreateAchievement_m371 (GameCenterPlatform_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		s_Il2CppMethodIntialized = true;
	}
	Achievement_t303 * V_0 = {0};
	{
		Achievement_t303 * L_0 = (Achievement_t303 *)il2cpp_codegen_object_new (Achievement_t303_il2cpp_TypeInfo_var);
		Achievement__ctor_m1346(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t303 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern TypeInfo* GameCenterPlatform_t104_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m1457_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerResetAchievementCallback_m372 (Object_t * __this /* static, unused */, bool ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Action_1_Invoke_m1457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_0 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t104_il2cpp_TypeInfo_var);
		Action_1_t95 * L_1 = ((GameCenterPlatform_t104_StaticFields*)GameCenterPlatform_t104_il2cpp_TypeInfo_var->static_fields)->___s_ResetAchievements_12;
		bool L_2 = ___result;
		NullCheck(L_1);
		Action_1_Invoke_m1457(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1457_MethodInfo_var);
	}

IL_0015:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" void GcLeaderboard__ctor_m373 (GcLeaderboard_t106 * __this, Leaderboard_t105 * ___board, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		Leaderboard_t105 * L_0 = ___board;
		__this->___m_GenericLeaderboard_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C" void GcLeaderboard_Finalize_m374 (GcLeaderboard_t106 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GcLeaderboard_Dispose_m383(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m375 (GcLeaderboard_t106 * __this, Leaderboard_t105 * ___board, const MethodInfo* method)
{
	{
		Leaderboard_t105 * L_0 = (__this->___m_GenericLeaderboard_1);
		Leaderboard_t105 * L_1 = ___board;
		return ((((Object_t*)(Leaderboard_t105 *)L_0) == ((Object_t*)(Leaderboard_t105 *)L_1))? 1 : 0);
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern TypeInfo* ScoreU5BU5D_t386_il2cpp_TypeInfo_var;
extern "C" void GcLeaderboard_SetScores_m376 (GcLeaderboard_t106 * __this, GcScoreDataU5BU5D_t345* ___scoreDatas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreU5BU5D_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		s_Il2CppMethodIntialized = true;
	}
	ScoreU5BU5D_t386* V_0 = {0};
	int32_t V_1 = 0;
	{
		Leaderboard_t105 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GcScoreDataU5BU5D_t345* L_1 = ___scoreDatas;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t386*)SZArrayNew(ScoreU5BU5D_t386_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_001b:
	{
		ScoreU5BU5D_t386* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t345* L_4 = ___scoreDatas;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t305 * L_6 = GcScoreData_ToScore_m1321(((GcScoreData_t295 *)(GcScoreData_t295 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t305 **)(Score_t305 **)SZArrayLdElema(L_2, L_3)) = (Score_t305 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t345* L_9 = ___scoreDatas;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_t105 * L_10 = (__this->___m_GenericLeaderboard_1);
		ScoreU5BU5D_t386* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m1376(L_10, (IScoreU5BU5D_t307*)(IScoreU5BU5D_t307*)L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C" void GcLeaderboard_SetLocalScore_m377 (GcLeaderboard_t106 * __this, GcScoreData_t295  ___scoreData, const MethodInfo* method)
{
	{
		Leaderboard_t105 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t105 * L_1 = (__this->___m_GenericLeaderboard_1);
		Score_t305 * L_2 = GcScoreData_ToScore_m1321((&___scoreData), /*hidden argument*/NULL);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m1374(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C" void GcLeaderboard_SetMaxRange_m378 (GcLeaderboard_t106 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		Leaderboard_t105 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t105 * L_1 = (__this->___m_GenericLeaderboard_1);
		uint32_t L_2 = ___maxRange;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m1375(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C" void GcLeaderboard_SetTitle_m379 (GcLeaderboard_t106 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		Leaderboard_t105 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t105 * L_1 = (__this->___m_GenericLeaderboard_1);
		String_t* L_2 = ___title;
		NullCheck(L_1);
		Leaderboard_SetTitle_m1377(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void GcLeaderboard_Internal_LoadScores_m380 (GcLeaderboard_t106 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m380_ftn) (GcLeaderboard_t106 *, String_t*, int32_t, int32_t, int32_t, int32_t);
	static GcLeaderboard_Internal_LoadScores_m380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___category, ___from, ___count, ___playerScope, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m381 (GcLeaderboard_t106 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t45* ___userIDs, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScoresWithUsers_m381_ftn) (GcLeaderboard_t106 *, String_t*, int32_t, StringU5BU5D_t45*);
	static GcLeaderboard_Internal_LoadScoresWithUsers_m381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScoresWithUsers_m381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])");
	_il2cpp_icall_func(__this, ___category, ___timeScope, ___userIDs);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m382 (GcLeaderboard_t106 * __this, const MethodInfo* method)
{
	typedef bool (*GcLeaderboard_Loading_m382_ftn) (GcLeaderboard_t106 *);
	static GcLeaderboard_Loading_m382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m383 (GcLeaderboard_t106 * __this, const MethodInfo* method)
{
	typedef void (*GcLeaderboard_Dispose_m383_ftn) (GcLeaderboard_t106 *);
	static GcLeaderboard_Dispose_m383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"


// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C" float BoneWeight_get_weight0_m384 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight0_0);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
extern "C" void BoneWeight_set_weight0_m385 (BoneWeight_t107 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight0_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C" float BoneWeight_get_weight1_m386 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight1_1);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
extern "C" void BoneWeight_set_weight1_m387 (BoneWeight_t107 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight1_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C" float BoneWeight_get_weight2_m388 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight2_2);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
extern "C" void BoneWeight_set_weight2_m389 (BoneWeight_t107 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight2_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C" float BoneWeight_get_weight3_m390 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight3_3);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
extern "C" void BoneWeight_set_weight3_m391 (BoneWeight_t107 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight3_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C" int32_t BoneWeight_get_boneIndex0_m392 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex0_4);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
extern "C" void BoneWeight_set_boneIndex0_m393 (BoneWeight_t107 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex0_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C" int32_t BoneWeight_get_boneIndex1_m394 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex1_5);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern "C" void BoneWeight_set_boneIndex1_m395 (BoneWeight_t107 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex1_5 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C" int32_t BoneWeight_get_boneIndex2_m396 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex2_6);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern "C" void BoneWeight_set_boneIndex2_m397 (BoneWeight_t107 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex2_6 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C" int32_t BoneWeight_get_boneIndex3_m398 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex3_7);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern "C" void BoneWeight_set_boneIndex3_m399 (BoneWeight_t107 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex3_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::GetHashCode()
extern "C" int32_t BoneWeight_GetHashCode_m400 (BoneWeight_t107 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m392(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m1464((&V_0), /*hidden argument*/NULL);
		int32_t L_2 = BoneWeight_get_boneIndex1_m394(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m1464((&V_1), /*hidden argument*/NULL);
		int32_t L_4 = BoneWeight_get_boneIndex2_m396(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Int32_GetHashCode_m1464((&V_2), /*hidden argument*/NULL);
		int32_t L_6 = BoneWeight_get_boneIndex3_m398(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Int32_GetHashCode_m1464((&V_3), /*hidden argument*/NULL);
		float L_8 = BoneWeight_get_weight0_m384(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m1465((&V_4), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight1_m386(__this, /*hidden argument*/NULL);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m1465((&V_5), /*hidden argument*/NULL);
		float L_12 = BoneWeight_get_weight2_m388(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m1465((&V_6), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight3_m390(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		int32_t L_15 = Single_GetHashCode_m1465((&V_7), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
// System.Boolean UnityEngine.BoneWeight::Equals(System.Object)
extern TypeInfo* BoneWeight_t107_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t161_il2cpp_TypeInfo_var;
extern "C" bool BoneWeight_Equals_m401 (BoneWeight_t107 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoneWeight_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		Vector4_t161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		s_Il2CppMethodIntialized = true;
	}
	BoneWeight_t107  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector4_t161  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, BoneWeight_t107_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(BoneWeight_t107 *)((BoneWeight_t107 *)UnBox (L_1, BoneWeight_t107_il2cpp_TypeInfo_var))));
		int32_t L_2 = BoneWeight_get_boneIndex0_m392(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = BoneWeight_get_boneIndex0_m392((&V_0), /*hidden argument*/NULL);
		bool L_4 = Int32_Equals_m1466((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = BoneWeight_get_boneIndex1_m394(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = BoneWeight_get_boneIndex1_m394((&V_0), /*hidden argument*/NULL);
		bool L_7 = Int32_Equals_m1466((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = BoneWeight_get_boneIndex2_m396(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = BoneWeight_get_boneIndex2_m396((&V_0), /*hidden argument*/NULL);
		bool L_10 = Int32_Equals_m1466((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = BoneWeight_get_boneIndex3_m398(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = BoneWeight_get_boneIndex3_m398((&V_0), /*hidden argument*/NULL);
		bool L_13 = Int32_Equals_m1466((&V_4), L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = BoneWeight_get_weight0_m384(__this, /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight1_m386(__this, /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight2_m388(__this, /*hidden argument*/NULL);
		float L_17 = BoneWeight_get_weight3_m390(__this, /*hidden argument*/NULL);
		Vector4__ctor_m732((&V_5), L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		float L_18 = BoneWeight_get_weight0_m384((&V_0), /*hidden argument*/NULL);
		float L_19 = BoneWeight_get_weight1_m386((&V_0), /*hidden argument*/NULL);
		float L_20 = BoneWeight_get_weight2_m388((&V_0), /*hidden argument*/NULL);
		float L_21 = BoneWeight_get_weight3_m390((&V_0), /*hidden argument*/NULL);
		Vector4_t161  L_22 = {0};
		Vector4__ctor_m732(&L_22, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		Vector4_t161  L_23 = L_22;
		Object_t * L_24 = Box(Vector4_t161_il2cpp_TypeInfo_var, &L_23);
		bool L_25 = Vector4_Equals_m734((&V_5), L_24, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Equality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Equality_m402 (Object_t * __this /* static, unused */, BoneWeight_t107  ___lhs, BoneWeight_t107  ___rhs, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m392((&___lhs), /*hidden argument*/NULL);
		int32_t L_1 = BoneWeight_get_boneIndex0_m392((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = BoneWeight_get_boneIndex1_m394((&___lhs), /*hidden argument*/NULL);
		int32_t L_3 = BoneWeight_get_boneIndex1_m394((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = BoneWeight_get_boneIndex2_m396((&___lhs), /*hidden argument*/NULL);
		int32_t L_5 = BoneWeight_get_boneIndex2_m396((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = BoneWeight_get_boneIndex3_m398((&___lhs), /*hidden argument*/NULL);
		int32_t L_7 = BoneWeight_get_boneIndex3_m398((&___rhs), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = BoneWeight_get_weight0_m384((&___lhs), /*hidden argument*/NULL);
		float L_9 = BoneWeight_get_weight1_m386((&___lhs), /*hidden argument*/NULL);
		float L_10 = BoneWeight_get_weight2_m388((&___lhs), /*hidden argument*/NULL);
		float L_11 = BoneWeight_get_weight3_m390((&___lhs), /*hidden argument*/NULL);
		Vector4_t161  L_12 = {0};
		Vector4__ctor_m732(&L_12, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = BoneWeight_get_weight0_m384((&___rhs), /*hidden argument*/NULL);
		float L_14 = BoneWeight_get_weight1_m386((&___rhs), /*hidden argument*/NULL);
		float L_15 = BoneWeight_get_weight2_m388((&___rhs), /*hidden argument*/NULL);
		float L_16 = BoneWeight_get_weight3_m390((&___rhs), /*hidden argument*/NULL);
		Vector4_t161  L_17 = {0};
		Vector4__ctor_m732(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		bool L_18 = Vector4_op_Equality_m739(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Inequality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Inequality_m403 (Object_t * __this /* static, unused */, BoneWeight_t107  ___lhs, BoneWeight_t107  ___rhs, const MethodInfo* method)
{
	{
		BoneWeight_t107  L_0 = ___lhs;
		BoneWeight_t107  L_1 = ___rhs;
		bool L_2 = BoneWeight_op_Equality_m402(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"



// UnityEngine.Screen
#include "UnityEngine_UnityEngine_Screen.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"



// System.Int32 UnityEngine.Screen::get_width()
extern "C" int32_t Screen_get_width_m280 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_width_m280_ftn) ();
	static Screen_get_width_m280_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m280_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_height()
extern "C" int32_t Screen_get_height_m404 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Screen_get_height_m404_ftn) ();
	static Screen_get_height_m404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"



// System.Void UnityEngine.Texture::.ctor()
extern "C" void Texture__ctor_m405 (Texture_t110 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m890(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void Texture2D__ctor_m406 (Texture2D_t111 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(82);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture__ctor_m405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m407(NULL /*static, unused*/, __this, L_0, L_1, 5, 1, 0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m407 (Object_t * __this /* static, unused */, Texture2D_t111 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method)
{
	typedef void (*Texture2D_Internal_Create_m407_ftn) (Texture2D_t111 *, int32_t, int32_t, int32_t, bool, bool, IntPtr_t);
	static Texture2D_Internal_Create_m407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_Create_m407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___format, ___mipmap, ___linear, ___nativeTex);
}
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"



// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbeMethodDeclarations.h"



// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElementMethodDeclarations.h"



// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"


// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t115 * GUILayer_HitTest_m408 (GUILayer_t116 * __this, Vector3_t70  ___screenPosition, const MethodInfo* method)
{
	{
		GUIElement_t115 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m409(NULL /*static, unused*/, __this, (&___screenPosition), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t115 * GUILayer_INTERNAL_CALL_HitTest_m409 (Object_t * __this /* static, unused */, GUILayer_t116 * ___self, Vector3_t70 * ___screenPosition, const MethodInfo* method)
{
	typedef GUIElement_t115 * (*GUILayer_INTERNAL_CALL_HitTest_m409_ftn) (GUILayer_t116 *, Vector3_t70 *);
	static GUILayer_INTERNAL_CALL_HitTest_m409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___screenPosition);
}
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKeyMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
extern "C" void GradientColorKey__ctor_m410 (GradientColorKey_t117 * __this, Color_t60  ___col, float ___time, const MethodInfo* method)
{
	{
		Color_t60  L_0 = ___col;
		__this->___color_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKeyMethodDeclarations.h"



// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
extern "C" void GradientAlphaKey__ctor_m411 (GradientAlphaKey_t118 * __this, float ___alpha, float ___time, const MethodInfo* method)
{
	{
		float L_0 = ___alpha;
		__this->___alpha_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_Gradient.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"



// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m412 (Gradient_t119 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		Gradient_Init_m413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m413 (Gradient_t119 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Init_m413_ftn) (Gradient_t119 *);
	static Gradient_Init_m413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m414 (Gradient_t119 * __this, const MethodInfo* method)
{
	typedef void (*Gradient_Cleanup_m414_ftn) (Gradient_t119 *);
	static Gradient_Cleanup_m414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m415 (Gradient_t119 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Gradient_Cleanup_m414(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Gradient
void Gradient_t119_marshal(const Gradient_t119& unmarshaled, Gradient_t119_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
void Gradient_t119_marshal_back(const Gradient_t119_marshaled& marshaled, Gradient_t119& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void Gradient_t119_marshal_cleanup(Gradient_t119_marshaled& marshaled)
{
}
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewStateMethodDeclarations.h"



// System.Void UnityEngine.GUI/ScrollViewState::.ctor()
extern "C" void ScrollViewState__ctor_m416 (ScrollViewState_t120 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" void WindowFunction__ctor_m417 (WindowFunction_t124 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern "C" void WindowFunction_Invoke_m418 (WindowFunction_t124 * __this, int32_t ___id, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WindowFunction_Invoke_m418((WindowFunction_t124 *)__this->___prev_9,___id, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___id, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t124(Il2CppObject* delegate, int32_t ___id)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t72_il2cpp_TypeInfo_var;
extern "C" Object_t * WindowFunction_BeginInvoke_m419 (WindowFunction_t124 * __this, int32_t ___id, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t72_il2cpp_TypeInfo_var, &___id);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern "C" void WindowFunction_EndInvoke_m420 (WindowFunction_t124 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCache.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"


// System.Void UnityEngine.GUI::.cctor()
extern TypeInfo* GUI_t128_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t127_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t129_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral52;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral54;
extern "C" void GUI__cctor_m421 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		GenericStack_t127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		DateTime_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		_stringLiteral48 = il2cpp_codegen_string_literal_from_index(48);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral50 = il2cpp_codegen_string_literal_from_index(50);
		_stringLiteral51 = il2cpp_codegen_string_literal_from_index(51);
		_stringLiteral52 = il2cpp_codegen_string_literal_from_index(52);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral54 = il2cpp_codegen_string_literal_from_index(54);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___scrollStepSize_0 = (10.0f);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___hotTextField_2 = (-1);
		NullCheck(_stringLiteral48);
		int32_t L_0 = String_GetHashCode_m1467(_stringLiteral48, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___boxHash_5 = L_0;
		NullCheck(_stringLiteral49);
		int32_t L_1 = String_GetHashCode_m1467(_stringLiteral49, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___repeatButtonHash_6 = L_1;
		NullCheck(_stringLiteral50);
		int32_t L_2 = String_GetHashCode_m1467(_stringLiteral50, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___toggleHash_7 = L_2;
		NullCheck(_stringLiteral51);
		int32_t L_3 = String_GetHashCode_m1467(_stringLiteral51, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___buttonGridHash_8 = L_3;
		NullCheck(_stringLiteral52);
		int32_t L_4 = String_GetHashCode_m1467(_stringLiteral52, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___sliderHash_9 = L_4;
		NullCheck(_stringLiteral53);
		int32_t L_5 = String_GetHashCode_m1467(_stringLiteral53, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___beginGroupHash_10 = L_5;
		NullCheck(_stringLiteral54);
		int32_t L_6 = String_GetHashCode_m1467(_stringLiteral54, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___scrollviewHash_11 = L_6;
		GenericStack_t127 * L_7 = (GenericStack_t127 *)il2cpp_codegen_object_new (GenericStack_t127_il2cpp_TypeInfo_var);
		GenericStack__ctor_m1451(L_7, /*hidden argument*/NULL);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___s_ScrollViewStates_12 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t129_il2cpp_TypeInfo_var);
		DateTime_t129  L_8 = DateTime_get_Now_m1468(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_nextScrollStepTime_m422(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern TypeInfo* GUI_t128_il2cpp_TypeInfo_var;
extern "C" void GUI_set_nextScrollStepTime_m422 (Object_t * __this /* static, unused */, DateTime_t129  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t129  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___U3CnextScrollStepTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t128_il2cpp_TypeInfo_var;
extern "C" void GUI_set_skin_m423 (Object_t * __this /* static, unused */, GUISkin_t126 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		GUI_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m477(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUISkin_t126 * L_0 = ___value;
		bool L_1 = Object_op_Implicit_m902(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		GUISkin_t126 * L_2 = GUIUtility_GetDefaultSkin_m471(NULL /*static, unused*/, /*hidden argument*/NULL);
		___value = L_2;
	}

IL_0017:
	{
		GUISkin_t126 * L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___s_Skin_3 = L_3;
		GUISkin_t126 * L_4 = ___value;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m536(L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t128_il2cpp_TypeInfo_var;
extern "C" GUISkin_t126 * GUI_get_skin_m424 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		GUI_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		GUIUtility_CheckOnGUI_m477(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		GUISkin_t126 * L_0 = ((GUI_t128_StaticFields*)GUI_t128_il2cpp_TypeInfo_var->static_fields)->___s_Skin_3;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m425 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	typedef void (*GUI_set_changed_m425_ftn) (bool);
	static GUI_set_changed_m425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t128_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t348_il2cpp_TypeInfo_var;
extern "C" void GUI_CallWindowDelegate_m426 (Object_t * __this /* static, unused */, WindowFunction_t124 * ___func, int32_t ___id, GUISkin_t126 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t134 * ___style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		GUI_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		GUILayoutOptionU5BU5D_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	GUISkin_t126 * V_0 = {0};
	GUILayoutOptionU5BU5D_t348* V_1 = {0};
	{
		int32_t L_0 = ___id;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m431(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		GUISkin_t126 * L_1 = GUI_get_skin_m424(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t153 * L_2 = Event_get_current_m601(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m594(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = ___forceRect;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		GUILayoutOptionU5BU5D_t348* L_5 = ((GUILayoutOptionU5BU5D_t348*)SZArrayNew(GUILayoutOptionU5BU5D_t348_il2cpp_TypeInfo_var, 2));
		float L_6 = ___width;
		GUILayoutOption_t141 * L_7 = GUILayout_Width_m427(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t141 **)(GUILayoutOption_t141 **)SZArrayLdElema(L_5, 0)) = (GUILayoutOption_t141 *)L_7;
		GUILayoutOptionU5BU5D_t348* L_8 = L_5;
		float L_9 = ___height;
		GUILayoutOption_t141 * L_10 = GUILayout_Height_m428(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_10);
		*((GUILayoutOption_t141 **)(GUILayoutOption_t141 **)SZArrayLdElema(L_8, 1)) = (GUILayoutOption_t141 *)L_10;
		V_1 = L_8;
		int32_t L_11 = ___id;
		GUIStyle_t134 * L_12 = ___style;
		GUILayoutOptionU5BU5D_t348* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m433(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = ___id;
		GUIStyle_t134 * L_15 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUILayoutUtility_BeginWindow_m433(NULL /*static, unused*/, L_14, L_15, (GUILayoutOptionU5BU5D_t348*)(GUILayoutOptionU5BU5D_t348*)NULL, /*hidden argument*/NULL);
	}

IL_0056:
	{
		GUISkin_t126 * L_16 = ____skin;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		GUI_set_skin_m423(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		WindowFunction_t124 * L_17 = ___func;
		int32_t L_18 = ___id;
		NullCheck(L_17);
		WindowFunction_Invoke_m418(L_17, L_18, /*hidden argument*/NULL);
		Event_t153 * L_19 = Event_get_current_m601(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = Event_get_type_m594(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUILayoutUtility_Layout_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0078:
	{
		GUISkin_t126 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		GUI_set_skin_m423(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayout.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"


// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t141_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t141 * GUILayout_Width_m427 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		GUILayoutOption_t141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___width;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t78_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t141 * L_3 = (GUILayoutOption_t141 *)il2cpp_codegen_object_new (GUILayoutOption_t141_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m469(L_3, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOption_t141_il2cpp_TypeInfo_var;
extern "C" GUILayoutOption_t141 * GUILayout_Height_m428 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		GUILayoutOption_t141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___height;
		float L_1 = L_0;
		Object_t * L_2 = Box(Single_t78_il2cpp_TypeInfo_var, &L_1);
		GUILayoutOption_t141 * L_3 = (GUILayoutOption_t141 *)il2cpp_codegen_object_new (GUILayoutOption_t141_il2cpp_TypeInfo_var);
		GUILayoutOption__ctor_m469(L_3, 1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"

// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
extern TypeInfo* GUILayoutGroup_t131_il2cpp_TypeInfo_var;
extern TypeInfo* GenericStack_t127_il2cpp_TypeInfo_var;
extern "C" void LayoutCache__ctor_m429 (LayoutCache_t132 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GenericStack_t127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILayoutGroup_t131 * L_0 = (GUILayoutGroup_t131 *)il2cpp_codegen_object_new (GUILayoutGroup_t131_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m454(L_0, /*hidden argument*/NULL);
		__this->___topLevel_0 = L_0;
		GenericStack_t127 * L_1 = (GenericStack_t127 *)il2cpp_codegen_object_new (GenericStack_t127_il2cpp_TypeInfo_var);
		GenericStack__ctor_m1451(L_1, /*hidden argument*/NULL);
		__this->___layoutGroups_1 = L_1;
		GUILayoutGroup_t131 * L_2 = (GUILayoutGroup_t131 *)il2cpp_codegen_object_new (GUILayoutGroup_t131_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m454(L_2, /*hidden argument*/NULL);
		__this->___windows_2 = L_2;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		GenericStack_t127 * L_3 = (__this->___layoutGroups_1);
		GUILayoutGroup_t131 * L_4 = (__this->___topLevel_0);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(15 /* System.Void System.Collections.Stack::Push(System.Object) */, L_3, L_4);
		return;
	}
}
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtility.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"


// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern TypeInfo* Dictionary_2_t133_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t132_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1469_MethodInfo_var;
extern "C" void GUILayoutUtility__cctor_m430 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		LayoutCache_t132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Dictionary_2__ctor_m1469_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t133 * L_0 = (Dictionary_2_t133 *)il2cpp_codegen_object_new (Dictionary_2_t133_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1469(L_0, /*hidden argument*/Dictionary_2__ctor_m1469_MethodInfo_var);
		((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___storedLayouts_0 = L_0;
		Dictionary_2_t133 * L_1 = (Dictionary_2_t133 *)il2cpp_codegen_object_new (Dictionary_2_t133_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1469(L_1, /*hidden argument*/Dictionary_2__ctor_m1469_MethodInfo_var);
		((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___storedWindows_1 = L_1;
		LayoutCache_t132 * L_2 = (LayoutCache_t132 *)il2cpp_codegen_object_new (LayoutCache_t132_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m429(L_2, /*hidden argument*/NULL);
		((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2 = L_2;
		Rect_t121  L_3 = {0};
		Rect__ctor_m643(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_3 = L_3;
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutCache_t132_il2cpp_TypeInfo_var;
extern "C" LayoutCache_t132 * GUILayoutUtility_SelectIDList_m431 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		LayoutCache_t132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t133 * V_0 = {0};
	LayoutCache_t132 * V_1 = {0};
	Dictionary_2_t133 * G_B3_0 = {0};
	{
		bool L_0 = ___isWindow;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		Dictionary_2_t133 * L_1 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___storedWindows_1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		Dictionary_2_t133 * L_2 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___storedLayouts_0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Dictionary_2_t133 * L_3 = V_0;
		int32_t L_4 = ___instanceID;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, LayoutCache_t132 ** >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(!0,!1&) */, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		LayoutCache_t132 * L_6 = (LayoutCache_t132 *)il2cpp_codegen_object_new (LayoutCache_t132_il2cpp_TypeInfo_var);
		LayoutCache__ctor_m429(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t133 * L_7 = V_0;
		int32_t L_8 = ___instanceID;
		LayoutCache_t132 * L_9 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LayoutCache_t132 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(!0,!1) */, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_10 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_t131 * L_12 = (L_11->___topLevel_0);
		NullCheck(L_10);
		L_10->___topLevel_0 = L_12;
		LayoutCache_t132 * L_13 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_t127 * L_15 = (L_14->___layoutGroups_1);
		NullCheck(L_13);
		L_13->___layoutGroups_1 = L_15;
		LayoutCache_t132 * L_16 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_t131 * L_18 = (L_17->___windows_2);
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		LayoutCache_t132 * L_19 = V_1;
		return L_19;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t131_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Begin_m432 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		GUILayoutGroup_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t132 * V_0 = {0};
	GUILayoutGroup_t131 * V_1 = {0};
	{
		int32_t L_0 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_1 = GUILayoutUtility_SelectIDList_m431(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t153 * L_2 = Event_get_current_m601(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m594(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_4 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_5 = V_0;
		GUILayoutGroup_t131 * L_6 = (GUILayoutGroup_t131 *)il2cpp_codegen_object_new (GUILayoutGroup_t131_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m454(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t131 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t132 * L_9 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GenericStack_t127 * L_10 = (L_9->___layoutGroups_1);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Collections.Stack::Clear() */, L_10);
		LayoutCache_t132 * L_11 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_11);
		GenericStack_t127 * L_12 = (L_11->___layoutGroups_1);
		LayoutCache_t132 * L_13 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t131 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(15 /* System.Void System.Collections.Stack::Push(System.Object) */, L_12, L_14);
		LayoutCache_t132 * L_15 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_16 = V_0;
		GUILayoutGroup_t131 * L_17 = (GUILayoutGroup_t131 *)il2cpp_codegen_object_new (GUILayoutGroup_t131_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m454(L_17, /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		GUILayoutGroup_t131 * L_19 = V_1;
		NullCheck(L_15);
		L_15->___windows_2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_20 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_t131 * L_22 = (L_21->___topLevel_0);
		NullCheck(L_20);
		L_20->___topLevel_0 = L_22;
		LayoutCache_t132 * L_23 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_t127 * L_25 = (L_24->___layoutGroups_1);
		NullCheck(L_23);
		L_23->___layoutGroups_1 = L_25;
		LayoutCache_t132 * L_26 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_t131 * L_28 = (L_27->___windows_2);
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutGroup_t131_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_BeginWindow_m433 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t134 * ___style, GUILayoutOptionU5BU5D_t348* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		GUILayoutGroup_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	LayoutCache_t132 * V_0 = {0};
	GUILayoutGroup_t131 * V_1 = {0};
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_1 = GUILayoutUtility_SelectIDList_m431(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		Event_t153 * L_2 = Event_get_current_m601(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m594(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_4 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_5 = V_0;
		GUILayoutGroup_t131 * L_6 = (GUILayoutGroup_t131 *)il2cpp_codegen_object_new (GUILayoutGroup_t131_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m454(L_6, /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t131 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t132 * L_9 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t131 * L_10 = (L_9->___topLevel_0);
		GUIStyle_t134 * L_11 = ___style;
		NullCheck(L_10);
		GUILayoutEntry_set_style_m445(L_10, L_11, /*hidden argument*/NULL);
		LayoutCache_t132 * L_12 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t131 * L_13 = (L_12->___topLevel_0);
		int32_t L_14 = ___windowID;
		NullCheck(L_13);
		L_13->___windowID_16 = L_14;
		GUILayoutOptionU5BU5D_t348* L_15 = ___options;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_16 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_t131 * L_17 = (L_16->___topLevel_0);
		GUILayoutOptionU5BU5D_t348* L_18 = ___options;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t348* >::Invoke(10 /* System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[]) */, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_19 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_19);
		GenericStack_t127 * L_20 = (L_19->___layoutGroups_1);
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Collections.Stack::Clear() */, L_20);
		LayoutCache_t132 * L_21 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_21);
		GenericStack_t127 * L_22 = (L_21->___layoutGroups_1);
		LayoutCache_t132 * L_23 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t131 * L_24 = (L_23->___topLevel_0);
		NullCheck(L_22);
		VirtActionInvoker1< Object_t * >::Invoke(15 /* System.Void System.Collections.Stack::Push(System.Object) */, L_22, L_24);
		LayoutCache_t132 * L_25 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_26 = V_0;
		GUILayoutGroup_t131 * L_27 = (GUILayoutGroup_t131 *)il2cpp_codegen_object_new (GUILayoutGroup_t131_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m454(L_27, /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
		GUILayoutGroup_t131 * L_29 = V_1;
		NullCheck(L_25);
		L_25->___windows_2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_30 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_t131 * L_32 = (L_31->___topLevel_0);
		NullCheck(L_30);
		L_30->___topLevel_0 = L_32;
		LayoutCache_t132 * L_33 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_t127 * L_35 = (L_34->___layoutGroups_1);
		NullCheck(L_33);
		L_33->___layoutGroups_1 = L_35;
		LayoutCache_t132 * L_36 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		LayoutCache_t132 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_t131 * L_38 = (L_37->___windows_2);
		NullCheck(L_36);
		L_36->___windows_2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Layout_m434 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_0 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t131 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___windowID_16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_3 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_t131 * L_4 = (L_3->___topLevel_0);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_4);
		LayoutCache_t132 * L_5 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t131 * L_6 = (L_5->___topLevel_0);
		int32_t L_7 = Screen_get_width_m280(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t132 * L_8 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_t131 * L_9 = (L_8->___topLevel_0);
		NullCheck(L_9);
		float L_10 = (((GUILayoutEntry_t136 *)L_9)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Min_m745(NULL /*static, unused*/, (((float)L_7)), L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_6, (0.0f), L_11);
		LayoutCache_t132 * L_12 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t131 * L_13 = (L_12->___topLevel_0);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_13);
		LayoutCache_t132 * L_14 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_t131 * L_15 = (L_14->___topLevel_0);
		int32_t L_16 = Screen_get_height_m404(NULL /*static, unused*/, /*hidden argument*/NULL);
		LayoutCache_t132 * L_17 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_17);
		GUILayoutGroup_t131 * L_18 = (L_17->___topLevel_0);
		NullCheck(L_18);
		float L_19 = (((GUILayoutEntry_t136 *)L_18)->___maxHeight_3);
		float L_20 = Mathf_Min_m745(NULL /*static, unused*/, (((float)L_16)), L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_15, (0.0f), L_20);
		LayoutCache_t132 * L_21 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_21);
		GUILayoutGroup_t131 * L_22 = (L_21->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m436(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_23 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t131 * L_24 = (L_23->___topLevel_0);
		GUILayoutUtility_LayoutSingleGroup_m437(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		LayoutCache_t132 * L_25 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_t131 * L_26 = (L_25->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m436(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m435 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		LayoutCache_t132 * L_0 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t131 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_1);
		LayoutCache_t132 * L_2 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_2);
		GUILayoutGroup_t131 * L_3 = (L_2->___topLevel_0);
		int32_t L_4 = Screen_get_width_m280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_3, (0.0f), (((float)L_4)));
		LayoutCache_t132 * L_5 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t131 * L_6 = (L_5->___topLevel_0);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_6);
		LayoutCache_t132 * L_7 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_7);
		GUILayoutGroup_t131 * L_8 = (L_7->___topLevel_0);
		int32_t L_9 = Screen_get_height_m404(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_8, (0.0f), (((float)L_9)));
		LayoutCache_t132 * L_10 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_t131 * L_11 = (L_10->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m436(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* GUILayoutGroup_t131_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t388_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1470_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1471_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1472_MethodInfo_var;
extern "C" void GUILayoutUtility_LayoutFreeGroup_m436 (Object_t * __this /* static, unused */, GUILayoutGroup_t131 * ___toplevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutGroup_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Enumerator_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m1472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutGroup_t131 * V_0 = {0};
	Enumerator_t388  V_1 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUILayoutGroup_t131 * L_0 = ___toplevel;
		NullCheck(L_0);
		List_1_t137 * L_1 = (L_0->___entries_10);
		NullCheck(L_1);
		Enumerator_t388  L_2 = List_1_GetEnumerator_m1470(L_1, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			GUILayoutEntry_t136 * L_3 = Enumerator_get_Current_m1471((&V_1), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_0 = ((GUILayoutGroup_t131 *)Castclass(L_3, GUILayoutGroup_t131_il2cpp_TypeInfo_var));
			GUILayoutGroup_t131 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutSingleGroup_m437(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m1472((&V_1), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_6 = V_1;
		Enumerator_t388  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0041:
	{
		GUILayoutGroup_t131 * L_9 = ___toplevel;
		NullCheck(L_9);
		GUILayoutGroup_ResetCursor_m458(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_LayoutSingleGroup_m437 (Object_t * __this /* static, unused */, GUILayoutGroup_t131 * ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t121  V_4 = {0};
	{
		GUILayoutGroup_t131 * L_0 = ___i;
		NullCheck(L_0);
		bool L_1 = (L_0->___isWindow_15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		GUILayoutGroup_t131 * L_2 = ___i;
		NullCheck(L_2);
		float L_3 = (((GUILayoutEntry_t136 *)L_2)->___minWidth_0);
		V_0 = L_3;
		GUILayoutGroup_t131 * L_4 = ___i;
		NullCheck(L_4);
		float L_5 = (((GUILayoutEntry_t136 *)L_4)->___maxWidth_1);
		V_1 = L_5;
		GUILayoutGroup_t131 * L_6 = ___i;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_6);
		GUILayoutGroup_t131 * L_7 = ___i;
		GUILayoutGroup_t131 * L_8 = ___i;
		NullCheck(L_8);
		Rect_t121 * L_9 = &(((GUILayoutEntry_t136 *)L_8)->___rect_4);
		float L_10 = Rect_get_x_m644(L_9, /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_11 = ___i;
		NullCheck(L_11);
		float L_12 = (((GUILayoutEntry_t136 *)L_11)->___maxWidth_1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m750(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_7, L_10, L_15);
		GUILayoutGroup_t131 * L_16 = ___i;
		NullCheck(L_16);
		float L_17 = (((GUILayoutEntry_t136 *)L_16)->___minHeight_2);
		V_2 = L_17;
		GUILayoutGroup_t131 * L_18 = ___i;
		NullCheck(L_18);
		float L_19 = (((GUILayoutEntry_t136 *)L_18)->___maxHeight_3);
		V_3 = L_19;
		GUILayoutGroup_t131 * L_20 = ___i;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_20);
		GUILayoutGroup_t131 * L_21 = ___i;
		GUILayoutGroup_t131 * L_22 = ___i;
		NullCheck(L_22);
		Rect_t121 * L_23 = &(((GUILayoutEntry_t136 *)L_22)->___rect_4);
		float L_24 = Rect_get_y_m646(L_23, /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_25 = ___i;
		NullCheck(L_25);
		float L_26 = (((GUILayoutEntry_t136 *)L_25)->___maxHeight_3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m750(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		GUILayoutGroup_t131 * L_30 = ___i;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutGroup::CalcWidth() */, L_30);
		GUILayoutGroup_t131 * L_31 = ___i;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___windowID_16);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		Rect_t121  L_33 = GUILayoutUtility_Internal_GetWindowRect_m438(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		GUILayoutGroup_t131 * L_34 = ___i;
		float L_35 = Rect_get_x_m644((&V_4), /*hidden argument*/NULL);
		float L_36 = Rect_get_width_m648((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_37 = ___i;
		NullCheck(L_37);
		float L_38 = (((GUILayoutEntry_t136 *)L_37)->___minWidth_0);
		GUILayoutGroup_t131 * L_39 = ___i;
		NullCheck(L_39);
		float L_40 = (((GUILayoutEntry_t136 *)L_39)->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_41 = Mathf_Clamp_m750(NULL /*static, unused*/, L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single) */, L_34, L_35, L_41);
		GUILayoutGroup_t131 * L_42 = ___i;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutGroup::CalcHeight() */, L_42);
		GUILayoutGroup_t131 * L_43 = ___i;
		float L_44 = Rect_get_y_m646((&V_4), /*hidden argument*/NULL);
		float L_45 = Rect_get_height_m650((&V_4), /*hidden argument*/NULL);
		GUILayoutGroup_t131 * L_46 = ___i;
		NullCheck(L_46);
		float L_47 = (((GUILayoutEntry_t136 *)L_46)->___minHeight_2);
		GUILayoutGroup_t131 * L_48 = ___i;
		NullCheck(L_48);
		float L_49 = (((GUILayoutEntry_t136 *)L_48)->___maxHeight_3);
		float L_50 = Mathf_Clamp_m750(NULL /*static, unused*/, L_45, L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single) */, L_43, L_44, L_50);
		GUILayoutGroup_t131 * L_51 = ___i;
		NullCheck(L_51);
		int32_t L_52 = (L_51->___windowID_16);
		GUILayoutGroup_t131 * L_53 = ___i;
		NullCheck(L_53);
		Rect_t121  L_54 = (((GUILayoutEntry_t136 *)L_53)->___rect_4);
		GUILayoutUtility_Internal_MoveWindow_m439(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		return;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t121  GUILayoutUtility_Internal_GetWindowRect_m438 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method)
{
	typedef Rect_t121  (*GUILayoutUtility_Internal_GetWindowRect_m438_ftn) (int32_t);
	static GUILayoutUtility_Internal_GetWindowRect_m438_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_m438_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(___windowID);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern "C" void GUILayoutUtility_Internal_MoveWindow_m439 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t121  ___r, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m440(NULL /*static, unused*/, L_0, (&___r), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m440 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t121 * ___r, const MethodInfo* method)
{
	typedef void (*GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m440_ftn) (int32_t, Rect_t121 *);
	static GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID, ___r);
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t134 * GUILayoutUtility_get_spaceStyle_m441 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_0 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t134 * L_1 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_2 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		NullCheck(L_2);
		GUIStyle_set_stretchWidth_m582(L_2, 0, /*hidden argument*/NULL);
		GUIStyle_t134 * L_3 = ((GUILayoutUtility_t135_StaticFields*)GUILayoutUtility_t135_il2cpp_TypeInfo_var->static_fields)->___s_SpaceStyle_4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__ctor_m442 (GUILayoutEntry_t136 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t134 * ____style, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t121  L_0 = {0};
		Rect__ctor_m643(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_1 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_Style_7 = L_1;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		float L_2 = ____minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t134 * L_6 = ____style;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_7 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		____style = L_7;
	}

IL_005b:
	{
		GUIStyle_t134 * L_8 = ____style;
		GUILayoutEntry_set_style_m445(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern TypeInfo* GUILayoutEntry_t136_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry__cctor_m443 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutEntry_t136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t121  L_0 = {0};
		Rect__ctor_m643(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___kDummyRect_8 = L_0;
		((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___indent_9 = 0;
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t134 * GUILayoutEntry_get_style_m444 (GUILayoutEntry_t136 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_Style_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m445 (GUILayoutEntry_t136 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_Style_7 = L_0;
		GUIStyle_t134 * L_1 = ___value;
		VirtActionInvoker1< GUIStyle_t134 * >::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" RectOffset_t138 * GUILayoutEntry_get_margin_m446 (GUILayoutEntry_t136 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectOffset_t138 * L_1 = GUIStyle_get_margin_m576(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" void GUILayoutEntry_CalcWidth_m447 (GUILayoutEntry_t136 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" void GUILayoutEntry_CalcHeight_m448 (GUILayoutEntry_t136 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetHorizontal_m449 (GUILayoutEntry_t136 * __this, float ___x, float ___width, const MethodInfo* method)
{
	{
		Rect_t121 * L_0 = &(__this->___rect_4);
		float L_1 = ___x;
		Rect_set_x_m645(L_0, L_1, /*hidden argument*/NULL);
		Rect_t121 * L_2 = &(__this->___rect_4);
		float L_3 = ___width;
		Rect_set_width_m649(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetVertical_m450 (GUILayoutEntry_t136 * __this, float ___y, float ___height, const MethodInfo* method)
{
	{
		Rect_t121 * L_0 = &(__this->___rect_4);
		float L_1 = ___y;
		Rect_set_y_m647(L_0, L_1, /*hidden argument*/NULL);
		Rect_t121 * L_2 = &(__this->___rect_4);
		float L_3 = ___height;
		Rect_set_height_m651(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m451 (GUILayoutEntry_t136 * __this, GUIStyle_t134 * ___style, const MethodInfo* method)
{
	GUILayoutEntry_t136 * G_B3_0 = {0};
	GUILayoutEntry_t136 * G_B1_0 = {0};
	GUILayoutEntry_t136 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t136 * G_B4_1 = {0};
	GUILayoutEntry_t136 * G_B7_0 = {0};
	GUILayoutEntry_t136 * G_B5_0 = {0};
	GUILayoutEntry_t136 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t136 * G_B8_1 = {0};
	{
		GUIStyle_t134 * L_0 = ___style;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_m579(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		GUIStyle_t134 * L_2 = ___style;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m581(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t134 * L_4 = ___style;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m580(L_4, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		GUIStyle_t134 * L_6 = ___style;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m583(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t134 * L_8 = ___style;
		__this->___m_Style_7 = L_8;
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t72_il2cpp_TypeInfo_var;
extern "C" void GUILayoutEntry_ApplyOptions_m452 (GUILayoutEntry_t136 * __this, GUILayoutOptionU5BU5D_t348* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		Int32_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t141 * V_0 = {0};
	GUILayoutOptionU5BU5D_t348* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_t348* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t348* L_1 = ___options;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		GUILayoutOptionU5BU5D_t348* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GUILayoutOption_t141 **)(GUILayoutOption_t141 **)SZArrayLdElema(L_2, L_4));
		GUILayoutOption_t141 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___type_0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		GUILayoutOption_t141 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___value_1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, Single_t78_il2cpp_TypeInfo_var))));
		V_4 = L_10;
		__this->___maxWidth_1 = L_10;
		float L_11 = V_4;
		__this->___minWidth_0 = L_11;
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		GUILayoutOption_t141 * L_12 = V_0;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___value_1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, Single_t78_il2cpp_TypeInfo_var))));
		V_4 = L_14;
		__this->___maxHeight_3 = L_14;
		float L_15 = V_4;
		__this->___minHeight_2 = L_15;
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		GUILayoutOption_t141 * L_16 = V_0;
		NullCheck(L_16);
		Object_t * L_17 = (L_16->___value_1);
		__this->___minWidth_0 = ((*(float*)((float*)UnBox (L_17, Single_t78_il2cpp_TypeInfo_var))));
		float L_18 = (__this->___maxWidth_1);
		float L_19 = (__this->___minWidth_0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		GUILayoutOption_t141 * L_21 = V_0;
		NullCheck(L_21);
		Object_t * L_22 = (L_21->___value_1);
		__this->___maxWidth_1 = ((*(float*)((float*)UnBox (L_22, Single_t78_il2cpp_TypeInfo_var))));
		float L_23 = (__this->___minWidth_0);
		float L_24 = (__this->___maxWidth_1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->___maxWidth_1);
		__this->___minWidth_0 = L_25;
	}

IL_00f7:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		GUILayoutOption_t141 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = (L_26->___value_1);
		__this->___minHeight_2 = ((*(float*)((float*)UnBox (L_27, Single_t78_il2cpp_TypeInfo_var))));
		float L_28 = (__this->___maxHeight_3);
		float L_29 = (__this->___minHeight_2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		GUILayoutOption_t141 * L_31 = V_0;
		NullCheck(L_31);
		Object_t * L_32 = (L_31->___value_1);
		__this->___maxHeight_3 = ((*(float*)((float*)UnBox (L_32, Single_t78_il2cpp_TypeInfo_var))));
		float L_33 = (__this->___minHeight_2);
		float L_34 = (__this->___maxHeight_3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->___maxHeight_3);
		__this->___minHeight_2 = L_35;
	}

IL_0164:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		GUILayoutOption_t141 * L_36 = V_0;
		NullCheck(L_36);
		Object_t * L_37 = (L_36->___value_1);
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)UnBox (L_37, Int32_t72_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_0186:
	{
		GUILayoutOption_t141 * L_38 = V_0;
		NullCheck(L_38);
		Object_t * L_39 = (L_38->___value_1);
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)UnBox (L_39, Int32_t72_il2cpp_TypeInfo_var))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		GUILayoutOptionU5BU5D_t348* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->___maxWidth_1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->___maxWidth_1);
		float L_45 = (__this->___minWidth_0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->___maxHeight_3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->___maxHeight_3);
		float L_49 = (__this->___minHeight_2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t136_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral56;
extern Il2CppCodeGenString* _stringLiteral57;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral59;
extern Il2CppCodeGenString* _stringLiteral60;
extern Il2CppCodeGenString* _stringLiteral61;
extern "C" String_t* GUILayoutEntry_ToString_m453 (GUILayoutEntry_t136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUILayoutEntry_t136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral56 = il2cpp_codegen_string_literal_from_index(56);
		_stringLiteral57 = il2cpp_codegen_string_literal_from_index(57);
		_stringLiteral58 = il2cpp_codegen_string_literal_from_index(58);
		_stringLiteral59 = il2cpp_codegen_string_literal_from_index(59);
		_stringLiteral60 = il2cpp_codegen_string_literal_from_index(60);
		_stringLiteral61 = il2cpp_codegen_string_literal_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t270* G_B5_1 = {0};
	ObjectU5BU5D_t270* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t270* G_B5_5 = {0};
	ObjectU5BU5D_t270* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t270* G_B4_1 = {0};
	ObjectU5BU5D_t270* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t270* G_B4_5 = {0};
	ObjectU5BU5D_t270* G_B4_6 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t270* G_B6_2 = {0};
	ObjectU5BU5D_t270* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t270* G_B6_6 = {0};
	ObjectU5BU5D_t270* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t270* G_B8_1 = {0};
	ObjectU5BU5D_t270* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t270* G_B7_1 = {0};
	ObjectU5BU5D_t270* G_B7_2 = {0};
	String_t* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t270* G_B9_2 = {0};
	ObjectU5BU5D_t270* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t270* G_B11_1 = {0};
	ObjectU5BU5D_t270* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t270* G_B10_1 = {0};
	ObjectU5BU5D_t270* G_B10_2 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t270* G_B12_2 = {0};
	ObjectU5BU5D_t270* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m174(NULL /*static, unused*/, L_1, _stringLiteral55, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t136_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t270* L_6 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, ((int32_t)12)));
		String_t* L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_6;
		ObjectU5BU5D_t270* L_9 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 6));
		GUIStyle_t134 * L_10 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = _stringLiteral56;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = _stringLiteral56;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		GUIStyle_t134 * L_11 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GUIStyle_get_name_m572(L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = _stringLiteral57;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)G_B6_0;
		ObjectU5BU5D_t270* L_13 = G_B6_3;
		Type_t * L_14 = Object_GetType_m1473(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_14;
		ObjectU5BU5D_t270* L_15 = L_13;
		Rect_t121 * L_16 = &(__this->___rect_4);
		float L_17 = Rect_get_x_m644(L_16, /*hidden argument*/NULL);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t78_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 2)) = (Object_t *)L_19;
		ObjectU5BU5D_t270* L_20 = L_15;
		Rect_t121 * L_21 = &(__this->___rect_4);
		float L_22 = Rect_get_xMax_m654(L_21, /*hidden argument*/NULL);
		float L_23 = L_22;
		Object_t * L_24 = Box(Single_t78_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t270* L_25 = L_20;
		Rect_t121 * L_26 = &(__this->___rect_4);
		float L_27 = Rect_get_y_m646(L_26, /*hidden argument*/NULL);
		float L_28 = L_27;
		Object_t * L_29 = Box(Single_t78_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)L_29;
		ObjectU5BU5D_t270* L_30 = L_25;
		Rect_t121 * L_31 = &(__this->___rect_4);
		float L_32 = Rect_get_yMax_m655(L_31, /*hidden argument*/NULL);
		float L_33 = L_32;
		Object_t * L_34 = Box(Single_t78_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 5)) = (Object_t *)L_34;
		String_t* L_35 = UnityString_Format_m813(NULL /*static, unused*/, G_B6_4, L_30, /*hidden argument*/NULL);
		NullCheck(G_B6_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_6, G_B6_5);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_6, G_B6_5)) = (Object_t *)L_35;
		ObjectU5BU5D_t270* L_36 = G_B6_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, _stringLiteral58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 2)) = (Object_t *)_stringLiteral58;
		ObjectU5BU5D_t270* L_37 = L_36;
		float L_38 = (__this->___minWidth_0);
		float L_39 = L_38;
		Object_t * L_40 = Box(Single_t78_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 3)) = (Object_t *)L_40;
		ObjectU5BU5D_t270* L_41 = L_37;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 4);
		ArrayElementTypeCheck (L_41, _stringLiteral59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 4)) = (Object_t *)_stringLiteral59;
		ObjectU5BU5D_t270* L_42 = L_41;
		float L_43 = (__this->___maxWidth_1);
		float L_44 = L_43;
		Object_t * L_45 = Box(Single_t78_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 5);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 5)) = (Object_t *)L_45;
		ObjectU5BU5D_t270* L_46 = L_42;
		int32_t L_47 = (__this->___stretchWidth_5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = _stringLiteral60;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		NullCheck(G_B9_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B9_2, G_B9_1);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B9_2, G_B9_1)) = (Object_t *)G_B9_0;
		ObjectU5BU5D_t270* L_49 = G_B9_3;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 7);
		ArrayElementTypeCheck (L_49, _stringLiteral61);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 7)) = (Object_t *)_stringLiteral61;
		ObjectU5BU5D_t270* L_50 = L_49;
		float L_51 = (__this->___minHeight_2);
		float L_52 = L_51;
		Object_t * L_53 = Box(Single_t78_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 8);
		ArrayElementTypeCheck (L_50, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 8)) = (Object_t *)L_53;
		ObjectU5BU5D_t270* L_54 = L_50;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)9));
		ArrayElementTypeCheck (L_54, _stringLiteral59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, ((int32_t)9))) = (Object_t *)_stringLiteral59;
		ObjectU5BU5D_t270* L_55 = L_54;
		float L_56 = (__this->___maxHeight_3);
		float L_57 = L_56;
		Object_t * L_58 = Box(Single_t78_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)10));
		ArrayElementTypeCheck (L_55, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, ((int32_t)10))) = (Object_t *)L_58;
		ObjectU5BU5D_t270* L_59 = L_55;
		int32_t L_60 = (__this->___stretchHeight_6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = _stringLiteral60;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		NullCheck(G_B12_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B12_2, G_B12_1);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B12_2, G_B12_1)) = (Object_t *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = String_Concat_m1474(NULL /*static, unused*/, G_B12_3, /*hidden argument*/NULL);
		return L_62;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"


// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern TypeInfo* List_1_t137_il2cpp_TypeInfo_var;
extern TypeInfo* RectOffset_t138_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t136_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1475_MethodInfo_var;
extern "C" void GUILayoutGroup__ctor_m454 (GUILayoutGroup_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		RectOffset_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		GUILayoutEntry_t136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		List_1__ctor_m1475_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t137 * L_0 = (List_1_t137 *)il2cpp_codegen_object_new (List_1_t137_il2cpp_TypeInfo_var);
		List_1__ctor_m1475(L_0, /*hidden argument*/List_1__ctor_m1475_MethodInfo_var);
		__this->___entries_10 = L_0;
		__this->___isVertical_11 = 1;
		__this->___sameSize_14 = 1;
		__this->___windowID_16 = (-1);
		__this->___stretchableCountX_18 = ((int32_t)100);
		__this->___stretchableCountY_19 = ((int32_t)100);
		__this->___childMinWidth_22 = (100.0f);
		__this->___childMaxWidth_23 = (100.0f);
		__this->___childMinHeight_24 = (100.0f);
		__this->___childMaxHeight_25 = (100.0f);
		RectOffset_t138 * L_1 = (RectOffset_t138 *)il2cpp_codegen_object_new (RectOffset_t138_il2cpp_TypeInfo_var);
		RectOffset__ctor_m550(L_1, /*hidden argument*/NULL);
		__this->___m_Margin_26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_2 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t136_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m442(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t138 * GUILayoutGroup_get_margin_m455 (GUILayoutGroup_t131 * __this, const MethodInfo* method)
{
	{
		RectOffset_t138 * L_0 = (__this->___m_Margin_26);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern TypeInfo* Int32_t72_il2cpp_TypeInfo_var;
extern "C" void GUILayoutGroup_ApplyOptions_m456 (GUILayoutGroup_t131 * __this, GUILayoutOptionU5BU5D_t348* ___options, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	GUILayoutOption_t141 * V_0 = {0};
	GUILayoutOptionU5BU5D_t348* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		GUILayoutOptionU5BU5D_t348* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t348* L_1 = ___options;
		GUILayoutEntry_ApplyOptions_m452(__this, L_1, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t348* L_2 = ___options;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		GUILayoutOptionU5BU5D_t348* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(GUILayoutOption_t141 **)(GUILayoutOption_t141 **)SZArrayLdElema(L_3, L_5));
		GUILayoutOption_t141 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___type_0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->___userSpecifiedHeight_21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->___userSpecifiedWidth_20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		GUILayoutOption_t141 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (L_9->___value_1);
		__this->___spacing_13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, Int32_t72_il2cpp_TypeInfo_var))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		GUILayoutOptionU5BU5D_t348* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m457 (GUILayoutGroup_t131 * __this, GUIStyle_t134 * ___style, const MethodInfo* method)
{
	RectOffset_t138 * V_0 = {0};
	{
		GUIStyle_t134 * L_0 = ___style;
		GUILayoutEntry_ApplyStyleSettings_m451(__this, L_0, /*hidden argument*/NULL);
		GUIStyle_t134 * L_1 = ___style;
		NullCheck(L_1);
		RectOffset_t138 * L_2 = GUIStyle_get_margin_m576(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RectOffset_t138 * L_3 = (__this->___m_Margin_26);
		RectOffset_t138 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_left_m556(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_set_left_m557(L_3, L_5, /*hidden argument*/NULL);
		RectOffset_t138 * L_6 = (__this->___m_Margin_26);
		RectOffset_t138 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_right_m558(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectOffset_set_right_m559(L_6, L_8, /*hidden argument*/NULL);
		RectOffset_t138 * L_9 = (__this->___m_Margin_26);
		RectOffset_t138 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m560(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectOffset_set_top_m561(L_9, L_11, /*hidden argument*/NULL);
		RectOffset_t138 * L_12 = (__this->___m_Margin_26);
		RectOffset_t138 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_bottom_m562(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectOffset_set_bottom_m563(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m458 (GUILayoutGroup_t131 * __this, const MethodInfo* method)
{
	{
		__this->___cursor_17 = 0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t388_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1470_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1471_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1472_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcWidth_m459 (GUILayoutGroup_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Enumerator_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		List_1_GetEnumerator_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m1472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	GUILayoutEntry_t136 * V_3 = {0};
	Enumerator_t388  V_4 = {0};
	RectOffset_t138 * V_5 = {0};
	int32_t V_6 = 0;
	GUILayoutEntry_t136 * V_7 = {0};
	Enumerator_t388  V_8 = {0};
	RectOffset_t138 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_t131 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_t131 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	GUILayoutGroup_t131 * G_B40_3 = {0};
	{
		List_1_t137 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t134 * L_2 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t138 * L_3 = GUIStyle_get_padding_m577(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m564(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = L_5;
		float L_6 = V_13;
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = L_6;
		return;
	}

IL_0033:
	{
		__this->___childMinWidth_22 = (0.0f);
		__this->___childMaxWidth_23 = (0.0f);
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountX_18 = 0;
		V_2 = 1;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		List_1_t137 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t388  L_9 = List_1_GetEnumerator_m1470(L_8, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			GUILayoutEntry_t136 * L_10 = Enumerator_get_Current_m1471((&V_4), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_3 = L_10;
			GUILayoutEntry_t136 * L_11 = V_3;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_11);
			GUILayoutEntry_t136 * L_12 = V_3;
			NullCheck(L_12);
			RectOffset_t138 * L_13 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_12);
			V_5 = L_13;
			GUILayoutEntry_t136 * L_14 = V_3;
			NullCheck(L_14);
			GUIStyle_t134 * L_15 = GUILayoutEntry_get_style_m444(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUIStyle_t134 * L_16 = GUILayoutUtility_get_spaceStyle_m441(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t134 *)L_15) == ((Object_t*)(GUIStyle_t134 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			RectOffset_t138 * L_18 = V_5;
			NullCheck(L_18);
			int32_t L_19 = RectOffset_get_left_m556(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			int32_t L_21 = Mathf_Min_m746(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
			V_0 = L_21;
			RectOffset_t138 * L_22 = V_5;
			NullCheck(L_22);
			int32_t L_23 = RectOffset_get_right_m558(L_22, /*hidden argument*/NULL);
			int32_t L_24 = V_1;
			int32_t L_25 = Mathf_Min_m746(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			RectOffset_t138 * L_26 = V_5;
			NullCheck(L_26);
			int32_t L_27 = RectOffset_get_left_m556(L_26, /*hidden argument*/NULL);
			V_0 = L_27;
			RectOffset_t138 * L_28 = V_5;
			NullCheck(L_28);
			int32_t L_29 = RectOffset_get_right_m558(L_28, /*hidden argument*/NULL);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			GUILayoutEntry_t136 * L_30 = V_3;
			NullCheck(L_30);
			float L_31 = (L_30->___minWidth_0);
			RectOffset_t138 * L_32 = V_5;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_horizontal_m564(L_32, /*hidden argument*/NULL);
			float L_34 = (__this->___childMinWidth_22);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_35 = Mathf_Max_m747(NULL /*static, unused*/, ((float)((float)L_31+(float)(((float)L_33)))), L_34, /*hidden argument*/NULL);
			__this->___childMinWidth_22 = L_35;
			GUILayoutEntry_t136 * L_36 = V_3;
			NullCheck(L_36);
			float L_37 = (L_36->___maxWidth_1);
			RectOffset_t138 * L_38 = V_5;
			NullCheck(L_38);
			int32_t L_39 = RectOffset_get_horizontal_m564(L_38, /*hidden argument*/NULL);
			float L_40 = (__this->___childMaxWidth_23);
			float L_41 = Mathf_Max_m747(NULL /*static, unused*/, ((float)((float)L_37+(float)(((float)L_39)))), L_40, /*hidden argument*/NULL);
			__this->___childMaxWidth_23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t136 * L_43 = V_3;
			NullCheck(L_43);
			int32_t L_44 = (L_43->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = Enumerator_MoveNext_m1472((&V_4), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_46 = V_4;
		Enumerator_t388  L_47 = L_46;
		Object_t * L_48 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_48);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0143:
	{
		float L_49 = (__this->___childMinWidth_22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->___childMinWidth_22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->___childMaxWidth_23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->___childMaxWidth_23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		List_1_t137 * L_55 = (__this->___entries_10);
		NullCheck(L_55);
		Enumerator_t388  L_56 = List_1_GetEnumerator_m1470(L_55, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			GUILayoutEntry_t136 * L_57 = Enumerator_get_Current_m1471((&V_8), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_7 = L_57;
			GUILayoutEntry_t136 * L_58 = V_7;
			NullCheck(L_58);
			VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.GUILayoutEntry::CalcWidth() */, L_58);
			GUILayoutEntry_t136 * L_59 = V_7;
			NullCheck(L_59);
			RectOffset_t138 * L_60 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
			V_9 = L_60;
			GUILayoutEntry_t136 * L_61 = V_7;
			NullCheck(L_61);
			GUIStyle_t134 * L_62 = GUILayoutEntry_get_style_m444(L_61, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUIStyle_t134 * L_63 = GUILayoutUtility_get_spaceStyle_m441(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t134 *)L_62) == ((Object_t*)(GUIStyle_t134 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			RectOffset_t138 * L_66 = V_9;
			NullCheck(L_66);
			int32_t L_67 = RectOffset_get_left_m556(L_66, /*hidden argument*/NULL);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			RectOffset_t138 * L_69 = V_9;
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_left_m556(L_69, /*hidden argument*/NULL);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->___childMinWidth_22);
			GUILayoutEntry_t136 * L_72 = V_7;
			NullCheck(L_72);
			float L_73 = (L_72->___minWidth_0);
			float L_74 = (__this->___spacing_13);
			int32_t L_75 = V_10;
			__this->___childMinWidth_22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t136 * L_77 = V_7;
			NullCheck(L_77);
			float L_78 = (L_77->___maxWidth_1);
			float L_79 = (__this->___spacing_13);
			int32_t L_80 = V_10;
			__this->___childMaxWidth_23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			RectOffset_t138 * L_81 = V_9;
			NullCheck(L_81);
			int32_t L_82 = RectOffset_get_right_m558(L_81, /*hidden argument*/NULL);
			V_6 = L_82;
			int32_t L_83 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t136 * L_84 = V_7;
			NullCheck(L_84);
			int32_t L_85 = (L_84->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->___childMinWidth_22);
			GUILayoutEntry_t136 * L_87 = V_7;
			NullCheck(L_87);
			float L_88 = (L_87->___minWidth_0);
			__this->___childMinWidth_22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t136 * L_90 = V_7;
			NullCheck(L_90);
			float L_91 = (L_90->___maxWidth_1);
			__this->___childMaxWidth_23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t136 * L_93 = V_7;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = Enumerator_MoveNext_m1472((&V_8), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_96 = V_8;
		Enumerator_t388  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0291:
	{
		float L_99 = (__this->___childMinWidth_22);
		float L_100 = (__this->___spacing_13);
		__this->___childMinWidth_22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->___childMaxWidth_23);
		float L_102 = (__this->___spacing_13);
		__this->___childMaxWidth_23 = ((float)((float)L_101-(float)L_102));
		List_1_t137 * L_103 = (__this->___entries_10);
		NullCheck(L_103);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		List_1_t137 * L_105 = (__this->___entries_10);
		NullCheck(L_105);
		GUILayoutEntry_t136 * L_106 = (GUILayoutEntry_t136 *)VirtFuncInvoker1< GUILayoutEntry_t136 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_105, 0);
		NullCheck(L_106);
		RectOffset_t138 * L_107 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_106);
		NullCheck(L_107);
		int32_t L_108 = RectOffset_get_left_m556(L_107, /*hidden argument*/NULL);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		GUIStyle_t134 * L_111 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_112 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t134 *)L_111) == ((Object_t*)(GUIStyle_t134 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->___userSpecifiedWidth_20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		GUIStyle_t134 * L_114 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		RectOffset_t138 * L_115 = GUIStyle_get_padding_m577(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		int32_t L_116 = RectOffset_get_left_m556(L_115, /*hidden argument*/NULL);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		int32_t L_118 = Mathf_Max_m748(NULL /*static, unused*/, L_116, L_117, /*hidden argument*/NULL);
		V_11 = (((float)L_118));
		GUIStyle_t134 * L_119 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_119);
		RectOffset_t138 * L_120 = GUIStyle_get_padding_m577(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		int32_t L_121 = RectOffset_get_right_m558(L_120, /*hidden argument*/NULL);
		int32_t L_122 = V_1;
		int32_t L_123 = Mathf_Max_m748(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/NULL);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		RectOffset_t138 * L_124 = (__this->___m_Margin_26);
		int32_t L_125 = V_0;
		NullCheck(L_124);
		RectOffset_set_left_m557(L_124, L_125, /*hidden argument*/NULL);
		RectOffset_t138 * L_126 = (__this->___m_Margin_26);
		int32_t L_127 = V_1;
		NullCheck(L_126);
		RectOffset_set_right_m559(L_126, L_127, /*hidden argument*/NULL);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (((GUILayoutEntry_t136 *)__this)->___minWidth_0);
		float L_130 = (__this->___childMinWidth_22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_133 = Mathf_Max_m747(NULL /*static, unused*/, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), /*hidden argument*/NULL);
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = L_133;
		float L_134 = (((GUILayoutEntry_t136 *)__this)->___maxWidth_1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (((GUILayoutEntry_t136 *)__this)->___stretchWidth_5);
		int32_t L_136 = (__this->___stretchableCountX_18);
		GUIStyle_t134 * L_137 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		bool L_138 = GUIStyle_get_stretchWidth_m581(L_137, /*hidden argument*/NULL);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		NullCheck(G_B40_3);
		((GUILayoutEntry_t136 *)G_B40_3)->___stretchWidth_5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->___childMaxWidth_23);
		float L_140 = V_11;
		float L_141 = V_12;
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		((GUILayoutEntry_t136 *)__this)->___stretchWidth_5 = 0;
	}

IL_03e2:
	{
		float L_142 = (((GUILayoutEntry_t136 *)__this)->___maxWidth_1);
		float L_143 = (((GUILayoutEntry_t136 *)__this)->___minWidth_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_144 = Mathf_Max_m747(NULL /*static, unused*/, L_142, L_143, /*hidden argument*/NULL);
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = L_144;
		GUIStyle_t134 * L_145 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_145);
		float L_146 = GUIStyle_get_fixedWidth_m579(L_145, /*hidden argument*/NULL);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		GUIStyle_t134 * L_147 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_147);
		float L_148 = GUIStyle_get_fixedWidth_m579(L_147, /*hidden argument*/NULL);
		float L_149 = L_148;
		V_13 = L_149;
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = L_149;
		float L_150 = V_13;
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = L_150;
		((GUILayoutEntry_t136 *)__this)->___stretchWidth_5 = 0;
	}

IL_0431:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t388_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1470_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1471_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1472_MethodInfo_var;
extern "C" void GUILayoutGroup_SetHorizontal_m460 (GUILayoutGroup_t131 * __this, float ___x, float ___width, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Enumerator_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		List_1_GetEnumerator_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m1472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t138 * V_0 = {0};
	GUILayoutEntry_t136 * V_1 = {0};
	Enumerator_t388  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t136 * V_8 = {0};
	Enumerator_t388  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t136 * V_17 = {0};
	Enumerator_t388  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = ___width;
		GUILayoutEntry_SetHorizontal_m449(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___resetCoords_12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		___x = (0.0f);
	}

IL_001a:
	{
		GUIStyle_t134 * L_3 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectOffset_t138 * L_4 = GUIStyle_get_padding_m577(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = (__this->___isVertical_11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		GUIStyle_t134 * L_6 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_7 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t134 *)L_6) == ((Object_t*)(GUIStyle_t134 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		List_1_t137 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t388  L_9 = List_1_GetEnumerator_m1470(L_8, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			GUILayoutEntry_t136 * L_10 = Enumerator_get_Current_m1471((&V_2), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_1 = L_10;
			GUILayoutEntry_t136 * L_11 = V_1;
			NullCheck(L_11);
			RectOffset_t138 * L_12 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_11);
			NullCheck(L_12);
			int32_t L_13 = RectOffset_get_left_m556(L_12, /*hidden argument*/NULL);
			RectOffset_t138 * L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = RectOffset_get_left_m556(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			int32_t L_16 = Mathf_Max_m748(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
			V_3 = (((float)L_16));
			float L_17 = ___x;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = ___width;
			GUILayoutEntry_t136 * L_20 = V_1;
			NullCheck(L_20);
			RectOffset_t138 * L_21 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_20);
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m558(L_21, /*hidden argument*/NULL);
			RectOffset_t138 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = RectOffset_get_right_m558(L_23, /*hidden argument*/NULL);
			int32_t L_25 = Mathf_Max_m748(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			GUILayoutEntry_t136 * L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = (L_27->___stretchWidth_5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			GUILayoutEntry_t136 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			NullCheck(L_29);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			GUILayoutEntry_t136 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			GUILayoutEntry_t136 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = (L_35->___minWidth_0);
			GUILayoutEntry_t136 * L_37 = V_1;
			NullCheck(L_37);
			float L_38 = (L_37->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_39 = Mathf_Clamp_m750(NULL /*static, unused*/, L_34, L_36, L_38, /*hidden argument*/NULL);
			NullCheck(L_32);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = Enumerator_MoveNext_m1472((&V_2), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_41 = V_2;
		Enumerator_t388  L_42 = L_41;
		Object_t * L_43 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_43);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = ___x;
		RectOffset_t138 * L_45 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_45);
		int32_t L_46 = RectOffset_get_left_m556(L_45, /*hidden argument*/NULL);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = ___width;
		RectOffset_t138 * L_48 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_48);
		int32_t L_49 = RectOffset_get_horizontal_m564(L_48, /*hidden argument*/NULL);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		List_1_t137 * L_50 = (__this->___entries_10);
		NullCheck(L_50);
		Enumerator_t388  L_51 = List_1_GetEnumerator_m1470(L_50, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			GUILayoutEntry_t136 * L_52 = Enumerator_get_Current_m1471((&V_9), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_8 = L_52;
			GUILayoutEntry_t136 * L_53 = V_8;
			NullCheck(L_53);
			int32_t L_54 = (L_53->___stretchWidth_5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			GUILayoutEntry_t136 * L_55 = V_8;
			float L_56 = V_6;
			GUILayoutEntry_t136 * L_57 = V_8;
			NullCheck(L_57);
			RectOffset_t138 * L_58 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_57);
			NullCheck(L_58);
			int32_t L_59 = RectOffset_get_left_m556(L_58, /*hidden argument*/NULL);
			float L_60 = V_7;
			GUILayoutEntry_t136 * L_61 = V_8;
			NullCheck(L_61);
			RectOffset_t138 * L_62 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_61);
			NullCheck(L_62);
			int32_t L_63 = RectOffset_get_horizontal_m564(L_62, /*hidden argument*/NULL);
			NullCheck(L_55);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			GUILayoutEntry_t136 * L_64 = V_8;
			float L_65 = V_6;
			GUILayoutEntry_t136 * L_66 = V_8;
			NullCheck(L_66);
			RectOffset_t138 * L_67 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_66);
			NullCheck(L_67);
			int32_t L_68 = RectOffset_get_left_m556(L_67, /*hidden argument*/NULL);
			float L_69 = V_7;
			GUILayoutEntry_t136 * L_70 = V_8;
			NullCheck(L_70);
			RectOffset_t138 * L_71 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_70);
			NullCheck(L_71);
			int32_t L_72 = RectOffset_get_horizontal_m564(L_71, /*hidden argument*/NULL);
			GUILayoutEntry_t136 * L_73 = V_8;
			NullCheck(L_73);
			float L_74 = (L_73->___minWidth_0);
			GUILayoutEntry_t136 * L_75 = V_8;
			NullCheck(L_75);
			float L_76 = (L_75->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_77 = Mathf_Clamp_m750(NULL /*static, unused*/, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, /*hidden argument*/NULL);
			NullCheck(L_64);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = Enumerator_MoveNext_m1472((&V_9), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_79 = V_9;
		Enumerator_t388  L_80 = L_79;
		Object_t * L_81 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_81);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		GUIStyle_t134 * L_82 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_83 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t134 *)L_82) == ((Object_t*)(GUIStyle_t134 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		RectOffset_t138 * L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = RectOffset_get_left_m556(L_84, /*hidden argument*/NULL);
		V_10 = (((float)L_85));
		RectOffset_t138 * L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = RectOffset_get_right_m558(L_86, /*hidden argument*/NULL);
		V_11 = (((float)L_87));
		List_1_t137 * L_88 = (__this->___entries_10);
		NullCheck(L_88);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		List_1_t137 * L_91 = (__this->___entries_10);
		NullCheck(L_91);
		GUILayoutEntry_t136 * L_92 = (GUILayoutEntry_t136 *)VirtFuncInvoker1< GUILayoutEntry_t136 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_91, 0);
		NullCheck(L_92);
		RectOffset_t138 * L_93 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_92);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_left_m556(L_93, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_95 = Mathf_Max_m747(NULL /*static, unused*/, L_90, (((float)L_94)), /*hidden argument*/NULL);
		V_10 = L_95;
		float L_96 = V_11;
		List_1_t137 * L_97 = (__this->___entries_10);
		List_1_t137 * L_98 = (__this->___entries_10);
		NullCheck(L_98);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_98);
		NullCheck(L_97);
		GUILayoutEntry_t136 * L_100 = (GUILayoutEntry_t136 *)VirtFuncInvoker1< GUILayoutEntry_t136 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		NullCheck(L_100);
		RectOffset_t138 * L_101 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_100);
		NullCheck(L_101);
		int32_t L_102 = RectOffset_get_right_m558(L_101, /*hidden argument*/NULL);
		float L_103 = Mathf_Max_m747(NULL /*static, unused*/, L_96, (((float)L_102)), /*hidden argument*/NULL);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = ___x;
		float L_105 = V_10;
		___x = ((float)((float)L_104+(float)L_105));
		float L_106 = ___width;
		float L_107 = V_11;
		float L_108 = V_10;
		___width = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = ___width;
		float L_110 = (__this->___spacing_13);
		List_1_t137 * L_111 = (__this->___entries_10);
		NullCheck(L_111);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->___childMinWidth_22);
		float L_114 = (__this->___childMaxWidth_23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->___childMinWidth_22);
		float L_117 = (__this->___childMaxWidth_23);
		float L_118 = (__this->___childMinWidth_22);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_119 = Mathf_Clamp_m750(NULL /*static, unused*/, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->___childMaxWidth_23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->___stretchableCountX_18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->___childMaxWidth_23);
		int32_t L_125 = (__this->___stretchableCountX_18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		List_1_t137 * L_126 = (__this->___entries_10);
		NullCheck(L_126);
		Enumerator_t388  L_127 = List_1_GetEnumerator_m1470(L_126, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			GUILayoutEntry_t136 * L_128 = Enumerator_get_Current_m1471((&V_18), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_17 = L_128;
			GUILayoutEntry_t136 * L_129 = V_17;
			NullCheck(L_129);
			float L_130 = (L_129->___minWidth_0);
			GUILayoutEntry_t136 * L_131 = V_17;
			NullCheck(L_131);
			float L_132 = (L_131->___maxWidth_1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_134 = Mathf_Lerp_m283(NULL /*static, unused*/, L_130, L_132, L_133, /*hidden argument*/NULL);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			GUILayoutEntry_t136 * L_137 = V_17;
			NullCheck(L_137);
			int32_t L_138 = (L_137->___stretchWidth_5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			GUILayoutEntry_t136 * L_139 = V_17;
			NullCheck(L_139);
			GUIStyle_t134 * L_140 = GUILayoutEntry_get_style_m444(L_139, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUIStyle_t134 * L_141 = GUILayoutUtility_get_spaceStyle_m441(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t134 *)L_140) == ((Object_t*)(GUIStyle_t134 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			GUILayoutEntry_t136 * L_142 = V_17;
			NullCheck(L_142);
			RectOffset_t138 * L_143 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_142);
			NullCheck(L_143);
			int32_t L_144 = RectOffset_get_left_m556(L_143, /*hidden argument*/NULL);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = ___x;
			int32_t L_151 = V_21;
			___x = ((float)((float)L_150+(float)(((float)L_151))));
			GUILayoutEntry_t136 * L_152 = V_17;
			NullCheck(L_152);
			RectOffset_t138 * L_153 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_152);
			NullCheck(L_153);
			int32_t L_154 = RectOffset_get_right_m558(L_153, /*hidden argument*/NULL);
			V_15 = L_154;
		}

IL_0371:
		{
			GUILayoutEntry_t136 * L_155 = V_17;
			float L_156 = ___x;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			NullCheck(L_155);
			VirtActionInvoker2< float, float >::Invoke(7 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, L_155, L_157, L_159);
			float L_160 = ___x;
			float L_161 = V_19;
			float L_162 = (__this->___spacing_13);
			___x = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = Enumerator_MoveNext_m1472((&V_18), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_164 = V_18;
		Enumerator_t388  L_165 = L_164;
		Object_t * L_166 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_165);
		NullCheck(L_166);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_03b0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t388_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1470_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1471_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1472_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcHeight_m461 (GUILayoutGroup_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		Enumerator_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		List_1_GetEnumerator_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m1472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t136 * V_4 = {0};
	Enumerator_t388  V_5 = {0};
	RectOffset_t138 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	GUILayoutEntry_t136 * V_9 = {0};
	Enumerator_t388  V_10 = {0};
	RectOffset_t138 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	GUILayoutGroup_t131 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	GUILayoutGroup_t131 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	GUILayoutGroup_t131 * G_B37_3 = {0};
	{
		List_1_t137 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t134 * L_2 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectOffset_t138 * L_3 = GUIStyle_get_padding_m577(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m565(L_3, /*hidden argument*/NULL);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = L_5;
		float L_6 = V_14;
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = L_6;
		return;
	}

IL_0033:
	{
		float L_7 = (0.0f);
		V_14 = L_7;
		__this->___childMaxHeight_25 = L_7;
		float L_8 = V_14;
		__this->___childMinHeight_24 = L_8;
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountY_19 = 0;
		bool L_9 = (__this->___isVertical_11);
		if (!L_9)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		List_1_t137 * L_10 = (__this->___entries_10);
		NullCheck(L_10);
		Enumerator_t388  L_11 = List_1_GetEnumerator_m1470(L_10, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_5 = L_11;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			GUILayoutEntry_t136 * L_12 = Enumerator_get_Current_m1471((&V_5), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_4 = L_12;
			GUILayoutEntry_t136 * L_13 = V_4;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_13);
			GUILayoutEntry_t136 * L_14 = V_4;
			NullCheck(L_14);
			RectOffset_t138 * L_15 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_14);
			V_6 = L_15;
			GUILayoutEntry_t136 * L_16 = V_4;
			NullCheck(L_16);
			GUIStyle_t134 * L_17 = GUILayoutEntry_get_style_m444(L_16, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUIStyle_t134 * L_18 = GUILayoutUtility_get_spaceStyle_m441(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t134 *)L_17) == ((Object_t*)(GUIStyle_t134 *)L_18)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_19 = V_3;
			if (L_19)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_20 = V_2;
			RectOffset_t138 * L_21 = V_6;
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_top_m560(L_21, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			int32_t L_23 = Mathf_Max_m748(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
			V_7 = L_23;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_24 = (__this->___childMinHeight_24);
			GUILayoutEntry_t136 * L_25 = V_4;
			NullCheck(L_25);
			float L_26 = (L_25->___minHeight_2);
			float L_27 = (__this->___spacing_13);
			int32_t L_28 = V_7;
			__this->___childMinHeight_24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t136 * L_30 = V_4;
			NullCheck(L_30);
			float L_31 = (L_30->___maxHeight_3);
			float L_32 = (__this->___spacing_13);
			int32_t L_33 = V_7;
			__this->___childMaxHeight_25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			RectOffset_t138 * L_34 = V_6;
			NullCheck(L_34);
			int32_t L_35 = RectOffset_get_bottom_m562(L_34, /*hidden argument*/NULL);
			V_2 = L_35;
			int32_t L_36 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t136 * L_37 = V_4;
			NullCheck(L_37);
			int32_t L_38 = (L_37->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->___childMinHeight_24);
			GUILayoutEntry_t136 * L_40 = V_4;
			NullCheck(L_40);
			float L_41 = (L_40->___minHeight_2);
			__this->___childMinHeight_24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t136 * L_43 = V_4;
			NullCheck(L_43);
			float L_44 = (L_43->___maxHeight_3);
			__this->___childMaxHeight_25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t136 * L_46 = V_4;
			NullCheck(L_46);
			int32_t L_47 = (L_46->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = Enumerator_MoveNext_m1472((&V_5), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_48)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_49 = V_5;
		Enumerator_t388  L_50 = L_49;
		Object_t * L_51 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_51);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_51);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0177:
	{
		float L_52 = (__this->___childMinHeight_24);
		float L_53 = (__this->___spacing_13);
		__this->___childMinHeight_24 = ((float)((float)L_52-(float)L_53));
		float L_54 = (__this->___childMaxHeight_25);
		float L_55 = (__this->___spacing_13);
		__this->___childMaxHeight_25 = ((float)((float)L_54-(float)L_55));
		List_1_t137 * L_56 = (__this->___entries_10);
		NullCheck(L_56);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		List_1_t137 * L_58 = (__this->___entries_10);
		NullCheck(L_58);
		GUILayoutEntry_t136 * L_59 = (GUILayoutEntry_t136 *)VirtFuncInvoker1< GUILayoutEntry_t136 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_58, 0);
		NullCheck(L_59);
		RectOffset_t138 * L_60 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_59);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m560(L_60, /*hidden argument*/NULL);
		V_0 = L_61;
		int32_t L_62 = V_2;
		V_1 = L_62;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_63 = 0;
		V_0 = L_63;
		V_1 = L_63;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		List_1_t137 * L_64 = (__this->___entries_10);
		NullCheck(L_64);
		Enumerator_t388  L_65 = List_1_GetEnumerator_m1470(L_64, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_10 = L_65;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			GUILayoutEntry_t136 * L_66 = Enumerator_get_Current_m1471((&V_10), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_9 = L_66;
			GUILayoutEntry_t136 * L_67 = V_9;
			NullCheck(L_67);
			VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, L_67);
			GUILayoutEntry_t136 * L_68 = V_9;
			NullCheck(L_68);
			RectOffset_t138 * L_69 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			V_11 = L_69;
			GUILayoutEntry_t136 * L_70 = V_9;
			NullCheck(L_70);
			GUIStyle_t134 * L_71 = GUILayoutEntry_get_style_m444(L_70, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUIStyle_t134 * L_72 = GUILayoutUtility_get_spaceStyle_m441(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t134 *)L_71) == ((Object_t*)(GUIStyle_t134 *)L_72)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_73 = V_8;
			if (L_73)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			RectOffset_t138 * L_74 = V_11;
			NullCheck(L_74);
			int32_t L_75 = RectOffset_get_top_m560(L_74, /*hidden argument*/NULL);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			int32_t L_77 = Mathf_Min_m746(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
			V_0 = L_77;
			RectOffset_t138 * L_78 = V_11;
			NullCheck(L_78);
			int32_t L_79 = RectOffset_get_bottom_m562(L_78, /*hidden argument*/NULL);
			int32_t L_80 = V_1;
			int32_t L_81 = Mathf_Min_m746(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/NULL);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			RectOffset_t138 * L_82 = V_11;
			NullCheck(L_82);
			int32_t L_83 = RectOffset_get_top_m560(L_82, /*hidden argument*/NULL);
			V_0 = L_83;
			RectOffset_t138 * L_84 = V_11;
			NullCheck(L_84);
			int32_t L_85 = RectOffset_get_bottom_m562(L_84, /*hidden argument*/NULL);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			GUILayoutEntry_t136 * L_86 = V_9;
			NullCheck(L_86);
			float L_87 = (L_86->___minHeight_2);
			float L_88 = (__this->___childMinHeight_24);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_89 = Mathf_Max_m747(NULL /*static, unused*/, L_87, L_88, /*hidden argument*/NULL);
			__this->___childMinHeight_24 = L_89;
			GUILayoutEntry_t136 * L_90 = V_9;
			NullCheck(L_90);
			float L_91 = (L_90->___maxHeight_3);
			float L_92 = (__this->___childMaxHeight_25);
			float L_93 = Mathf_Max_m747(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/NULL);
			__this->___childMaxHeight_25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t136 * L_95 = V_9;
			NullCheck(L_95);
			int32_t L_96 = (L_95->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = Enumerator_MoveNext_m1472((&V_10), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_97)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_98 = V_10;
		Enumerator_t388  L_99 = L_98;
		Object_t * L_100 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_99);
		NullCheck(L_100);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_100);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		GUIStyle_t134 * L_101 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_102 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(GUIStyle_t134 *)L_101) == ((Object_t*)(GUIStyle_t134 *)L_102))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_103 = (__this->___userSpecifiedHeight_21);
		if (!L_103)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		GUIStyle_t134 * L_104 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_104);
		RectOffset_t138 * L_105 = GUIStyle_get_padding_m577(L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		int32_t L_106 = RectOffset_get_top_m560(L_105, /*hidden argument*/NULL);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		int32_t L_108 = Mathf_Max_m748(NULL /*static, unused*/, L_106, L_107, /*hidden argument*/NULL);
		V_12 = (((float)L_108));
		GUIStyle_t134 * L_109 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_109);
		RectOffset_t138 * L_110 = GUIStyle_get_padding_m577(L_109, /*hidden argument*/NULL);
		NullCheck(L_110);
		int32_t L_111 = RectOffset_get_bottom_m562(L_110, /*hidden argument*/NULL);
		int32_t L_112 = V_1;
		int32_t L_113 = Mathf_Max_m748(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/NULL);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		RectOffset_t138 * L_114 = (__this->___m_Margin_26);
		int32_t L_115 = V_0;
		NullCheck(L_114);
		RectOffset_set_top_m561(L_114, L_115, /*hidden argument*/NULL);
		RectOffset_t138 * L_116 = (__this->___m_Margin_26);
		int32_t L_117 = V_1;
		NullCheck(L_116);
		RectOffset_set_bottom_m563(L_116, L_117, /*hidden argument*/NULL);
		float L_118 = (0.0f);
		V_13 = L_118;
		V_12 = L_118;
	}

IL_0332:
	{
		float L_119 = (((GUILayoutEntry_t136 *)__this)->___minHeight_2);
		float L_120 = (__this->___childMinHeight_24);
		float L_121 = V_12;
		float L_122 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_123 = Mathf_Max_m747(NULL /*static, unused*/, L_119, ((float)((float)((float)((float)L_120+(float)L_121))+(float)L_122)), /*hidden argument*/NULL);
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = L_123;
		float L_124 = (((GUILayoutEntry_t136 *)__this)->___maxHeight_3);
		if ((!(((float)L_124) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_125 = (((GUILayoutEntry_t136 *)__this)->___stretchHeight_6);
		int32_t L_126 = (__this->___stretchableCountY_19);
		GUIStyle_t134 * L_127 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_127);
		bool L_128 = GUIStyle_get_stretchHeight_m583(L_127, /*hidden argument*/NULL);
		G_B35_0 = L_126;
		G_B35_1 = L_125;
		G_B35_2 = __this;
		if (!L_128)
		{
			G_B36_0 = L_126;
			G_B36_1 = L_125;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		NullCheck(G_B37_3);
		((GUILayoutEntry_t136 *)G_B37_3)->___stretchHeight_6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_129 = (__this->___childMaxHeight_25);
		float L_130 = V_12;
		float L_131 = V_13;
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = ((float)((float)((float)((float)L_129+(float)L_130))+(float)L_131));
		goto IL_03a8;
	}

IL_03a1:
	{
		((GUILayoutEntry_t136 *)__this)->___stretchHeight_6 = 0;
	}

IL_03a8:
	{
		float L_132 = (((GUILayoutEntry_t136 *)__this)->___maxHeight_3);
		float L_133 = (((GUILayoutEntry_t136 *)__this)->___minHeight_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_134 = Mathf_Max_m747(NULL /*static, unused*/, L_132, L_133, /*hidden argument*/NULL);
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = L_134;
		GUIStyle_t134 * L_135 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_135);
		float L_136 = GUIStyle_get_fixedHeight_m580(L_135, /*hidden argument*/NULL);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		GUIStyle_t134 * L_137 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		float L_138 = GUIStyle_get_fixedHeight_m580(L_137, /*hidden argument*/NULL);
		float L_139 = L_138;
		V_14 = L_139;
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = L_139;
		float L_140 = V_14;
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = L_140;
		((GUILayoutEntry_t136 *)__this)->___stretchHeight_6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t388_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1470_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1471_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1472_MethodInfo_var;
extern "C" void GUILayoutGroup_SetVertical_m462 (GUILayoutGroup_t131 * __this, float ___y, float ___height, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		Enumerator_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m1472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	RectOffset_t138 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t136 * V_8 = {0};
	Enumerator_t388  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t136 * V_13 = {0};
	Enumerator_t388  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t136 * V_20 = {0};
	Enumerator_t388  V_21 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___y;
		float L_1 = ___height;
		GUILayoutEntry_SetVertical_m450(__this, L_0, L_1, /*hidden argument*/NULL);
		List_1_t137 * L_2 = (__this->___entries_10);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GUIStyle_t134 * L_4 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectOffset_t138 * L_5 = GUIStyle_get_padding_m577(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = (__this->___resetCoords_12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		___y = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		GUIStyle_t134 * L_8 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_9 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t134 *)L_8) == ((Object_t*)(GUIStyle_t134 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		RectOffset_t138 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m560(L_10, /*hidden argument*/NULL);
		V_1 = (((float)L_11));
		RectOffset_t138 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_m562(L_12, /*hidden argument*/NULL);
		V_2 = (((float)L_13));
		List_1_t137 * L_14 = (__this->___entries_10);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		List_1_t137 * L_17 = (__this->___entries_10);
		NullCheck(L_17);
		GUILayoutEntry_t136 * L_18 = (GUILayoutEntry_t136 *)VirtFuncInvoker1< GUILayoutEntry_t136 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_17, 0);
		NullCheck(L_18);
		RectOffset_t138 * L_19 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_18);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m560(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Max_m747(NULL /*static, unused*/, L_16, (((float)L_20)), /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = V_2;
		List_1_t137 * L_23 = (__this->___entries_10);
		List_1_t137 * L_24 = (__this->___entries_10);
		NullCheck(L_24);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_24);
		NullCheck(L_23);
		GUILayoutEntry_t136 * L_26 = (GUILayoutEntry_t136 *)VirtFuncInvoker1< GUILayoutEntry_t136 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32) */, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		NullCheck(L_26);
		RectOffset_t138 * L_27 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_26);
		NullCheck(L_27);
		int32_t L_28 = RectOffset_get_bottom_m562(L_27, /*hidden argument*/NULL);
		float L_29 = Mathf_Max_m747(NULL /*static, unused*/, L_22, (((float)L_28)), /*hidden argument*/NULL);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = ___y;
		float L_31 = V_1;
		___y = ((float)((float)L_30+(float)L_31));
		float L_32 = ___height;
		float L_33 = V_2;
		float L_34 = V_1;
		___height = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = ___height;
		float L_36 = (__this->___spacing_13);
		List_1_t137 * L_37 = (__this->___entries_10);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count() */, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->___childMinHeight_24);
		float L_40 = (__this->___childMaxHeight_25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->___childMinHeight_24);
		float L_43 = (__this->___childMaxHeight_25);
		float L_44 = (__this->___childMinHeight_24);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m750(NULL /*static, unused*/, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->___childMaxHeight_25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->___stretchableCountY_19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->___childMaxHeight_25);
		int32_t L_51 = (__this->___stretchableCountY_19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		List_1_t137 * L_52 = (__this->___entries_10);
		NullCheck(L_52);
		Enumerator_t388  L_53 = List_1_GetEnumerator_m1470(L_52, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			GUILayoutEntry_t136 * L_54 = Enumerator_get_Current_m1471((&V_9), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_8 = L_54;
			GUILayoutEntry_t136 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = (L_55->___minHeight_2);
			GUILayoutEntry_t136 * L_57 = V_8;
			NullCheck(L_57);
			float L_58 = (L_57->___maxHeight_3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_60 = Mathf_Lerp_m283(NULL /*static, unused*/, L_56, L_58, L_59, /*hidden argument*/NULL);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			GUILayoutEntry_t136 * L_63 = V_8;
			NullCheck(L_63);
			int32_t L_64 = (L_63->___stretchHeight_6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			GUILayoutEntry_t136 * L_65 = V_8;
			NullCheck(L_65);
			GUIStyle_t134 * L_66 = GUILayoutEntry_get_style_m444(L_65, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUIStyle_t134 * L_67 = GUILayoutUtility_get_spaceStyle_m441(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(GUIStyle_t134 *)L_66) == ((Object_t*)(GUIStyle_t134 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			GUILayoutEntry_t136 * L_68 = V_8;
			NullCheck(L_68);
			RectOffset_t138 * L_69 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_68);
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m560(L_69, /*hidden argument*/NULL);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = ___y;
			int32_t L_77 = V_12;
			___y = ((float)((float)L_76+(float)(((float)L_77))));
			GUILayoutEntry_t136 * L_78 = V_8;
			NullCheck(L_78);
			RectOffset_t138 * L_79 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_78);
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m562(L_79, /*hidden argument*/NULL);
			V_6 = L_80;
		}

IL_01eb:
		{
			GUILayoutEntry_t136 * L_81 = V_8;
			float L_82 = ___y;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			NullCheck(L_81);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_81, L_83, L_85);
			float L_86 = ___y;
			float L_87 = V_10;
			float L_88 = (__this->___spacing_13);
			___y = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = Enumerator_MoveNext_m1472((&V_9), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_90 = V_9;
		Enumerator_t388  L_91 = L_90;
		Object_t * L_92 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_92);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		GUIStyle_t134 * L_93 = GUILayoutEntry_get_style_m444(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_94 = GUIStyle_get_none_m586(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((Object_t*)(GUIStyle_t134 *)L_93) == ((Object_t*)(GUIStyle_t134 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		List_1_t137 * L_95 = (__this->___entries_10);
		NullCheck(L_95);
		Enumerator_t388  L_96 = List_1_GetEnumerator_m1470(L_95, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			GUILayoutEntry_t136 * L_97 = Enumerator_get_Current_m1471((&V_14), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_13 = L_97;
			GUILayoutEntry_t136 * L_98 = V_13;
			NullCheck(L_98);
			RectOffset_t138 * L_99 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_98);
			NullCheck(L_99);
			int32_t L_100 = RectOffset_get_top_m560(L_99, /*hidden argument*/NULL);
			RectOffset_t138 * L_101 = V_0;
			NullCheck(L_101);
			int32_t L_102 = RectOffset_get_top_m560(L_101, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			int32_t L_103 = Mathf_Max_m748(NULL /*static, unused*/, L_100, L_102, /*hidden argument*/NULL);
			V_15 = (((float)L_103));
			float L_104 = ___y;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = ___height;
			GUILayoutEntry_t136 * L_107 = V_13;
			NullCheck(L_107);
			RectOffset_t138 * L_108 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_107);
			NullCheck(L_108);
			int32_t L_109 = RectOffset_get_bottom_m562(L_108, /*hidden argument*/NULL);
			RectOffset_t138 * L_110 = V_0;
			NullCheck(L_110);
			int32_t L_111 = RectOffset_get_bottom_m562(L_110, /*hidden argument*/NULL);
			int32_t L_112 = Mathf_Max_m748(NULL /*static, unused*/, L_109, L_111, /*hidden argument*/NULL);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			GUILayoutEntry_t136 * L_114 = V_13;
			NullCheck(L_114);
			int32_t L_115 = (L_114->___stretchHeight_6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			GUILayoutEntry_t136 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			NullCheck(L_116);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			GUILayoutEntry_t136 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			GUILayoutEntry_t136 * L_122 = V_13;
			NullCheck(L_122);
			float L_123 = (L_122->___minHeight_2);
			GUILayoutEntry_t136 * L_124 = V_13;
			NullCheck(L_124);
			float L_125 = (L_124->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_126 = Mathf_Clamp_m750(NULL /*static, unused*/, L_121, L_123, L_125, /*hidden argument*/NULL);
			NullCheck(L_119);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = Enumerator_MoveNext_m1472((&V_14), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_128 = V_14;
		Enumerator_t388  L_129 = L_128;
		Object_t * L_130 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_130);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = ___y;
		RectOffset_t138 * L_132 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_132);
		int32_t L_133 = RectOffset_get_top_m560(L_132, /*hidden argument*/NULL);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = ___height;
		RectOffset_t138 * L_135 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin() */, __this);
		NullCheck(L_135);
		int32_t L_136 = RectOffset_get_vertical_m565(L_135, /*hidden argument*/NULL);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		List_1_t137 * L_137 = (__this->___entries_10);
		NullCheck(L_137);
		Enumerator_t388  L_138 = List_1_GetEnumerator_m1470(L_137, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			GUILayoutEntry_t136 * L_139 = Enumerator_get_Current_m1471((&V_21), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_20 = L_139;
			GUILayoutEntry_t136 * L_140 = V_20;
			NullCheck(L_140);
			int32_t L_141 = (L_140->___stretchHeight_6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			GUILayoutEntry_t136 * L_142 = V_20;
			float L_143 = V_18;
			GUILayoutEntry_t136 * L_144 = V_20;
			NullCheck(L_144);
			RectOffset_t138 * L_145 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_144);
			NullCheck(L_145);
			int32_t L_146 = RectOffset_get_top_m560(L_145, /*hidden argument*/NULL);
			float L_147 = V_19;
			GUILayoutEntry_t136 * L_148 = V_20;
			NullCheck(L_148);
			RectOffset_t138 * L_149 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_148);
			NullCheck(L_149);
			int32_t L_150 = RectOffset_get_vertical_m565(L_149, /*hidden argument*/NULL);
			NullCheck(L_142);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			GUILayoutEntry_t136 * L_151 = V_20;
			float L_152 = V_18;
			GUILayoutEntry_t136 * L_153 = V_20;
			NullCheck(L_153);
			RectOffset_t138 * L_154 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_153);
			NullCheck(L_154);
			int32_t L_155 = RectOffset_get_top_m560(L_154, /*hidden argument*/NULL);
			float L_156 = V_19;
			GUILayoutEntry_t136 * L_157 = V_20;
			NullCheck(L_157);
			RectOffset_t138 * L_158 = (RectOffset_t138 *)VirtFuncInvoker0< RectOffset_t138 * >::Invoke(4 /* UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin() */, L_157);
			NullCheck(L_158);
			int32_t L_159 = RectOffset_get_vertical_m565(L_158, /*hidden argument*/NULL);
			GUILayoutEntry_t136 * L_160 = V_20;
			NullCheck(L_160);
			float L_161 = (L_160->___minHeight_2);
			GUILayoutEntry_t136 * L_162 = V_20;
			NullCheck(L_162);
			float L_163 = (L_162->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
			float L_164 = Mathf_Clamp_m750(NULL /*static, unused*/, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, /*hidden argument*/NULL);
			NullCheck(L_151);
			VirtActionInvoker2< float, float >::Invoke(8 /* System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single) */, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = Enumerator_MoveNext_m1472((&V_21), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_166 = V_21;
		Enumerator_t388  L_167 = L_166;
		Object_t * L_168 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_167);
		NullCheck(L_168);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_03c1:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutEntry_t136_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t388_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1470_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1471_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1472_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral55;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral63;
extern Il2CppCodeGenString* _stringLiteral17;
extern Il2CppCodeGenString* _stringLiteral23;
extern "C" String_t* GUILayoutGroup_ToString_m463 (GUILayoutGroup_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUILayoutEntry_t136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		Enumerator_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Enumerator_get_Current_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		Enumerator_MoveNext_m1472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		_stringLiteral55 = il2cpp_codegen_string_literal_from_index(55);
		_stringLiteral62 = il2cpp_codegen_string_literal_from_index(62);
		_stringLiteral63 = il2cpp_codegen_string_literal_from_index(63);
		_stringLiteral17 = il2cpp_codegen_string_literal_from_index(17);
		_stringLiteral23 = il2cpp_codegen_string_literal_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	GUILayoutEntry_t136 * V_3 = {0};
	Enumerator_t388  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, L_2, _stringLiteral55, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t136_il2cpp_TypeInfo_var);
		int32_t L_6 = ((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_7 = V_0;
		V_5 = L_7;
		ObjectU5BU5D_t270* L_8 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 5));
		String_t* L_9 = V_5;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)L_9;
		ObjectU5BU5D_t270* L_10 = L_8;
		String_t* L_11 = GUILayoutEntry_ToString_m453(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, _stringLiteral62);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2)) = (Object_t *)_stringLiteral62;
		ObjectU5BU5D_t270* L_13 = L_12;
		float L_14 = (__this->___childMinHeight_24);
		float L_15 = L_14;
		Object_t * L_16 = Box(Single_t78_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 3)) = (Object_t *)L_16;
		ObjectU5BU5D_t270* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, _stringLiteral63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4)) = (Object_t *)_stringLiteral63;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1474(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t136_il2cpp_TypeInfo_var);
		int32_t L_19 = ((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		List_1_t137 * L_20 = (__this->___entries_10);
		NullCheck(L_20);
		Enumerator_t388  L_21 = List_1_GetEnumerator_m1470(L_20, /*hidden argument*/List_1_GetEnumerator_m1470_MethodInfo_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			GUILayoutEntry_t136 * L_22 = Enumerator_get_Current_m1471((&V_4), /*hidden argument*/Enumerator_get_Current_m1471_MethodInfo_var);
			V_3 = L_22;
			String_t* L_23 = V_0;
			GUILayoutEntry_t136 * L_24 = V_3;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.GUILayoutEntry::ToString() */, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m222(NULL /*static, unused*/, L_23, L_25, _stringLiteral17, /*hidden argument*/NULL);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = Enumerator_MoveNext_m1472((&V_4), /*hidden argument*/Enumerator_MoveNext_m1472_MethodInfo_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		Enumerator_t388  L_28 = V_4;
		Enumerator_t388  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t388_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00bf:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m222(NULL /*static, unused*/, L_31, L_32, _stringLiteral23, /*hidden argument*/NULL);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutEntry_t136_il2cpp_TypeInfo_var);
		int32_t L_34 = ((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___indent_9;
		((GUILayoutEntry_t136_StaticFields*)GUILayoutEntry_t136_il2cpp_TypeInfo_var->static_fields)->___indent_9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		String_t* L_35 = V_0;
		return L_35;
	}
}
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"



// System.Void UnityEngine.GUIScrollGroup::.ctor()
extern "C" void GUIScrollGroup__ctor_m464 (GUIScrollGroup_t139 * __this, const MethodInfo* method)
{
	{
		__this->___allowHorizontalScroll_33 = 1;
		__this->___allowVerticalScroll_34 = 1;
		GUILayoutGroup__ctor_m454(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern "C" void GUIScrollGroup_CalcWidth_m465 (GUIScrollGroup_t139 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t136 *)__this)->___minWidth_0);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t136 *)__this)->___maxWidth_1);
		V_1 = L_1;
		bool L_2 = (__this->___allowHorizontalScroll_33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = (0.0f);
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcWidth_m459(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t136 *)__this)->___minWidth_0);
		__this->___calcMinWidth_27 = L_3;
		float L_4 = (((GUILayoutEntry_t136 *)__this)->___maxWidth_1);
		__this->___calcMaxWidth_28 = L_4;
		bool L_5 = (__this->___allowHorizontalScroll_33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (((GUILayoutEntry_t136 *)__this)->___minWidth_0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = L_10;
		((GUILayoutEntry_t136 *)__this)->___stretchWidth_5 = 0;
	}

IL_009e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUIScrollGroup_SetHorizontal_m466 (GUIScrollGroup_t139 * __this, float ___x, float ___width, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->___needsVerticalScrollbar_36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = ___width;
		GUIStyle_t134 * L_2 = (__this->___verticalScrollbar_38);
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_m579(L_2, /*hidden argument*/NULL);
		GUIStyle_t134 * L_4 = (__this->___verticalScrollbar_38);
		NullCheck(L_4);
		RectOffset_t138 * L_5 = GUIStyle_get_margin_m576(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_m556(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = ___width;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->___allowHorizontalScroll_33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinWidth_27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->___needsHorizontalScrollbar_35 = 1;
		float L_11 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = L_11;
		float L_12 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = L_12;
		float L_13 = ___x;
		float L_14 = (__this->___calcMinWidth_27);
		GUILayoutGroup_SetHorizontal_m460(__this, L_13, L_14, /*hidden argument*/NULL);
		Rect_t121 * L_15 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_16 = ___width;
		Rect_set_width_m649(L_15, L_16, /*hidden argument*/NULL);
		float L_17 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->___needsHorizontalScrollbar_35 = 0;
		bool L_18 = (__this->___allowHorizontalScroll_33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->___calcMinWidth_27);
		((GUILayoutEntry_t136 *)__this)->___minWidth_0 = L_19;
		float L_20 = (__this->___calcMaxWidth_28);
		((GUILayoutEntry_t136 *)__this)->___maxWidth_1 = L_20;
	}

IL_00bb:
	{
		float L_21 = ___x;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m460(__this, L_21, L_22, /*hidden argument*/NULL);
		Rect_t121 * L_23 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_24 = ___width;
		Rect_set_width_m649(L_23, L_24, /*hidden argument*/NULL);
		float L_25 = V_0;
		__this->___clientWidth_31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" void GUIScrollGroup_CalcHeight_m467 (GUIScrollGroup_t139 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (((GUILayoutEntry_t136 *)__this)->___minHeight_2);
		V_0 = L_0;
		float L_1 = (((GUILayoutEntry_t136 *)__this)->___maxHeight_3);
		V_1 = L_1;
		bool L_2 = (__this->___allowVerticalScroll_34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = (0.0f);
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcHeight_m461(__this, /*hidden argument*/NULL);
		float L_3 = (((GUILayoutEntry_t136 *)__this)->___minHeight_2);
		__this->___calcMinHeight_29 = L_3;
		float L_4 = (((GUILayoutEntry_t136 *)__this)->___maxHeight_3);
		__this->___calcMaxHeight_30 = L_4;
		bool L_5 = (__this->___needsHorizontalScrollbar_35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		GUIStyle_t134 * L_6 = (__this->___horizontalScrollbar_37);
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m580(L_6, /*hidden argument*/NULL);
		GUIStyle_t134 * L_8 = (__this->___horizontalScrollbar_37);
		NullCheck(L_8);
		RectOffset_t138 * L_9 = GUIStyle_get_margin_m576(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_m560(L_9, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (((GUILayoutEntry_t136 *)__this)->___minHeight_2);
		float L_12 = V_2;
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (((GUILayoutEntry_t136 *)__this)->___maxHeight_3);
		float L_14 = V_2;
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->___allowVerticalScroll_34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (((GUILayoutEntry_t136 *)__this)->___minHeight_2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = L_20;
		((GUILayoutEntry_t136 *)__this)->___stretchHeight_6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
extern "C" void GUIScrollGroup_SetVertical_m468 (GUIScrollGroup_t139 * __this, float ___y, float ___height, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height;
		V_0 = L_0;
		bool L_1 = (__this->___needsHorizontalScrollbar_35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t134 * L_3 = (__this->___horizontalScrollbar_37);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m580(L_3, /*hidden argument*/NULL);
		GUIStyle_t134 * L_5 = (__this->___horizontalScrollbar_37);
		NullCheck(L_5);
		RectOffset_t138 * L_6 = GUIStyle_get_margin_m576(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_m560(L_6, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->___allowVerticalScroll_34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinHeight_29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->___needsHorizontalScrollbar_35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->___needsVerticalScrollbar_36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		Rect_t121 * L_13 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_14 = Rect_get_width_m648(L_13, /*hidden argument*/NULL);
		GUIStyle_t134 * L_15 = (__this->___verticalScrollbar_38);
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_m579(L_15, /*hidden argument*/NULL);
		GUIStyle_t134 * L_17 = (__this->___verticalScrollbar_38);
		NullCheck(L_17);
		RectOffset_t138 * L_18 = GUIStyle_get_margin_m576(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_m556(L_18, /*hidden argument*/NULL);
		__this->___clientWidth_31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->___clientWidth_31);
		float L_21 = (__this->___calcMinWidth_27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_22;
	}

IL_00a6:
	{
		Rect_t121 * L_23 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_24 = Rect_get_width_m648(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Rect_t121 * L_25 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_26 = Rect_get_x_m644(L_25, /*hidden argument*/NULL);
		float L_27 = (__this->___clientWidth_31);
		GUIScrollGroup_SetHorizontal_m466(__this, L_26, L_27, /*hidden argument*/NULL);
		GUIScrollGroup_CalcHeight_m467(__this, /*hidden argument*/NULL);
		Rect_t121 * L_28 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_29 = V_1;
		Rect_set_width_m649(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00db:
	{
		float L_30 = (((GUILayoutEntry_t136 *)__this)->___minHeight_2);
		V_2 = L_30;
		float L_31 = (((GUILayoutEntry_t136 *)__this)->___maxHeight_3);
		V_3 = L_31;
		float L_32 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = L_32;
		float L_33 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = L_33;
		float L_34 = ___y;
		float L_35 = (__this->___calcMinHeight_29);
		GUILayoutGroup_SetVertical_m462(__this, L_34, L_35, /*hidden argument*/NULL);
		float L_36 = V_2;
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = L_36;
		float L_37 = V_3;
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = L_37;
		Rect_t121 * L_38 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_39 = ___height;
		Rect_set_height_m651(L_38, L_39, /*hidden argument*/NULL);
		float L_40 = (__this->___calcMinHeight_29);
		__this->___clientHeight_32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->___allowVerticalScroll_34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->___calcMinHeight_29);
		((GUILayoutEntry_t136 *)__this)->___minHeight_2 = L_42;
		float L_43 = (__this->___calcMaxHeight_30);
		((GUILayoutEntry_t136 *)__this)->___maxHeight_3 = L_43;
	}

IL_015c:
	{
		float L_44 = ___y;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m462(__this, L_44, L_45, /*hidden argument*/NULL);
		Rect_t121 * L_46 = &(((GUILayoutEntry_t136 *)__this)->___rect_4);
		float L_47 = ___height;
		Rect_set_height_m651(L_46, L_47, /*hidden argument*/NULL);
		float L_48 = V_0;
		__this->___clientHeight_32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_TypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
extern "C" void GUILayoutOption__ctor_m469 (GUILayoutOption_t141 * __this, int32_t ___type, Object_t * ___value, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type;
		__this->___type_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		return;
	}
}
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIExceptionMethodDeclarations.h"



// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void UnityEngine.GUIUtility::.cctor()
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern "C" void GUIUtility__cctor_m470 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t66  L_0 = Vector2_get_zero_m613(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GUIUtility_t143_StaticFields*)GUIUtility_t143_il2cpp_TypeInfo_var->static_fields)->___s_EditorScreenPointOffset_2 = L_0;
		((GUIUtility_t143_StaticFields*)GUIUtility_t143_il2cpp_TypeInfo_var->static_fields)->___s_HasKeyboardFocus_3 = 0;
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern "C" GUISkin_t126 * GUIUtility_GetDefaultSkin_m471 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUIUtility_t143_StaticFields*)GUIUtility_t143_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0;
		GUISkin_t126 * L_1 = GUIUtility_Internal_GetDefaultSkin_m472(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t126 * GUIUtility_Internal_GetDefaultSkin_m472 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method)
{
	typedef GUISkin_t126 * (*GUIUtility_Internal_GetDefaultSkin_m472_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(___skinMode);
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t128_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_BeginGUI_m473 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		GUI_t128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___skinMode;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		((GUIUtility_t143_StaticFields*)GUIUtility_t143_il2cpp_TypeInfo_var->static_fields)->___s_SkinMode_0 = L_0;
		int32_t L_1 = ___instanceID;
		((GUIUtility_t143_StaticFields*)GUIUtility_t143_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		GUI_set_skin_m423(NULL /*static, unused*/, (GUISkin_t126 *)NULL, /*hidden argument*/NULL);
		int32_t L_2 = ___useGUILayout;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
		GUILayoutUtility_SelectIDList_m431(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		int32_t L_4 = ___instanceID;
		GUILayoutUtility_Begin_m432(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t128_il2cpp_TypeInfo_var);
		GUI_set_changed_m425(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m474 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m474_ftn) ();
	static GUIUtility_Internal_ExitGUI_m474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern TypeInfo* GUILayoutUtility_t135_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t149_il2cpp_TypeInfo_var;
extern "C" void GUIUtility_EndGUI_m475 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutUtility_t135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		GUIContent_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Event_t153 * L_0 = Event_get_current_m601(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_m594(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = ___layoutType;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUILayoutUtility_Layout_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUILayoutUtility_LayoutFromEditorWindow_m435(NULL /*static, unused*/, /*hidden argument*/NULL);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
			int32_t L_4 = ((GUIUtility_t143_StaticFields*)GUIUtility_t143_il2cpp_TypeInfo_var->static_fields)->___s_OriginalID_1;
			IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t135_il2cpp_TypeInfo_var);
			GUILayoutUtility_SelectIDList_m431(NULL /*static, unused*/, L_4, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t149_il2cpp_TypeInfo_var);
			GUIContent_ClearStaticCache_m541(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m474(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern TypeInfo* ExitGUIException_t142_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern "C" bool GUIUtility_EndGUIFromException_m476 (Object_t * __this /* static, unused */, Exception_t27 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExitGUIException_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t27 * L_0 = ___exception;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Exception_t27 * L_1 = ___exception;
		if (((ExitGUIException_t142 *)IsInst(L_1, ExitGUIException_t142_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		Exception_t27 * L_2 = ___exception;
		NullCheck(L_2);
		Exception_t27 * L_3 = (Exception_t27 *)VirtFuncInvoker0< Exception_t27 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_2);
		if (((ExitGUIException_t142 *)IsInst(L_3, ExitGUIException_t142_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		GUIUtility_Internal_ExitGUI_m474(NULL /*static, unused*/, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern TypeInfo* GUIUtility_t143_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t382_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral64;
extern "C" void GUIUtility_CheckOnGUI_m477 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		ArgumentException_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		_stringLiteral64 = il2cpp_codegen_string_literal_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t143_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_Internal_GetGUIDepth_m478(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t382 * L_1 = (ArgumentException_t382 *)il2cpp_codegen_object_new (ArgumentException_t382_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1453(L_1, _stringLiteral64, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m478 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*GUIUtility_Internal_GetGUIDepth_m478_ftn) ();
	static GUIUtility_Internal_GetGUIDepth_m478_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetGUIDepth_m478_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"


// System.Void UnityEngine.GUISettings::.ctor()
extern "C" void GUISettings__ctor_m479 (GUISettings_t144 * __this, const MethodInfo* method)
{
	{
		__this->___m_DoubleClickSelectsWord_0 = 1;
		__this->___m_TripleClickSelectsLine_1 = 1;
		Color_t60  L_0 = Color_get_white_m633(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_t60  L_1 = {0};
		Color__ctor_m628(&L_1, (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"



// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SkinChangedDelegate__ctor_m480 (SkinChangedDelegate_t145 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C" void SkinChangedDelegate_Invoke_m481 (SkinChangedDelegate_t145 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SkinChangedDelegate_Invoke_m481((SkinChangedDelegate_t145 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t145(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m482 (SkinChangedDelegate_t145 * __this, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SkinChangedDelegate_EndInvoke_m483 (SkinChangedDelegate_t145 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_0.h"
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollecMethodDeclarations.h"


// System.Void UnityEngine.GUISkin::.ctor()
extern TypeInfo* GUISettings_t144_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyleU5BU5D_t147_il2cpp_TypeInfo_var;
extern "C" void GUISkin__ctor_m484 (GUISkin_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISettings_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		GUIStyleU5BU5D_t147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISettings_t144 * L_0 = (GUISettings_t144 *)il2cpp_codegen_object_new (GUISettings_t144_il2cpp_TypeInfo_var);
		GUISettings__ctor_m479(L_0, /*hidden argument*/NULL);
		__this->___m_Settings_24 = L_0;
		ScriptableObject__ctor_m307(__this, /*hidden argument*/NULL);
		__this->___m_CustomStyles_23 = ((GUIStyleU5BU5D_t147*)SZArrayNew(GUIStyleU5BU5D_t147_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C" void GUISkin_OnEnable_m485 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t146 * GUISkin_get_font_m486 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		Font_t146 * L_0 = (__this->___m_Font_2);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern TypeInfo* GUISkin_t126_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern "C" void GUISkin_set_font_m487 (GUISkin_t126 * __this, Font_t146 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t146 * L_0 = ___value;
		__this->___m_Font_2 = L_0;
		GUISkin_t126 * L_1 = ((GUISkin_t126_StaticFields*)GUISkin_t126_il2cpp_TypeInfo_var->static_fields)->___current_28;
		bool L_2 = Object_op_Equality_m903(NULL /*static, unused*/, L_1, __this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Font_t146 * L_3 = (__this->___m_Font_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m585(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t134 * GUISkin_get_box_m488 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_box_3);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_box_m489 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_box_3 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t134 * GUISkin_get_label_m490 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_label_6);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m491 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_label_6 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t134 * GUISkin_get_textField_m492 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_textField_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m493 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_textField_7 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t134 * GUISkin_get_textArea_m494 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_textArea_8);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m495 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_textArea_8 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t134 * GUISkin_get_button_m496 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_button_4);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m497 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_button_4 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t134 * GUISkin_get_toggle_m498 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_toggle_5);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m499 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_toggle_5 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t134 * GUISkin_get_window_m500 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_window_9);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m501 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_window_9 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t134 * GUISkin_get_horizontalSlider_m502 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_horizontalSlider_10);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m503 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_horizontalSlider_10 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t134 * GUISkin_get_horizontalSliderThumb_m504 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_horizontalSliderThumb_11);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m505 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_horizontalSliderThumb_11 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t134 * GUISkin_get_verticalSlider_m506 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_verticalSlider_12);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m507 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_verticalSlider_12 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t134 * GUISkin_get_verticalSliderThumb_m508 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_verticalSliderThumb_13);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m509 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_verticalSliderThumb_13 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t134 * GUISkin_get_horizontalScrollbar_m510 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_horizontalScrollbar_14);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m511 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_horizontalScrollbar_14 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t134 * GUISkin_get_horizontalScrollbarThumb_m512 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_horizontalScrollbarThumb_15);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m513 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_horizontalScrollbarThumb_15 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t134 * GUISkin_get_horizontalScrollbarLeftButton_m514 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_horizontalScrollbarLeftButton_16);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m515 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_horizontalScrollbarLeftButton_16 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t134 * GUISkin_get_horizontalScrollbarRightButton_m516 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_horizontalScrollbarRightButton_17);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m517 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_horizontalScrollbarRightButton_17 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t134 * GUISkin_get_verticalScrollbar_m518 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_verticalScrollbar_18);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m519 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_verticalScrollbar_18 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t134 * GUISkin_get_verticalScrollbarThumb_m520 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_verticalScrollbarThumb_19);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m521 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_verticalScrollbarThumb_19 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t134 * GUISkin_get_verticalScrollbarUpButton_m522 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_verticalScrollbarUpButton_20);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m523 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_verticalScrollbarUpButton_20 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t134 * GUISkin_get_verticalScrollbarDownButton_m524 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_verticalScrollbarDownButton_21);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m525 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_verticalScrollbarDownButton_21 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t134 * GUISkin_get_scrollView_m526 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = (__this->___m_ScrollView_22);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m527 (GUISkin_t126 * __this, GUIStyle_t134 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t134 * L_0 = ___value;
		__this->___m_ScrollView_22 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t147* GUISkin_get_customStyles_m528 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t147* L_0 = (__this->___m_CustomStyles_23);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C" void GUISkin_set_customStyles_m529 (GUISkin_t126 * __this, GUIStyleU5BU5D_t147* ___value, const MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t147* L_0 = ___value;
		__this->___m_CustomStyles_23 = L_0;
		GUISkin_Apply_m532(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t144 * GUISkin_get_settings_m530 (GUISkin_t126 * __this, const MethodInfo* method)
{
	{
		GUISettings_t144 * L_0 = (__this->___m_Settings_24);
		return L_0;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern TypeInfo* GUISkin_t126_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t134 * GUISkin_get_error_m531 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyle_t134 * L_0 = ((GUISkin_t126_StaticFields*)GUISkin_t126_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t134 * L_1 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_1, /*hidden argument*/NULL);
		((GUISkin_t126_StaticFields*)GUISkin_t126_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25 = L_1;
	}

IL_0014:
	{
		GUIStyle_t134 * L_2 = ((GUISkin_t126_StaticFields*)GUISkin_t126_il2cpp_TypeInfo_var->static_fields)->___ms_Error_25;
		return L_2;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
extern Il2CppCodeGenString* _stringLiteral65;
extern "C" void GUISkin_Apply_m532 (GUISkin_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral65 = il2cpp_codegen_string_literal_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyleU5BU5D_t147* L_0 = (__this->___m_CustomStyles_23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m254(NULL /*static, unused*/, _stringLiteral65, /*hidden argument*/NULL);
	}

IL_0015:
	{
		GUISkin_BuildStyleCache_m533(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern TypeInfo* StringComparer_t389_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t148_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1477_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral66;
extern Il2CppCodeGenString* _stringLiteral67;
extern Il2CppCodeGenString* _stringLiteral68;
extern Il2CppCodeGenString* _stringLiteral69;
extern Il2CppCodeGenString* _stringLiteral70;
extern Il2CppCodeGenString* _stringLiteral71;
extern Il2CppCodeGenString* _stringLiteral72;
extern Il2CppCodeGenString* _stringLiteral73;
extern Il2CppCodeGenString* _stringLiteral74;
extern Il2CppCodeGenString* _stringLiteral75;
extern Il2CppCodeGenString* _stringLiteral76;
extern Il2CppCodeGenString* _stringLiteral77;
extern Il2CppCodeGenString* _stringLiteral78;
extern Il2CppCodeGenString* _stringLiteral79;
extern Il2CppCodeGenString* _stringLiteral80;
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral82;
extern Il2CppCodeGenString* _stringLiteral83;
extern Il2CppCodeGenString* _stringLiteral84;
extern Il2CppCodeGenString* _stringLiteral85;
extern "C" void GUISkin_BuildStyleCache_m533 (GUISkin_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		StringComparer_t389_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(104);
		Dictionary_2_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Dictionary_2__ctor_m1477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		_stringLiteral66 = il2cpp_codegen_string_literal_from_index(66);
		_stringLiteral67 = il2cpp_codegen_string_literal_from_index(67);
		_stringLiteral68 = il2cpp_codegen_string_literal_from_index(68);
		_stringLiteral69 = il2cpp_codegen_string_literal_from_index(69);
		_stringLiteral70 = il2cpp_codegen_string_literal_from_index(70);
		_stringLiteral71 = il2cpp_codegen_string_literal_from_index(71);
		_stringLiteral72 = il2cpp_codegen_string_literal_from_index(72);
		_stringLiteral73 = il2cpp_codegen_string_literal_from_index(73);
		_stringLiteral74 = il2cpp_codegen_string_literal_from_index(74);
		_stringLiteral75 = il2cpp_codegen_string_literal_from_index(75);
		_stringLiteral76 = il2cpp_codegen_string_literal_from_index(76);
		_stringLiteral77 = il2cpp_codegen_string_literal_from_index(77);
		_stringLiteral78 = il2cpp_codegen_string_literal_from_index(78);
		_stringLiteral79 = il2cpp_codegen_string_literal_from_index(79);
		_stringLiteral80 = il2cpp_codegen_string_literal_from_index(80);
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		_stringLiteral83 = il2cpp_codegen_string_literal_from_index(83);
		_stringLiteral84 = il2cpp_codegen_string_literal_from_index(84);
		_stringLiteral85 = il2cpp_codegen_string_literal_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIStyle_t134 * L_0 = (__this->___m_box_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t134 * L_1 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_1, /*hidden argument*/NULL);
		__this->___m_box_3 = L_1;
	}

IL_0016:
	{
		GUIStyle_t134 * L_2 = (__this->___m_button_4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		GUIStyle_t134 * L_3 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_3, /*hidden argument*/NULL);
		__this->___m_button_4 = L_3;
	}

IL_002c:
	{
		GUIStyle_t134 * L_4 = (__this->___m_toggle_5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t134 * L_5 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_5, /*hidden argument*/NULL);
		__this->___m_toggle_5 = L_5;
	}

IL_0042:
	{
		GUIStyle_t134 * L_6 = (__this->___m_label_6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		GUIStyle_t134 * L_7 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_7, /*hidden argument*/NULL);
		__this->___m_label_6 = L_7;
	}

IL_0058:
	{
		GUIStyle_t134 * L_8 = (__this->___m_window_9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		GUIStyle_t134 * L_9 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_9, /*hidden argument*/NULL);
		__this->___m_window_9 = L_9;
	}

IL_006e:
	{
		GUIStyle_t134 * L_10 = (__this->___m_textField_7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		GUIStyle_t134 * L_11 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_11, /*hidden argument*/NULL);
		__this->___m_textField_7 = L_11;
	}

IL_0084:
	{
		GUIStyle_t134 * L_12 = (__this->___m_textArea_8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		GUIStyle_t134 * L_13 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_13, /*hidden argument*/NULL);
		__this->___m_textArea_8 = L_13;
	}

IL_009a:
	{
		GUIStyle_t134 * L_14 = (__this->___m_horizontalSlider_10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		GUIStyle_t134 * L_15 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_15, /*hidden argument*/NULL);
		__this->___m_horizontalSlider_10 = L_15;
	}

IL_00b0:
	{
		GUIStyle_t134 * L_16 = (__this->___m_horizontalSliderThumb_11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		GUIStyle_t134 * L_17 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_17, /*hidden argument*/NULL);
		__this->___m_horizontalSliderThumb_11 = L_17;
	}

IL_00c6:
	{
		GUIStyle_t134 * L_18 = (__this->___m_verticalSlider_12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		GUIStyle_t134 * L_19 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_19, /*hidden argument*/NULL);
		__this->___m_verticalSlider_12 = L_19;
	}

IL_00dc:
	{
		GUIStyle_t134 * L_20 = (__this->___m_verticalSliderThumb_13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		GUIStyle_t134 * L_21 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_21, /*hidden argument*/NULL);
		__this->___m_verticalSliderThumb_13 = L_21;
	}

IL_00f2:
	{
		GUIStyle_t134 * L_22 = (__this->___m_horizontalScrollbar_14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		GUIStyle_t134 * L_23 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_23, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbar_14 = L_23;
	}

IL_0108:
	{
		GUIStyle_t134 * L_24 = (__this->___m_horizontalScrollbarThumb_15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		GUIStyle_t134 * L_25 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_25, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarThumb_15 = L_25;
	}

IL_011e:
	{
		GUIStyle_t134 * L_26 = (__this->___m_horizontalScrollbarLeftButton_16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		GUIStyle_t134 * L_27 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_27, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarLeftButton_16 = L_27;
	}

IL_0134:
	{
		GUIStyle_t134 * L_28 = (__this->___m_horizontalScrollbarRightButton_17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		GUIStyle_t134 * L_29 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_29, /*hidden argument*/NULL);
		__this->___m_horizontalScrollbarRightButton_17 = L_29;
	}

IL_014a:
	{
		GUIStyle_t134 * L_30 = (__this->___m_verticalScrollbar_18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		GUIStyle_t134 * L_31 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_31, /*hidden argument*/NULL);
		__this->___m_verticalScrollbar_18 = L_31;
	}

IL_0160:
	{
		GUIStyle_t134 * L_32 = (__this->___m_verticalScrollbarThumb_19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		GUIStyle_t134 * L_33 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_33, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarThumb_19 = L_33;
	}

IL_0176:
	{
		GUIStyle_t134 * L_34 = (__this->___m_verticalScrollbarUpButton_20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		GUIStyle_t134 * L_35 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_35, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarUpButton_20 = L_35;
	}

IL_018c:
	{
		GUIStyle_t134 * L_36 = (__this->___m_verticalScrollbarDownButton_21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		GUIStyle_t134 * L_37 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_37, /*hidden argument*/NULL);
		__this->___m_verticalScrollbarDownButton_21 = L_37;
	}

IL_01a2:
	{
		GUIStyle_t134 * L_38 = (__this->___m_ScrollView_22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		GUIStyle_t134 * L_39 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_39, /*hidden argument*/NULL);
		__this->___m_ScrollView_22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t389_il2cpp_TypeInfo_var);
		StringComparer_t389 * L_40 = StringComparer_get_OrdinalIgnoreCase_m1476(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_41 = (Dictionary_2_t148 *)il2cpp_codegen_object_new (Dictionary_2_t148_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1477(L_41, L_40, /*hidden argument*/Dictionary_2__ctor_m1477_MethodInfo_var);
		__this->___styles_26 = L_41;
		Dictionary_2_t148 * L_42 = (__this->___styles_26);
		GUIStyle_t134 * L_43 = (__this->___m_box_3);
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_42, _stringLiteral66, L_43);
		GUIStyle_t134 * L_44 = (__this->___m_box_3);
		NullCheck(L_44);
		GUIStyle_set_name_m573(L_44, _stringLiteral66, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_45 = (__this->___styles_26);
		GUIStyle_t134 * L_46 = (__this->___m_button_4);
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_45, _stringLiteral67, L_46);
		GUIStyle_t134 * L_47 = (__this->___m_button_4);
		NullCheck(L_47);
		GUIStyle_set_name_m573(L_47, _stringLiteral67, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_48 = (__this->___styles_26);
		GUIStyle_t134 * L_49 = (__this->___m_toggle_5);
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_48, _stringLiteral68, L_49);
		GUIStyle_t134 * L_50 = (__this->___m_toggle_5);
		NullCheck(L_50);
		GUIStyle_set_name_m573(L_50, _stringLiteral68, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_51 = (__this->___styles_26);
		GUIStyle_t134 * L_52 = (__this->___m_label_6);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_51, _stringLiteral69, L_52);
		GUIStyle_t134 * L_53 = (__this->___m_label_6);
		NullCheck(L_53);
		GUIStyle_set_name_m573(L_53, _stringLiteral69, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_54 = (__this->___styles_26);
		GUIStyle_t134 * L_55 = (__this->___m_window_9);
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_54, _stringLiteral70, L_55);
		GUIStyle_t134 * L_56 = (__this->___m_window_9);
		NullCheck(L_56);
		GUIStyle_set_name_m573(L_56, _stringLiteral70, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_57 = (__this->___styles_26);
		GUIStyle_t134 * L_58 = (__this->___m_textField_7);
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_57, _stringLiteral71, L_58);
		GUIStyle_t134 * L_59 = (__this->___m_textField_7);
		NullCheck(L_59);
		GUIStyle_set_name_m573(L_59, _stringLiteral71, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_60 = (__this->___styles_26);
		GUIStyle_t134 * L_61 = (__this->___m_textArea_8);
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_60, _stringLiteral72, L_61);
		GUIStyle_t134 * L_62 = (__this->___m_textArea_8);
		NullCheck(L_62);
		GUIStyle_set_name_m573(L_62, _stringLiteral72, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_63 = (__this->___styles_26);
		GUIStyle_t134 * L_64 = (__this->___m_horizontalSlider_10);
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_63, _stringLiteral73, L_64);
		GUIStyle_t134 * L_65 = (__this->___m_horizontalSlider_10);
		NullCheck(L_65);
		GUIStyle_set_name_m573(L_65, _stringLiteral73, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_66 = (__this->___styles_26);
		GUIStyle_t134 * L_67 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_66, _stringLiteral74, L_67);
		GUIStyle_t134 * L_68 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_68);
		GUIStyle_set_name_m573(L_68, _stringLiteral74, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_69 = (__this->___styles_26);
		GUIStyle_t134 * L_70 = (__this->___m_verticalSlider_12);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_69, _stringLiteral75, L_70);
		GUIStyle_t134 * L_71 = (__this->___m_verticalSlider_12);
		NullCheck(L_71);
		GUIStyle_set_name_m573(L_71, _stringLiteral75, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_72 = (__this->___styles_26);
		GUIStyle_t134 * L_73 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_72, _stringLiteral76, L_73);
		GUIStyle_t134 * L_74 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_74);
		GUIStyle_set_name_m573(L_74, _stringLiteral76, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_75 = (__this->___styles_26);
		GUIStyle_t134 * L_76 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_75, _stringLiteral77, L_76);
		GUIStyle_t134 * L_77 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_77);
		GUIStyle_set_name_m573(L_77, _stringLiteral77, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_78 = (__this->___styles_26);
		GUIStyle_t134 * L_79 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_78, _stringLiteral78, L_79);
		GUIStyle_t134 * L_80 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_80);
		GUIStyle_set_name_m573(L_80, _stringLiteral78, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_81 = (__this->___styles_26);
		GUIStyle_t134 * L_82 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_81, _stringLiteral79, L_82);
		GUIStyle_t134 * L_83 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_83);
		GUIStyle_set_name_m573(L_83, _stringLiteral79, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_84 = (__this->___styles_26);
		GUIStyle_t134 * L_85 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_84, _stringLiteral80, L_85);
		GUIStyle_t134 * L_86 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_86);
		GUIStyle_set_name_m573(L_86, _stringLiteral80, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_87 = (__this->___styles_26);
		GUIStyle_t134 * L_88 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_87, _stringLiteral81, L_88);
		GUIStyle_t134 * L_89 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_89);
		GUIStyle_set_name_m573(L_89, _stringLiteral81, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_90 = (__this->___styles_26);
		GUIStyle_t134 * L_91 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_90);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_90, _stringLiteral82, L_91);
		GUIStyle_t134 * L_92 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_92);
		GUIStyle_set_name_m573(L_92, _stringLiteral82, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_93 = (__this->___styles_26);
		GUIStyle_t134 * L_94 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_93);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_93, _stringLiteral83, L_94);
		GUIStyle_t134 * L_95 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_95);
		GUIStyle_set_name_m573(L_95, _stringLiteral83, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_96 = (__this->___styles_26);
		GUIStyle_t134 * L_97 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_96);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_96, _stringLiteral84, L_97);
		GUIStyle_t134 * L_98 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_98);
		GUIStyle_set_name_m573(L_98, _stringLiteral84, /*hidden argument*/NULL);
		Dictionary_2_t148 * L_99 = (__this->___styles_26);
		GUIStyle_t134 * L_100 = (__this->___m_ScrollView_22);
		NullCheck(L_99);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_99, _stringLiteral85, L_100);
		GUIStyle_t134 * L_101 = (__this->___m_ScrollView_22);
		NullCheck(L_101);
		GUIStyle_set_name_m573(L_101, _stringLiteral85, /*hidden argument*/NULL);
		GUIStyleU5BU5D_t147* L_102 = (__this->___m_CustomStyles_23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		GUIStyleU5BU5D_t147* L_103 = (__this->___m_CustomStyles_23);
		int32_t L_104 = V_0;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		int32_t L_105 = L_104;
		if ((*(GUIStyle_t134 **)(GUIStyle_t134 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		Dictionary_2_t148 * L_106 = (__this->___styles_26);
		GUIStyleU5BU5D_t147* L_107 = (__this->___m_CustomStyles_23);
		int32_t L_108 = V_0;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, L_108);
		int32_t L_109 = L_108;
		NullCheck((*(GUIStyle_t134 **)(GUIStyle_t134 **)SZArrayLdElema(L_107, L_109)));
		String_t* L_110 = GUIStyle_get_name_m572((*(GUIStyle_t134 **)(GUIStyle_t134 **)SZArrayLdElema(L_107, L_109)), /*hidden argument*/NULL);
		GUIStyleU5BU5D_t147* L_111 = (__this->___m_CustomStyles_23);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_112);
		int32_t L_113 = L_112;
		NullCheck(L_106);
		VirtActionInvoker2< String_t*, GUIStyle_t134 * >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(!0,!1) */, L_106, L_110, (*(GUIStyle_t134 **)(GUIStyle_t134 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		GUIStyleU5BU5D_t147* L_116 = (__this->___m_CustomStyles_23);
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((Array_t *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		GUIStyle_t134 * L_117 = GUISkin_get_error_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_117);
		GUIStyle_set_stretchHeight_m584(L_117, 1, /*hidden argument*/NULL);
		GUIStyle_t134 * L_118 = GUISkin_get_error_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_118);
		GUIStyleState_t150 * L_119 = GUIStyle_get_normal_m574(L_118, /*hidden argument*/NULL);
		Color_t60  L_120 = Color_get_red_m632(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_119);
		GUIStyleState_set_textColor_m548(L_119, L_120, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t156_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral86;
extern Il2CppCodeGenString* _stringLiteral87;
extern Il2CppCodeGenString* _stringLiteral88;
extern "C" GUIStyle_t134 * GUISkin_GetStyle_m534 (GUISkin_t126 * __this, String_t* ___styleName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		EventType_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral86 = il2cpp_codegen_string_literal_from_index(86);
		_stringLiteral87 = il2cpp_codegen_string_literal_from_index(87);
		_stringLiteral88 = il2cpp_codegen_string_literal_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t134 * V_0 = {0};
	{
		String_t* L_0 = ___styleName;
		GUIStyle_t134 * L_1 = GUISkin_FindStyle_m535(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t134 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		GUIStyle_t134 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		ObjectU5BU5D_t270* L_4 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 6));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, _stringLiteral86);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)_stringLiteral86;
		ObjectU5BU5D_t270* L_5 = L_4;
		String_t* L_6 = ___styleName;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t270* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, _stringLiteral87);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)_stringLiteral87;
		ObjectU5BU5D_t270* L_8 = L_7;
		String_t* L_9 = Object_get_name_m893(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t270* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral88);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)_stringLiteral88;
		ObjectU5BU5D_t270* L_11 = L_10;
		Event_t153 * L_12 = Event_get_current_m601(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Event_get_type_m594(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(EventType_t156_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1474(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_LogWarning_m850(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		GUIStyle_t134 * L_17 = GUISkin_get_error_m531(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern Il2CppCodeGenString* _stringLiteral89;
extern "C" GUIStyle_t134 * GUISkin_FindStyle_m535 (GUISkin_t126 * __this, String_t* ___styleName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral89 = il2cpp_codegen_string_literal_from_index(89);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t134 * V_0 = {0};
	{
		bool L_0 = Object_op_Equality_m903(NULL /*static, unused*/, __this, (Object_t71 *)NULL, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Debug_LogError_m849(NULL /*static, unused*/, _stringLiteral89, /*hidden argument*/NULL);
		return (GUIStyle_t134 *)NULL;
	}

IL_0018:
	{
		Dictionary_2_t148 * L_1 = (__this->___styles_26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUISkin_BuildStyleCache_m533(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		Dictionary_2_t148 * L_2 = (__this->___styles_26);
		String_t* L_3 = ___styleName;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, GUIStyle_t134 ** >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(!0,!1&) */, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GUIStyle_t134 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (GUIStyle_t134 *)NULL;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern TypeInfo* GUISkin_t126_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern "C" void GUISkin_MakeCurrent_m536 (GUISkin_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUISkin_t126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUISkin_t126_StaticFields*)GUISkin_t126_il2cpp_TypeInfo_var->static_fields)->___current_28 = __this;
		Font_t146 * L_0 = GUISkin_get_font_m486(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_m585(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		SkinChangedDelegate_t145 * L_1 = ((GUISkin_t126_StaticFields*)GUISkin_t126_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		SkinChangedDelegate_t145 * L_2 = ((GUISkin_t126_StaticFields*)GUISkin_t126_il2cpp_TypeInfo_var->static_fields)->___m_SkinChanged_27;
		NullCheck(L_2);
		SkinChangedDelegate_Invoke_m481(L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern TypeInfo* Enumerator_t391_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m1478_MethodInfo_var;
extern const MethodInfo* ValueCollection_GetEnumerator_m1479_MethodInfo_var;
extern "C" Object_t * GUISkin_GetEnumerator_m537 (GUISkin_t126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2_get_Values_m1478_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		ValueCollection_GetEnumerator_m1479_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t148 * L_0 = (__this->___styles_26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		GUISkin_BuildStyleCache_m533(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		Dictionary_2_t148 * L_1 = (__this->___styles_26);
		NullCheck(L_1);
		ValueCollection_t390 * L_2 = Dictionary_2_get_Values_m1478(L_1, /*hidden argument*/Dictionary_2_get_Values_m1478_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t391  L_3 = ValueCollection_GetEnumerator_m1479(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m1479_MethodInfo_var);
		Enumerator_t391  L_4 = L_3;
		Object_t * L_5 = Box(Enumerator_t391_il2cpp_TypeInfo_var, &L_4);
		return (Object_t *)L_5;
	}
}
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUIContent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m538 (GUIContent_t149 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent__ctor_m539 (GUIContent_t149 * __this, String_t* ___text, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___text;
		__this->___m_Text_0 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t149_il2cpp_TypeInfo_var;
extern "C" void GUIContent__cctor_m540 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUIContent_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		GUIContent_t149 * L_1 = (GUIContent_t149 *)il2cpp_codegen_object_new (GUIContent_t149_il2cpp_TypeInfo_var);
		GUIContent__ctor_m539(L_1, L_0, /*hidden argument*/NULL);
		((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___none_3 = L_1;
		GUIContent_t149 * L_2 = (GUIContent_t149 *)il2cpp_codegen_object_new (GUIContent_t149_il2cpp_TypeInfo_var);
		GUIContent__ctor_m538(L_2, /*hidden argument*/NULL);
		((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_Text_4 = L_2;
		GUIContent_t149 * L_3 = (GUIContent_t149 *)il2cpp_codegen_object_new (GUIContent_t149_il2cpp_TypeInfo_var);
		GUIContent__ctor_m538(L_3, /*hidden argument*/NULL);
		((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_Image_5 = L_3;
		GUIContent_t149 * L_4 = (GUIContent_t149 *)il2cpp_codegen_object_new (GUIContent_t149_il2cpp_TypeInfo_var);
		GUIContent__ctor_m538(L_4, /*hidden argument*/NULL);
		((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_6 = L_4;
		return;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern TypeInfo* GUIContent_t149_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIContent_ClearStaticCache_m541 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t149_il2cpp_TypeInfo_var);
		GUIContent_t149 * L_0 = ((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_Text_4;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		GUIContent_t149 * L_1 = ((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_Text_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_1);
		L_1->___m_Tooltip_2 = L_2;
		GUIContent_t149 * L_3 = ((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_Image_5;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t110 *)NULL;
		GUIContent_t149 * L_4 = ((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_Image_5;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_4);
		L_4->___m_Tooltip_2 = L_5;
		GUIContent_t149 * L_6 = ((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_6;
		NullCheck(L_6);
		L_6->___m_Text_0 = (String_t*)NULL;
		GUIContent_t149 * L_7 = ((GUIContent_t149_StaticFields*)GUIContent_t149_il2cpp_TypeInfo_var->static_fields)->___s_TextImage_6;
		NullCheck(L_7);
		L_7->___m_Image_1 = (Texture_t110 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" void GUIStyleState__ctor_m542 (GUIStyleState_t150 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		GUIStyleState_Init_m545(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void GUIStyleState__ctor_m543 (GUIStyleState_t150 * __this, GUIStyle_t134 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		GUIStyle_t134 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		Texture2D_t111 * L_2 = GUIStyleState_GetBackgroundInternal_m547(__this, /*hidden argument*/NULL);
		__this->___m_Background_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m544 (GUIStyleState_t150 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t134 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m546(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m545 (GUIStyleState_t150 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m545_ftn) (GUIStyleState_t150 *);
	static GUIStyleState_Init_m545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m546 (GUIStyleState_t150 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m546_ftn) (GUIStyleState_t150 *);
	static GUIStyleState_Cleanup_m546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t111 * GUIStyleState_GetBackgroundInternal_m547 (GUIStyleState_t150 * __this, const MethodInfo* method)
{
	typedef Texture2D_t111 * (*GUIStyleState_GetBackgroundInternal_m547_ftn) (GUIStyleState_t150 *);
	static GUIStyleState_GetBackgroundInternal_m547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_GetBackgroundInternal_m547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m548 (GUIStyleState_t150 * __this, Color_t60  ___value, const MethodInfo* method)
{
	{
		GUIStyleState_INTERNAL_set_textColor_m549(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m549 (GUIStyleState_t150 * __this, Color_t60 * ___value, const MethodInfo* method)
{
	typedef void (*GUIStyleState_INTERNAL_set_textColor_m549_ftn) (GUIStyleState_t150 *, Color_t60 *);
	static GUIStyleState_INTERNAL_set_textColor_m549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_INTERNAL_set_textColor_m549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.RectOffset::.ctor()
extern "C" void RectOffset__ctor_m550 (RectOffset_t138 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		RectOffset_Init_m554(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void RectOffset__ctor_m551 (RectOffset_t138 * __this, GUIStyle_t134 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		GUIStyle_t134 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void RectOffset__ctor_m552 (RectOffset_t138 * __this, int32_t ___left, int32_t ___right, int32_t ___top, int32_t ___bottom, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		RectOffset_Init_m554(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___left;
		RectOffset_set_left_m557(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___right;
		RectOffset_set_right_m559(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___top;
		RectOffset_set_top_m561(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___bottom;
		RectOffset_set_bottom_m563(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern "C" void RectOffset_Finalize_m553 (RectOffset_t138 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t134 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m555(__this, /*hidden argument*/NULL);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m554 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Init_m554_ftn) (RectOffset_t138 *);
	static RectOffset_Init_m554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m555 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m555_ftn) (RectOffset_t138 *);
	static RectOffset_Cleanup_m555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m556 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m556_ftn) (RectOffset_t138 *);
	static RectOffset_get_left_m556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" void RectOffset_set_left_m557 (RectOffset_t138 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_left_m557_ftn) (RectOffset_t138 *, int32_t);
	static RectOffset_set_left_m557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_left_m557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m558 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m558_ftn) (RectOffset_t138 *);
	static RectOffset_get_right_m558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" void RectOffset_set_right_m559 (RectOffset_t138 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_right_m559_ftn) (RectOffset_t138 *, int32_t);
	static RectOffset_set_right_m559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_right_m559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m560 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m560_ftn) (RectOffset_t138 *);
	static RectOffset_get_top_m560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" void RectOffset_set_top_m561 (RectOffset_t138 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_top_m561_ftn) (RectOffset_t138 *, int32_t);
	static RectOffset_set_top_m561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_top_m561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m562 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m562_ftn) (RectOffset_t138 *);
	static RectOffset_get_bottom_m562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" void RectOffset_set_bottom_m563 (RectOffset_t138 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*RectOffset_set_bottom_m563_ftn) (RectOffset_t138 *, int32_t);
	static RectOffset_set_bottom_m563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_bottom_m563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m564 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m564_ftn) (RectOffset_t138 *);
	static RectOffset_get_horizontal_m564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m565 (RectOffset_t138 * __this, const MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m565_ftn) (RectOffset_t138 *);
	static RectOffset_get_vertical_m565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.RectOffset::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t72_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral90;
extern "C" String_t* RectOffset_ToString_m566 (RectOffset_t138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Int32_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		_stringLiteral90 = il2cpp_codegen_string_literal_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m556(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t72_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m558(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t72_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m560(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t72_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m562(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t72_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral90, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m567 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		GUIStyle_Init_m570(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern "C" void GUIStyle__cctor_m568 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GUIStyle_t134_StaticFields*)GUIStyle_t134_il2cpp_TypeInfo_var->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m569 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GUIStyle_Cleanup_m571(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m570 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m570_ftn) (GUIStyle_t134 *);
	static GUIStyle_Init_m570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m571 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m571_ftn) (GUIStyle_t134 *);
	static GUIStyle_Cleanup_m571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m572 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m572_ftn) (GUIStyle_t134 *);
	static GUIStyle_get_name_m572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m572_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m573 (GUIStyle_t134 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_name_m573_ftn) (GUIStyle_t134 *, String_t*);
	static GUIStyle_set_name_m573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_name_m573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern TypeInfo* GUIStyleState_t150_il2cpp_TypeInfo_var;
extern "C" GUIStyleState_t150 * GUIStyle_get_normal_m574 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyleState_t150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIStyleState_t150 * L_0 = (__this->___m_Normal_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetStyleStatePtr_m575(__this, 0, /*hidden argument*/NULL);
		GUIStyleState_t150 * L_2 = (GUIStyleState_t150 *)il2cpp_codegen_object_new (GUIStyleState_t150_il2cpp_TypeInfo_var);
		GUIStyleState__ctor_m543(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Normal_1 = L_2;
	}

IL_001e:
	{
		GUIStyleState_t150 * L_3 = (__this->___m_Normal_1);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m575 (GUIStyle_t134 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetStyleStatePtr_m575_ftn) (GUIStyle_t134 *, int32_t);
	static GUIStyle_GetStyleStatePtr_m575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern TypeInfo* RectOffset_t138_il2cpp_TypeInfo_var;
extern "C" RectOffset_t138 * GUIStyle_get_margin_m576 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t138 * L_0 = (__this->___m_Margin_11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m578(__this, 1, /*hidden argument*/NULL);
		RectOffset_t138 * L_2 = (RectOffset_t138 *)il2cpp_codegen_object_new (RectOffset_t138_il2cpp_TypeInfo_var);
		RectOffset__ctor_m551(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Margin_11 = L_2;
	}

IL_001e:
	{
		RectOffset_t138 * L_3 = (__this->___m_Margin_11);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern TypeInfo* RectOffset_t138_il2cpp_TypeInfo_var;
extern "C" RectOffset_t138 * GUIStyle_get_padding_m577 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t138 * L_0 = (__this->___m_Padding_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m578(__this, 2, /*hidden argument*/NULL);
		RectOffset_t138 * L_2 = (RectOffset_t138 *)il2cpp_codegen_object_new (RectOffset_t138_il2cpp_TypeInfo_var);
		RectOffset__ctor_m551(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___m_Padding_10 = L_2;
	}

IL_001e:
	{
		RectOffset_t138 * L_3 = (__this->___m_Padding_10);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m578 (GUIStyle_t134 * __this, int32_t ___idx, const MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetRectOffsetPtr_m578_ftn) (GUIStyle_t134 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m579 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m579_ftn) (GUIStyle_t134 *);
	static GUIStyle_get_fixedWidth_m579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m580 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m580_ftn) (GUIStyle_t134 *);
	static GUIStyle_get_fixedHeight_m580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m581 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m581_ftn) (GUIStyle_t134 *);
	static GUIStyle_get_stretchWidth_m581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m582 (GUIStyle_t134 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchWidth_m582_ftn) (GUIStyle_t134 *, bool);
	static GUIStyle_set_stretchWidth_m582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchWidth_m582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m583 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m583_ftn) (GUIStyle_t134 *);
	static GUIStyle_get_stretchHeight_m583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m584 (GUIStyle_t134 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchHeight_m584_ftn) (GUIStyle_t134 *, bool);
	static GUIStyle_set_stretchHeight_m584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m585 (Object_t * __this /* static, unused */, Font_t146 * ___font, const MethodInfo* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m585_ftn) (Font_t146 *);
	static GUIStyle_SetDefaultFont_m585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font);
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern TypeInfo* GUIStyle_t134_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t134 * GUIStyle_get_none_m586 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_0 = ((GUIStyle_t134_StaticFields*)GUIStyle_t134_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t134 * L_1 = (GUIStyle_t134 *)il2cpp_codegen_object_new (GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m567(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		((GUIStyle_t134_StaticFields*)GUIStyle_t134_il2cpp_TypeInfo_var->static_fields)->___s_None_15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t134_il2cpp_TypeInfo_var);
		GUIStyle_t134 * L_2 = ((GUIStyle_t134_StaticFields*)GUIStyle_t134_il2cpp_TypeInfo_var->static_fields)->___s_None_15;
		return L_2;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern "C" String_t* GUIStyle_ToString_m587 (GUIStyle_t134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		_stringLiteral91 = il2cpp_codegen_string_literal_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m572(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral91, L_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"



// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m588 (TouchScreenKeyboard_t152 * __this, const MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m588_ftn) (TouchScreenKeyboard_t152 *);
	static TouchScreenKeyboard_Destroy_m588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C" void TouchScreenKeyboard_Finalize_m589 (TouchScreenKeyboard_t152 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		TouchScreenKeyboard_Destroy_m588(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"


// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m590 (Event_t153 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		Event_Init_m591(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m591 (Event_t153 * __this, const MethodInfo* method)
{
	typedef void (*Event_Init_m591_ftn) (Event_t153 *);
	static Event_Init_m591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m592 (Event_t153 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Event_Cleanup_m593(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m593 (Event_t153 * __this, const MethodInfo* method)
{
	typedef void (*Event_Cleanup_m593_ftn) (Event_t153 *);
	static Event_Cleanup_m593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m594 (Event_t153 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m594_ftn) (Event_t153 *);
	static Event_get_type_m594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t66  Event_get_mousePosition_m595 (Event_t153 * __this, const MethodInfo* method)
{
	Vector2_t66  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m596(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t66  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m596 (Event_t153 * __this, Vector2_t66 * ___value, const MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m596_ftn) (Event_t153 *, Vector2_t66 *);
	static Event_Internal_GetMousePosition_m596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m597 (Event_t153 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m597_ftn) (Event_t153 *);
	static Event_get_modifiers_m597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m598 (Event_t153 * __this, const MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m598_ftn) (Event_t153 *);
	static Event_get_character_m598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m599 (Event_t153 * __this, const MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m599_ftn) (Event_t153 *);
	static Event_get_commandName_m599_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m599_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m600 (Event_t153 * __this, const MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m600_ftn) (Event_t153 *);
	static Event_get_keyCode_m600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern TypeInfo* Event_t153_il2cpp_TypeInfo_var;
extern "C" Event_t153 * Event_get_current_m601 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t153 * L_0 = ((Event_t153_StaticFields*)Event_t153_il2cpp_TypeInfo_var->static_fields)->___s_Current_1;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m602 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m602_ftn) (IntPtr_t);
	static Event_Internal_SetNativeEvent_m602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern TypeInfo* Event_t153_il2cpp_TypeInfo_var;
extern "C" void Event_Internal_MakeMasterEventCurrent_m603 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		Event_t153 * L_0 = ((Event_t153_StaticFields*)Event_t153_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Event_t153 * L_1 = (Event_t153 *)il2cpp_codegen_object_new (Event_t153_il2cpp_TypeInfo_var);
		Event__ctor_m590(L_1, /*hidden argument*/NULL);
		((Event_t153_StaticFields*)Event_t153_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2 = L_1;
	}

IL_0014:
	{
		Event_t153 * L_2 = ((Event_t153_StaticFields*)Event_t153_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		((Event_t153_StaticFields*)Event_t153_il2cpp_TypeInfo_var->static_fields)->___s_Current_1 = L_2;
		Event_t153 * L_3 = ((Event_t153_StaticFields*)Event_t153_il2cpp_TypeInfo_var->static_fields)->___s_MasterEvent_2;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m602(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m604 (Event_t153 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m605 (Event_t153 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m606 (Event_t153 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t66  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m604(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m600(__this, /*hidden argument*/NULL);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m605(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t66  L_3 = Event_get_mousePosition_m595(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m610((&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m597(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern TypeInfo* Event_t153_il2cpp_TypeInfo_var;
extern "C" bool Event_Equals_m607 (Event_t153 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Event_t153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	Event_t153 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m171(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1473(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Object_GetType_m1473(__this, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t153 *)Castclass(L_6, Event_t153_il2cpp_TypeInfo_var));
		int32_t L_7 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		Event_t153 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m594(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m597(__this, /*hidden argument*/NULL);
		Event_t153 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m597(L_11, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m604(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m600(__this, /*hidden argument*/NULL);
		Event_t153 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m600(L_15, /*hidden argument*/NULL);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m605(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t66  L_18 = Event_get_mousePosition_m595(__this, /*hidden argument*/NULL);
		Event_t153 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t66  L_20 = Event_get_mousePosition_m595(L_19, /*hidden argument*/NULL);
		bool L_21 = Vector2_op_Equality_m615(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* EventType_t156_il2cpp_TypeInfo_var;
extern TypeInfo* EventModifiers_t157_il2cpp_TypeInfo_var;
extern TypeInfo* KeyCode_t155_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t72_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t66_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral92;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral94;
extern Il2CppCodeGenString* _stringLiteral95;
extern Il2CppCodeGenString* _stringLiteral96;
extern Il2CppCodeGenString* _stringLiteral97;
extern Il2CppCodeGenString* _stringLiteral98;
extern "C" String_t* Event_ToString_m608 (Event_t153 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		EventType_t156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		EventModifiers_t157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(110);
		KeyCode_t155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		Int32_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Vector2_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		_stringLiteral92 = il2cpp_codegen_string_literal_from_index(92);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		_stringLiteral94 = il2cpp_codegen_string_literal_from_index(94);
		_stringLiteral95 = il2cpp_codegen_string_literal_from_index(95);
		_stringLiteral96 = il2cpp_codegen_string_literal_from_index(96);
		_stringLiteral97 = il2cpp_codegen_string_literal_from_index(97);
		_stringLiteral98 = il2cpp_codegen_string_literal_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Event_get_isKey_m604(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m598(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t270* L_2 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(EventType_t156_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		ObjectU5BU5D_t270* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m597(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(EventModifiers_t157_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)L_9;
		ObjectU5BU5D_t270* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m600(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(KeyCode_t155_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2)) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral92, L_10, /*hidden argument*/NULL);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t270* L_15 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, _stringLiteral93);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)_stringLiteral93;
		ObjectU5BU5D_t270* L_16 = L_15;
		int32_t L_17 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(EventType_t156_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1)) = (Object_t *)L_19;
		ObjectU5BU5D_t270* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, _stringLiteral94);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2)) = (Object_t *)_stringLiteral94;
		ObjectU5BU5D_t270* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m598(__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t72_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t270* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, _stringLiteral95);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)_stringLiteral95;
		ObjectU5BU5D_t270* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m597(__this, /*hidden argument*/NULL);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(EventModifiers_t157_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5)) = (Object_t *)L_29;
		ObjectU5BU5D_t270* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, _stringLiteral96);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6)) = (Object_t *)_stringLiteral96;
		ObjectU5BU5D_t270* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m600(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(KeyCode_t155_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7)) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1474(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		String_t* L_36 = UnityString_Format_m813(NULL /*static, unused*/, L_35, ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = Event_get_isMouse_m605(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		ObjectU5BU5D_t270* L_38 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 3));
		int32_t L_39 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(EventType_t156_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 0);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 0)) = (Object_t *)L_41;
		ObjectU5BU5D_t270* L_42 = L_38;
		Vector2_t66  L_43 = Event_get_mousePosition_m595(__this, /*hidden argument*/NULL);
		Vector2_t66  L_44 = L_43;
		Object_t * L_45 = Box(Vector2_t66_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1)) = (Object_t *)L_45;
		ObjectU5BU5D_t270* L_46 = L_42;
		int32_t L_47 = Event_get_modifiers_m597(__this, /*hidden argument*/NULL);
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(EventModifiers_t157_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)L_49;
		String_t* L_50 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral97, L_46, /*hidden argument*/NULL);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		ObjectU5BU5D_t270* L_53 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 2));
		int32_t L_54 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		int32_t L_55 = L_54;
		Object_t * L_56 = Box(EventType_t156_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
		ArrayElementTypeCheck (L_53, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 0)) = (Object_t *)L_56;
		ObjectU5BU5D_t270* L_57 = L_53;
		String_t* L_58 = Event_get_commandName_m599(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 1);
		ArrayElementTypeCheck (L_57, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 1)) = (Object_t *)L_58;
		String_t* L_59 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral98, L_57, /*hidden argument*/NULL);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		int32_t L_61 = Event_get_type_m594(__this, /*hidden argument*/NULL);
		int32_t L_62 = L_61;
		Object_t * L_63 = Box(EventType_t156_il2cpp_TypeInfo_var, &L_62);
		String_t* L_64 = String_Concat_m175(NULL /*static, unused*/, L_60, L_63, /*hidden argument*/NULL);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void Event_t153_marshal(const Event_t153& unmarshaled, Event_t153_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
void Event_t153_marshal_back(const Event_t153_marshaled& marshaled, Event_t153& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void Event_t153_marshal_cleanup(Event_t153_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m259 (Vector2_t66 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral99;
extern "C" String_t* Vector2_ToString_m609 (Vector2_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral99 = il2cpp_codegen_string_literal_from_index(99);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t78_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t78_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral99, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m610 (Vector2_t66 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m1465(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m1465(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern TypeInfo* Vector2_t66_il2cpp_TypeInfo_var;
extern "C" bool Vector2_Equals_m611 (Vector2_t66 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t66  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Vector2_t66_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t66 *)((Vector2_t66 *)UnBox (L_1, Vector2_t66_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m1480(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m1480(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m612 (Object_t * __this /* static, unused */, Vector2_t66  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t66  Vector2_get_zero_m613 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t66  L_0 = {0};
		Vector2__ctor_m259(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t66  Vector2_op_Subtraction_m614 (Object_t * __this /* static, unused */, Vector2_t66  ___a, Vector2_t66  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t66  L_4 = {0};
		Vector2__ctor_m259(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m615 (Object_t * __this /* static, unused */, Vector2_t66  ___lhs, Vector2_t66  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t66  L_0 = ___lhs;
		Vector2_t66  L_1 = ___rhs;
		Vector2_t66  L_2 = Vector2_op_Subtraction_m614(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m612(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"



// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m257 (Vector3_t70 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" int32_t Vector3_GetHashCode_m616 (Vector3_t70 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m1465(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m1465(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m1465(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern TypeInfo* Vector3_t70_il2cpp_TypeInfo_var;
extern "C" bool Vector3_Equals_m617 (Vector3_t70 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t70  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Vector3_t70_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t70 *)((Vector3_t70 *)UnBox (L_1, Vector3_t70_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m1480(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m1480(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m1480(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral100;
extern "C" String_t* Vector3_ToString_m618 (Vector3_t70 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral100 = il2cpp_codegen_string_literal_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t78_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t78_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t78_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral100, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral101;
extern "C" String_t* Vector3_ToString_m619 (Vector3_t70 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		_stringLiteral101 = il2cpp_codegen_string_literal_from_index(101);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m1481(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float* L_5 = &(__this->___y_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m1481(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float* L_9 = &(__this->___z_2);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m1481(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral101, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m620 (Object_t * __this /* static, unused */, Vector3_t70  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___a)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___a)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___a)->___z_2);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern "C" Vector3_t70  Vector3_Min_m621 (Object_t * __this /* static, unused */, Vector3_t70  ___lhs, Vector3_t70  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_0);
		float L_1 = ((&___rhs)->___x_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m745(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_1);
		float L_4 = ((&___rhs)->___y_1);
		float L_5 = Mathf_Min_m745(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_2);
		float L_7 = ((&___rhs)->___z_2);
		float L_8 = Mathf_Min_m745(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t70  L_9 = {0};
		Vector3__ctor_m257(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern "C" Vector3_t70  Vector3_Max_m622 (Object_t * __this /* static, unused */, Vector3_t70  ___lhs, Vector3_t70  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___lhs)->___x_0);
		float L_1 = ((&___rhs)->___x_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m747(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ((&___lhs)->___y_1);
		float L_4 = ((&___rhs)->___y_1);
		float L_5 = Mathf_Max_m747(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___lhs)->___z_2);
		float L_7 = ((&___rhs)->___z_2);
		float L_8 = Mathf_Max_m747(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t70  L_9 = {0};
		Vector3__ctor_m257(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t70  Vector3_get_zero_m623 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = {0};
		Vector3__ctor_m257(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t70  Vector3_get_one_m268 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = {0};
		Vector3__ctor_m257(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t70  Vector3_get_back_m624 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = {0};
		Vector3__ctor_m257(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t70  Vector3_op_Addition_m625 (Object_t * __this /* static, unused */, Vector3_t70  ___a, Vector3_t70  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		Vector3_t70  L_6 = {0};
		Vector3__ctor_m257(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t70  Vector3_op_Subtraction_m626 (Object_t * __this /* static, unused */, Vector3_t70  ___a, Vector3_t70  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		Vector3_t70  L_6 = {0};
		Vector3__ctor_m257(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t70  Vector3_op_Multiply_m269 (Object_t * __this /* static, unused */, Vector3_t70  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_1);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_2);
		float L_5 = ___d;
		Vector3_t70  L_6 = {0};
		Vector3__ctor_m257(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m627 (Object_t * __this /* static, unused */, Vector3_t70  ___lhs, Vector3_t70  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___lhs;
		Vector3_t70  L_1 = ___rhs;
		Vector3_t70  L_2 = Vector3_op_Subtraction_m626(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m275 (Color_t60 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		float L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m628 (Color_t60 * __this, float ___r, float ___g, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral102;
extern "C" String_t* Color_ToString_m629 (Color_t60 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral102 = il2cpp_codegen_string_literal_from_index(102);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t78_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t78_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t78_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t78_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral102, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C" int32_t Color_GetHashCode_m630 (Color_t60 * __this, const MethodInfo* method)
{
	Vector4_t161  V_0 = {0};
	{
		Vector4_t161  L_0 = Color_op_Implicit_m635(NULL /*static, unused*/, (*(Color_t60 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m733((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern TypeInfo* Color_t60_il2cpp_TypeInfo_var;
extern "C" bool Color_Equals_m631 (Color_t60 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	Color_t60  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Color_t60_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Color_t60 *)((Color_t60 *)UnBox (L_1, Color_t60_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___r_0);
		float L_3 = ((&V_0)->___r_0);
		bool L_4 = Single_Equals_m1480(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___g_1);
		float L_6 = ((&V_0)->___g_1);
		bool L_7 = Single_Equals_m1480(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___b_2);
		float L_9 = ((&V_0)->___b_2);
		bool L_10 = Single_Equals_m1480(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___a_3);
		float L_12 = ((&V_0)->___a_3);
		bool L_13 = Single_Equals_m1480(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t60  Color_get_red_m632 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t60  L_0 = {0};
		Color__ctor_m275(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t60  Color_get_white_m633 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Color_t60  L_0 = {0};
		Color__ctor_m275(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t60  Color_op_Multiply_m634 (Object_t * __this /* static, unused */, Color_t60  ___a, float ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t60  L_8 = {0};
		Color__ctor_m275(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t161  Color_op_Implicit_m635 (Object_t * __this /* static, unused */, Color_t60  ___c, const MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		float L_1 = ((&___c)->___g_1);
		float L_2 = ((&___c)->___b_2);
		float L_3 = ((&___c)->___a_3);
		Vector4_t161  L_4 = {0};
		Vector4__ctor_m732(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Color32__ctor_m636 (Color32_t158 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___r;
		__this->___r_0 = L_0;
		uint8_t L_1 = ___g;
		__this->___g_1 = L_1;
		uint8_t L_2 = ___b;
		__this->___b_2 = L_2;
		uint8_t L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t392_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral103;
extern "C" String_t* Color32_ToString_m637 (Color32_t158 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Byte_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(115);
		_stringLiteral103 = il2cpp_codegen_string_literal_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(Byte_t392_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(Byte_t392_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(Byte_t392_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(Byte_t392_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral103, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern "C" Color32_t158  Color32_op_Implicit_m638 (Object_t * __this /* static, unused */, Color_t60  ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___c)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m751(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m751(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m751(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m751(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Color32_t158  L_8 = {0};
		Color32__ctor_m636(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"



// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m639 (Quaternion_t75 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		float L_3 = ___w;
		__this->___w_3 = L_3;
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t75  Quaternion_get_identity_m266 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Quaternion_t75  L_0 = {0};
		Quaternion__ctor_m639(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Quaternion::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral104;
extern "C" String_t* Quaternion_ToString_m640 (Quaternion_t75 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral104 = il2cpp_codegen_string_literal_from_index(104);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t78_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t78_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t78_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t78_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral104, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m641 (Quaternion_t75 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m1465(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m1465(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m1465(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m1465(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern TypeInfo* Quaternion_t75_il2cpp_TypeInfo_var;
extern "C" bool Quaternion_Equals_m642 (Quaternion_t75 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quaternion_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	Quaternion_t75  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Quaternion_t75_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Quaternion_t75 *)((Quaternion_t75 *)UnBox (L_1, Quaternion_t75_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m1480(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m1480(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m1480(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m1480(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m643 (Rect_t121 * __this, float ___left, float ___top, float ___width, float ___height, const MethodInfo* method)
{
	{
		float L_0 = ___left;
		__this->___m_XMin_0 = L_0;
		float L_1 = ___top;
		__this->___m_YMin_1 = L_1;
		float L_2 = ___width;
		__this->___m_Width_2 = L_2;
		float L_3 = ___height;
		__this->___m_Height_3 = L_3;
		return;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m644 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m645 (Rect_t121 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_XMin_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m646 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m647 (Rect_t121 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_YMin_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m648 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m649 (Rect_t121 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Width_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m650 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m651 (Rect_t121 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Height_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m652 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m653 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m654 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m655 (Rect_t121 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral105;
extern "C" String_t* Rect_ToString_m656 (Rect_t121 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral105 = il2cpp_codegen_string_literal_from_index(105);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m644(__this, /*hidden argument*/NULL);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t78_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float L_5 = Rect_get_y_m646(__this, /*hidden argument*/NULL);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t78_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float L_9 = Rect_get_width_m648(__this, /*hidden argument*/NULL);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t78_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		float L_13 = Rect_get_height_m650(__this, /*hidden argument*/NULL);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t78_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral105, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" bool Rect_Contains_m657 (Rect_t121 * __this, Vector3_t70  ___point, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_0);
		float L_1 = Rect_get_xMin_m652(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_0);
		float L_3 = Rect_get_xMax_m654(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_1);
		float L_5 = Rect_get_yMin_m653(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_1);
		float L_7 = Rect_get_yMax_m655(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" int32_t Rect_GetHashCode_m658 (Rect_t121 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m644(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m1465((&V_0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m648(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m1465((&V_1), /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m646(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m1465((&V_2), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m650(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m1465((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern TypeInfo* Rect_t121_il2cpp_TypeInfo_var;
extern "C" bool Rect_Equals_m659 (Rect_t121 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rect_t121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t121  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Rect_t121_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Rect_t121 *)((Rect_t121 *)UnBox (L_1, Rect_t121_il2cpp_TypeInfo_var))));
		float L_2 = Rect_get_x_m644(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Rect_get_x_m644((&V_0), /*hidden argument*/NULL);
		bool L_4 = Single_Equals_m1480((&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = Rect_get_y_m646(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_y_m646((&V_0), /*hidden argument*/NULL);
		bool L_7 = Single_Equals_m1480((&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = Rect_get_width_m648(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = Rect_get_width_m648((&V_0), /*hidden argument*/NULL);
		bool L_10 = Single_Equals_m1480((&V_3), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = Rect_get_height_m650(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = Rect_get_height_m650((&V_0), /*hidden argument*/NULL);
		bool L_13 = Single_Equals_m1480((&V_4), L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"

// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"


// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m660 (Matrix4x4_t159 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = Matrix4x4_get_Item_m662(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m661 (Matrix4x4_t159 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = ___value;
		Matrix4x4_set_Item_m663(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern TypeInfo* IndexOutOfRangeException_t393_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral106;
extern "C" float Matrix4x4_get_Item_m662 (Matrix4x4_t159 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		_stringLiteral106 = il2cpp_codegen_string_literal_from_index(106);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->___m00_0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->___m10_1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->___m20_2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->___m30_3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->___m01_4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->___m11_5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->___m21_6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->___m31_7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->___m02_8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->___m12_9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->___m22_10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->___m32_11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->___m03_12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->___m13_13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->___m23_14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->___m33_15);
		return L_17;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t393 * L_18 = (IndexOutOfRangeException_t393 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t393_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m1482(L_18, _stringLiteral106, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t393_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral106;
extern "C" void Matrix4x4_set_Item_m663 (Matrix4x4_t159 * __this, int32_t ___index, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		_stringLiteral106 = il2cpp_codegen_string_literal_from_index(106);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = ___value;
		__this->___m00_0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = ___value;
		__this->___m10_1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = ___value;
		__this->___m20_2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = ___value;
		__this->___m30_3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = ___value;
		__this->___m01_4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = ___value;
		__this->___m11_5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = ___value;
		__this->___m21_6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = ___value;
		__this->___m31_7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = ___value;
		__this->___m02_8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = ___value;
		__this->___m12_9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = ___value;
		__this->___m22_10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = ___value;
		__this->___m32_11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = ___value;
		__this->___m03_12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = ___value;
		__this->___m13_13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = ___value;
		__this->___m23_14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = ___value;
		__this->___m33_15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t393 * L_18 = (IndexOutOfRangeException_t393 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t393_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m1482(L_18, _stringLiteral106, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C" int32_t Matrix4x4_GetHashCode_m664 (Matrix4x4_t159 * __this, const MethodInfo* method)
{
	Vector4_t161  V_0 = {0};
	Vector4_t161  V_1 = {0};
	Vector4_t161  V_2 = {0};
	Vector4_t161  V_3 = {0};
	{
		Vector4_t161  L_0 = Matrix4x4_GetColumn_m675(__this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m733((&V_0), /*hidden argument*/NULL);
		Vector4_t161  L_2 = Matrix4x4_GetColumn_m675(__this, 1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m733((&V_1), /*hidden argument*/NULL);
		Vector4_t161  L_4 = Matrix4x4_GetColumn_m675(__this, 2, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m733((&V_2), /*hidden argument*/NULL);
		Vector4_t161  L_6 = Matrix4x4_GetColumn_m675(__this, 3, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m733((&V_3), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern TypeInfo* Matrix4x4_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Vector4_t161_il2cpp_TypeInfo_var;
extern "C" bool Matrix4x4_Equals_m665 (Matrix4x4_t159 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Vector4_t161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t159  V_0 = {0};
	Vector4_t161  V_1 = {0};
	Vector4_t161  V_2 = {0};
	Vector4_t161  V_3 = {0};
	Vector4_t161  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Matrix4x4_t159_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Matrix4x4_t159 *)((Matrix4x4_t159 *)UnBox (L_1, Matrix4x4_t159_il2cpp_TypeInfo_var))));
		Vector4_t161  L_2 = Matrix4x4_GetColumn_m675(__this, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector4_t161  L_3 = Matrix4x4_GetColumn_m675((&V_0), 0, /*hidden argument*/NULL);
		Vector4_t161  L_4 = L_3;
		Object_t * L_5 = Box(Vector4_t161_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector4_Equals_m734((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t161  L_7 = Matrix4x4_GetColumn_m675(__this, 1, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector4_t161  L_8 = Matrix4x4_GetColumn_m675((&V_0), 1, /*hidden argument*/NULL);
		Vector4_t161  L_9 = L_8;
		Object_t * L_10 = Box(Vector4_t161_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector4_Equals_m734((&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t161  L_12 = Matrix4x4_GetColumn_m675(__this, 2, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector4_t161  L_13 = Matrix4x4_GetColumn_m675((&V_0), 2, /*hidden argument*/NULL);
		Vector4_t161  L_14 = L_13;
		Object_t * L_15 = Box(Vector4_t161_il2cpp_TypeInfo_var, &L_14);
		bool L_16 = Vector4_Equals_m734((&V_3), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t161  L_17 = Matrix4x4_GetColumn_m675(__this, 3, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector4_t161  L_18 = Matrix4x4_GetColumn_m675((&V_0), 3, /*hidden argument*/NULL);
		Vector4_t161  L_19 = L_18;
		Object_t * L_20 = Box(Vector4_t161_il2cpp_TypeInfo_var, &L_19);
		bool L_21 = Vector4_Equals_m734((&V_4), L_20, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t159  Matrix4x4_Inverse_m666 (Object_t * __this /* static, unused */, Matrix4x4_t159  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t159  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m667(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t159  Matrix4x4_INTERNAL_CALL_Inverse_m667 (Object_t * __this /* static, unused */, Matrix4x4_t159 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t159  (*Matrix4x4_INTERNAL_CALL_Inverse_m667_ftn) (Matrix4x4_t159 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t159  Matrix4x4_Transpose_m668 (Object_t * __this /* static, unused */, Matrix4x4_t159  ___m, const MethodInfo* method)
{
	{
		Matrix4x4_t159  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m669(NULL /*static, unused*/, (&___m), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t159  Matrix4x4_INTERNAL_CALL_Transpose_m669 (Object_t * __this /* static, unused */, Matrix4x4_t159 * ___m, const MethodInfo* method)
{
	typedef Matrix4x4_t159  (*Matrix4x4_INTERNAL_CALL_Transpose_m669_ftn) (Matrix4x4_t159 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_Invert_m670 (Object_t * __this /* static, unused */, Matrix4x4_t159  ___inMatrix, Matrix4x4_t159 * ___dest, const MethodInfo* method)
{
	{
		Matrix4x4_t159 * L_0 = ___dest;
		bool L_1 = Matrix4x4_INTERNAL_CALL_Invert_m671(NULL /*static, unused*/, (&___inMatrix), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m671 (Object_t * __this /* static, unused */, Matrix4x4_t159 * ___inMatrix, Matrix4x4_t159 * ___dest, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m671_ftn) (Matrix4x4_t159 *, Matrix4x4_t159 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" Matrix4x4_t159  Matrix4x4_get_inverse_m672 (Matrix4x4_t159 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t159  L_0 = Matrix4x4_Inverse_m666(NULL /*static, unused*/, (*(Matrix4x4_t159 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C" Matrix4x4_t159  Matrix4x4_get_transpose_m673 (Matrix4x4_t159 * __this, const MethodInfo* method)
{
	{
		Matrix4x4_t159  L_0 = Matrix4x4_Transpose_m668(NULL /*static, unused*/, (*(Matrix4x4_t159 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C" bool Matrix4x4_get_isIdentity_m674 (Matrix4x4_t159 * __this, const MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m674_ftn) (Matrix4x4_t159 *);
	static Matrix4x4_get_isIdentity_m674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t161  Matrix4x4_GetColumn_m675 (Matrix4x4_t159 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m660(__this, 0, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m660(__this, 1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m660(__this, 2, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m660(__this, 3, L_6, /*hidden argument*/NULL);
		Vector4_t161  L_8 = {0};
		Vector4__ctor_m732(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C" Vector4_t161  Matrix4x4_GetRow_m676 (Matrix4x4_t159 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m660(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m660(__this, L_2, 1, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m660(__this, L_4, 2, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m660(__this, L_6, 3, /*hidden argument*/NULL);
		Vector4_t161  L_8 = {0};
		Vector4__ctor_m732(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetColumn_m677 (Matrix4x4_t159 * __this, int32_t ___i, Vector4_t161  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_0);
		Matrix4x4_set_Item_m661(__this, 0, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_1);
		Matrix4x4_set_Item_m661(__this, 1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_2);
		Matrix4x4_set_Item_m661(__this, 2, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_3);
		Matrix4x4_set_Item_m661(__this, 3, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C" void Matrix4x4_SetRow_m678 (Matrix4x4_t159 * __this, int32_t ___i, Vector4_t161  ___v, const MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_0);
		Matrix4x4_set_Item_m661(__this, L_0, 0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_1);
		Matrix4x4_set_Item_m661(__this, L_2, 1, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_2);
		Matrix4x4_set_Item_m661(__this, L_4, 2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_3);
		Matrix4x4_set_Item_m661(__this, L_6, 3, L_7, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C" Vector3_t70  Matrix4x4_MultiplyPoint_m679 (Matrix4x4_t159 * __this, Vector3_t70  ___v, const MethodInfo* method)
{
	Vector3_t70  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_0);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_1);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_2);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_0);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_1);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_2);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_0);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_1);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_2);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		float L_22 = ((&___v)->___x_0);
		float L_23 = (__this->___m31_7);
		float L_24 = ((&___v)->___y_1);
		float L_25 = (__this->___m32_11);
		float L_26 = ((&___v)->___z_2);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		Vector3_t70 * L_29 = (&V_0);
		float L_30 = (L_29->___x_0);
		float L_31 = V_1;
		L_29->___x_0 = ((float)((float)L_30*(float)L_31));
		Vector3_t70 * L_32 = (&V_0);
		float L_33 = (L_32->___y_1);
		float L_34 = V_1;
		L_32->___y_1 = ((float)((float)L_33*(float)L_34));
		Vector3_t70 * L_35 = (&V_0);
		float L_36 = (L_35->___z_2);
		float L_37 = V_1;
		L_35->___z_2 = ((float)((float)L_36*(float)L_37));
		Vector3_t70  L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t70  Matrix4x4_MultiplyPoint3x4_m680 (Matrix4x4_t159 * __this, Vector3_t70  ___v, const MethodInfo* method)
{
	Vector3_t70  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_0);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_1);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_2);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_0);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_1);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_2);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_0);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_1);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_2);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		Vector3_t70  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" Vector3_t70  Matrix4x4_MultiplyVector_m681 (Matrix4x4_t159 * __this, Vector3_t70  ___v, const MethodInfo* method)
{
	Vector3_t70  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_0);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_1);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_2);
		(&V_0)->___x_0 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		float L_7 = ((&___v)->___x_0);
		float L_8 = (__this->___m11_5);
		float L_9 = ((&___v)->___y_1);
		float L_10 = (__this->___m12_9);
		float L_11 = ((&___v)->___z_2);
		(&V_0)->___y_1 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		float L_13 = ((&___v)->___x_0);
		float L_14 = (__this->___m21_6);
		float L_15 = ((&___v)->___y_1);
		float L_16 = (__this->___m22_10);
		float L_17 = ((&___v)->___z_2);
		(&V_0)->___z_2 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		Vector3_t70  L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern TypeInfo* Matrix4x4_t159_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t159  Matrix4x4_Scale_m682 (Object_t * __this /* static, unused */, Vector3_t70  ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t159  V_0 = {0};
	{
		Initobj (Matrix4x4_t159_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___v)->___x_0);
		(&V_0)->___m00_0 = L_0;
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		float L_1 = ((&___v)->___y_1);
		(&V_0)->___m11_5 = L_1;
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		float L_2 = ((&___v)->___z_2);
		(&V_0)->___m22_10 = L_2;
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t159  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern TypeInfo* Matrix4x4_t159_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t159  Matrix4x4_get_zero_m683 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t159  V_0 = {0};
	{
		Initobj (Matrix4x4_t159_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (0.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (0.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (0.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (0.0f);
		Matrix4x4_t159  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern TypeInfo* Matrix4x4_t159_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t159  Matrix4x4_get_identity_m684 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t159  V_0 = {0};
	{
		Initobj (Matrix4x4_t159_il2cpp_TypeInfo_var, (&V_0));
		(&V_0)->___m00_0 = (1.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (1.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (1.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t159  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Matrix4x4_SetTRS_m685 (Matrix4x4_t159 * __this, Vector3_t70  ___pos, Quaternion_t75  ___q, Vector3_t70  ___s, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___pos;
		Quaternion_t75  L_1 = ___q;
		Vector3_t70  L_2 = ___s;
		Matrix4x4_t159  L_3 = Matrix4x4_TRS_m686(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		*__this = L_3;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t159  Matrix4x4_TRS_m686 (Object_t * __this /* static, unused */, Vector3_t70  ___pos, Quaternion_t75  ___q, Vector3_t70  ___s, const MethodInfo* method)
{
	{
		Matrix4x4_t159  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m687(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t159  Matrix4x4_INTERNAL_CALL_TRS_m687 (Object_t * __this /* static, unused */, Vector3_t70 * ___pos, Quaternion_t75 * ___q, Vector3_t70 * ___s, const MethodInfo* method)
{
	typedef Matrix4x4_t159  (*Matrix4x4_INTERNAL_CALL_TRS_m687_ftn) (Vector3_t70 *, Quaternion_t75 *, Vector3_t70 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral107;
extern "C" String_t* Matrix4x4_ToString_m688 (Matrix4x4_t159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t78_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t78_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t78_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t78_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t270* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t78_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t270* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(Single_t78_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t270* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(Single_t78_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t270* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(Single_t78_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t270* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t78_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t270* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(Single_t78_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t270* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(Single_t78_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t270* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(Single_t78_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t270* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(Single_t78_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t270* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(Single_t78_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t270* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(Single_t78_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t270* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(Single_t78_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral107, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral108;
extern "C" String_t* Matrix4x4_ToString_m689 (Matrix4x4_t159 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		_stringLiteral108 = il2cpp_codegen_string_literal_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m1481(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float* L_5 = &(__this->___m01_4);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m1481(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float* L_9 = &(__this->___m02_8);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m1481(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		float* L_13 = &(__this->___m03_12);
		String_t* L_14 = ___format;
		String_t* L_15 = Single_ToString_m1481(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t270* L_16 = L_12;
		float* L_17 = &(__this->___m10_1);
		String_t* L_18 = ___format;
		String_t* L_19 = Single_ToString_m1481(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t270* L_20 = L_16;
		float* L_21 = &(__this->___m11_5);
		String_t* L_22 = ___format;
		String_t* L_23 = Single_ToString_m1481(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t270* L_24 = L_20;
		float* L_25 = &(__this->___m12_9);
		String_t* L_26 = ___format;
		String_t* L_27 = Single_ToString_m1481(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t270* L_28 = L_24;
		float* L_29 = &(__this->___m13_13);
		String_t* L_30 = ___format;
		String_t* L_31 = Single_ToString_m1481(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t270* L_32 = L_28;
		float* L_33 = &(__this->___m20_2);
		String_t* L_34 = ___format;
		String_t* L_35 = Single_ToString_m1481(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t270* L_36 = L_32;
		float* L_37 = &(__this->___m21_6);
		String_t* L_38 = ___format;
		String_t* L_39 = Single_ToString_m1481(L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t270* L_40 = L_36;
		float* L_41 = &(__this->___m22_10);
		String_t* L_42 = ___format;
		String_t* L_43 = Single_ToString_m1481(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t270* L_44 = L_40;
		float* L_45 = &(__this->___m23_14);
		String_t* L_46 = ___format;
		String_t* L_47 = Single_ToString_m1481(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t270* L_48 = L_44;
		float* L_49 = &(__this->___m30_3);
		String_t* L_50 = ___format;
		String_t* L_51 = Single_ToString_m1481(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t270* L_52 = L_48;
		float* L_53 = &(__this->___m31_7);
		String_t* L_54 = ___format;
		String_t* L_55 = Single_ToString_m1481(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t270* L_56 = L_52;
		float* L_57 = &(__this->___m32_11);
		String_t* L_58 = ___format;
		String_t* L_59 = Single_ToString_m1481(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t270* L_60 = L_56;
		float* L_61 = &(__this->___m33_15);
		String_t* L_62 = ___format;
		String_t* L_63 = Single_ToString_m1481(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral108, L_60, /*hidden argument*/NULL);
		return L_64;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t159  Matrix4x4_Ortho_m690 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t159  (*Matrix4x4_Ortho_m690_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t159  Matrix4x4_Perspective_m691 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, const MethodInfo* method)
{
	typedef Matrix4x4_t159  (*Matrix4x4_Perspective_m691_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern TypeInfo* Matrix4x4_t159_il2cpp_TypeInfo_var;
extern "C" Matrix4x4_t159  Matrix4x4_op_Multiply_m692 (Object_t * __this /* static, unused */, Matrix4x4_t159  ___lhs, Matrix4x4_t159  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Matrix4x4_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		s_Il2CppMethodIntialized = true;
	}
	Matrix4x4_t159  V_0 = {0};
	{
		Initobj (Matrix4x4_t159_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___rhs)->___m00_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___rhs)->___m10_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___rhs)->___m20_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___rhs)->___m30_3);
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m00_0);
		float L_9 = ((&___rhs)->___m01_4);
		float L_10 = ((&___lhs)->___m01_4);
		float L_11 = ((&___rhs)->___m11_5);
		float L_12 = ((&___lhs)->___m02_8);
		float L_13 = ((&___rhs)->___m21_6);
		float L_14 = ((&___lhs)->___m03_12);
		float L_15 = ((&___rhs)->___m31_7);
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m00_0);
		float L_17 = ((&___rhs)->___m02_8);
		float L_18 = ((&___lhs)->___m01_4);
		float L_19 = ((&___rhs)->___m12_9);
		float L_20 = ((&___lhs)->___m02_8);
		float L_21 = ((&___rhs)->___m22_10);
		float L_22 = ((&___lhs)->___m03_12);
		float L_23 = ((&___rhs)->___m32_11);
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m00_0);
		float L_25 = ((&___rhs)->___m03_12);
		float L_26 = ((&___lhs)->___m01_4);
		float L_27 = ((&___rhs)->___m13_13);
		float L_28 = ((&___lhs)->___m02_8);
		float L_29 = ((&___rhs)->___m23_14);
		float L_30 = ((&___lhs)->___m03_12);
		float L_31 = ((&___rhs)->___m33_15);
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&___lhs)->___m10_1);
		float L_33 = ((&___rhs)->___m00_0);
		float L_34 = ((&___lhs)->___m11_5);
		float L_35 = ((&___rhs)->___m10_1);
		float L_36 = ((&___lhs)->___m12_9);
		float L_37 = ((&___rhs)->___m20_2);
		float L_38 = ((&___lhs)->___m13_13);
		float L_39 = ((&___rhs)->___m30_3);
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&___lhs)->___m10_1);
		float L_41 = ((&___rhs)->___m01_4);
		float L_42 = ((&___lhs)->___m11_5);
		float L_43 = ((&___rhs)->___m11_5);
		float L_44 = ((&___lhs)->___m12_9);
		float L_45 = ((&___rhs)->___m21_6);
		float L_46 = ((&___lhs)->___m13_13);
		float L_47 = ((&___rhs)->___m31_7);
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&___lhs)->___m10_1);
		float L_49 = ((&___rhs)->___m02_8);
		float L_50 = ((&___lhs)->___m11_5);
		float L_51 = ((&___rhs)->___m12_9);
		float L_52 = ((&___lhs)->___m12_9);
		float L_53 = ((&___rhs)->___m22_10);
		float L_54 = ((&___lhs)->___m13_13);
		float L_55 = ((&___rhs)->___m32_11);
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&___lhs)->___m10_1);
		float L_57 = ((&___rhs)->___m03_12);
		float L_58 = ((&___lhs)->___m11_5);
		float L_59 = ((&___rhs)->___m13_13);
		float L_60 = ((&___lhs)->___m12_9);
		float L_61 = ((&___rhs)->___m23_14);
		float L_62 = ((&___lhs)->___m13_13);
		float L_63 = ((&___rhs)->___m33_15);
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&___lhs)->___m20_2);
		float L_65 = ((&___rhs)->___m00_0);
		float L_66 = ((&___lhs)->___m21_6);
		float L_67 = ((&___rhs)->___m10_1);
		float L_68 = ((&___lhs)->___m22_10);
		float L_69 = ((&___rhs)->___m20_2);
		float L_70 = ((&___lhs)->___m23_14);
		float L_71 = ((&___rhs)->___m30_3);
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&___lhs)->___m20_2);
		float L_73 = ((&___rhs)->___m01_4);
		float L_74 = ((&___lhs)->___m21_6);
		float L_75 = ((&___rhs)->___m11_5);
		float L_76 = ((&___lhs)->___m22_10);
		float L_77 = ((&___rhs)->___m21_6);
		float L_78 = ((&___lhs)->___m23_14);
		float L_79 = ((&___rhs)->___m31_7);
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&___lhs)->___m20_2);
		float L_81 = ((&___rhs)->___m02_8);
		float L_82 = ((&___lhs)->___m21_6);
		float L_83 = ((&___rhs)->___m12_9);
		float L_84 = ((&___lhs)->___m22_10);
		float L_85 = ((&___rhs)->___m22_10);
		float L_86 = ((&___lhs)->___m23_14);
		float L_87 = ((&___rhs)->___m32_11);
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&___lhs)->___m20_2);
		float L_89 = ((&___rhs)->___m03_12);
		float L_90 = ((&___lhs)->___m21_6);
		float L_91 = ((&___rhs)->___m13_13);
		float L_92 = ((&___lhs)->___m22_10);
		float L_93 = ((&___rhs)->___m23_14);
		float L_94 = ((&___lhs)->___m23_14);
		float L_95 = ((&___rhs)->___m33_15);
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&___lhs)->___m30_3);
		float L_97 = ((&___rhs)->___m00_0);
		float L_98 = ((&___lhs)->___m31_7);
		float L_99 = ((&___rhs)->___m10_1);
		float L_100 = ((&___lhs)->___m32_11);
		float L_101 = ((&___rhs)->___m20_2);
		float L_102 = ((&___lhs)->___m33_15);
		float L_103 = ((&___rhs)->___m30_3);
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&___lhs)->___m30_3);
		float L_105 = ((&___rhs)->___m01_4);
		float L_106 = ((&___lhs)->___m31_7);
		float L_107 = ((&___rhs)->___m11_5);
		float L_108 = ((&___lhs)->___m32_11);
		float L_109 = ((&___rhs)->___m21_6);
		float L_110 = ((&___lhs)->___m33_15);
		float L_111 = ((&___rhs)->___m31_7);
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&___lhs)->___m30_3);
		float L_113 = ((&___rhs)->___m02_8);
		float L_114 = ((&___lhs)->___m31_7);
		float L_115 = ((&___rhs)->___m12_9);
		float L_116 = ((&___lhs)->___m32_11);
		float L_117 = ((&___rhs)->___m22_10);
		float L_118 = ((&___lhs)->___m33_15);
		float L_119 = ((&___rhs)->___m32_11);
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&___lhs)->___m30_3);
		float L_121 = ((&___rhs)->___m03_12);
		float L_122 = ((&___lhs)->___m31_7);
		float L_123 = ((&___rhs)->___m13_13);
		float L_124 = ((&___lhs)->___m32_11);
		float L_125 = ((&___rhs)->___m23_14);
		float L_126 = ((&___lhs)->___m33_15);
		float L_127 = ((&___rhs)->___m33_15);
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		Matrix4x4_t159  L_128 = V_0;
		return L_128;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C" Vector4_t161  Matrix4x4_op_Multiply_m693 (Object_t * __this /* static, unused */, Matrix4x4_t159  ___lhs, Vector4_t161  ___v, const MethodInfo* method)
{
	Vector4_t161  V_0 = {0};
	{
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___v)->___x_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___v)->___y_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___v)->___z_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___v)->___w_3);
		(&V_0)->___x_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m10_1);
		float L_9 = ((&___v)->___x_0);
		float L_10 = ((&___lhs)->___m11_5);
		float L_11 = ((&___v)->___y_1);
		float L_12 = ((&___lhs)->___m12_9);
		float L_13 = ((&___v)->___z_2);
		float L_14 = ((&___lhs)->___m13_13);
		float L_15 = ((&___v)->___w_3);
		(&V_0)->___y_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m20_2);
		float L_17 = ((&___v)->___x_0);
		float L_18 = ((&___lhs)->___m21_6);
		float L_19 = ((&___v)->___y_1);
		float L_20 = ((&___lhs)->___m22_10);
		float L_21 = ((&___v)->___z_2);
		float L_22 = ((&___lhs)->___m23_14);
		float L_23 = ((&___v)->___w_3);
		(&V_0)->___z_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m30_3);
		float L_25 = ((&___v)->___x_0);
		float L_26 = ((&___lhs)->___m31_7);
		float L_27 = ((&___v)->___y_1);
		float L_28 = ((&___lhs)->___m32_11);
		float L_29 = ((&___v)->___z_2);
		float L_30 = ((&___lhs)->___m33_15);
		float L_31 = ((&___v)->___w_3);
		(&V_0)->___w_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		Vector4_t161  L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m694 (Object_t * __this /* static, unused */, Matrix4x4_t159  ___lhs, Matrix4x4_t159  ___rhs, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t161  L_0 = Matrix4x4_GetColumn_m675((&___lhs), 0, /*hidden argument*/NULL);
		Vector4_t161  L_1 = Matrix4x4_GetColumn_m675((&___rhs), 0, /*hidden argument*/NULL);
		bool L_2 = Vector4_op_Equality_m739(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t161  L_3 = Matrix4x4_GetColumn_m675((&___lhs), 1, /*hidden argument*/NULL);
		Vector4_t161  L_4 = Matrix4x4_GetColumn_m675((&___rhs), 1, /*hidden argument*/NULL);
		bool L_5 = Vector4_op_Equality_m739(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t161  L_6 = Matrix4x4_GetColumn_m675((&___lhs), 2, /*hidden argument*/NULL);
		Vector4_t161  L_7 = Matrix4x4_GetColumn_m675((&___rhs), 2, /*hidden argument*/NULL);
		bool L_8 = Vector4_op_Equality_m739(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t161  L_9 = Matrix4x4_GetColumn_m675((&___lhs), 3, /*hidden argument*/NULL);
		Vector4_t161  L_10 = Matrix4x4_GetColumn_m675((&___rhs), 3, /*hidden argument*/NULL);
		bool L_11 = Vector4_op_Equality_m739(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Inequality_m695 (Object_t * __this /* static, unused */, Matrix4x4_t159  ___lhs, Matrix4x4_t159  ___rhs, const MethodInfo* method)
{
	{
		Matrix4x4_t159  L_0 = ___lhs;
		Matrix4x4_t159  L_1 = ___rhs;
		bool L_2 = Matrix4x4_op_Equality_m694(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"

// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"


// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds__ctor_m696 (Bounds_t160 * __this, Vector3_t70  ___center, Vector3_t70  ___size, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___center;
		__this->___m_Center_0 = L_0;
		Vector3_t70  L_1 = ___size;
		Vector3_t70  L_2 = Vector3_op_Multiply_m269(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C" int32_t Bounds_GetHashCode_m697 (Bounds_t160 * __this, const MethodInfo* method)
{
	Vector3_t70  V_0 = {0};
	Vector3_t70  V_1 = {0};
	{
		Vector3_t70  L_0 = Bounds_get_center_m699(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m616((&V_0), /*hidden argument*/NULL);
		Vector3_t70  L_2 = Bounds_get_extents_m703(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m616((&V_1), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern TypeInfo* Bounds_t160_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t70_il2cpp_TypeInfo_var;
extern "C" bool Bounds_Equals_m698 (Bounds_t160 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(120);
		Vector3_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t160  V_0 = {0};
	Vector3_t70  V_1 = {0};
	Vector3_t70  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Bounds_t160_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Bounds_t160 *)((Bounds_t160 *)UnBox (L_1, Bounds_t160_il2cpp_TypeInfo_var))));
		Vector3_t70  L_2 = Bounds_get_center_m699(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t70  L_3 = Bounds_get_center_m699((&V_0), /*hidden argument*/NULL);
		Vector3_t70  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t70_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = Vector3_Equals_m617((&V_1), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t70  L_7 = Bounds_get_extents_m703(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector3_t70  L_8 = Bounds_get_extents_m703((&V_0), /*hidden argument*/NULL);
		Vector3_t70  L_9 = L_8;
		Object_t * L_10 = Box(Vector3_t70_il2cpp_TypeInfo_var, &L_9);
		bool L_11 = Vector3_Equals_m617((&V_2), L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t70  Bounds_get_center_m699 (Bounds_t160 * __this, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m700 (Bounds_t160 * __this, Vector3_t70  ___value, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___value;
		__this->___m_Center_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t70  Bounds_get_size_m701 (Bounds_t160 * __this, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = (__this->___m_Extents_1);
		Vector3_t70  L_1 = Vector3_op_Multiply_m269(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m702 (Bounds_t160 * __this, Vector3_t70  ___value, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___value;
		Vector3_t70  L_1 = Vector3_op_Multiply_m269(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/NULL);
		__this->___m_Extents_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t70  Bounds_get_extents_m703 (Bounds_t160 * __this, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m704 (Bounds_t160 * __this, Vector3_t70  ___value, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___value;
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t70  Bounds_get_min_m705 (Bounds_t160 * __this, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Bounds_get_center_m699(__this, /*hidden argument*/NULL);
		Vector3_t70  L_1 = Bounds_get_extents_m703(__this, /*hidden argument*/NULL);
		Vector3_t70  L_2 = Vector3_op_Subtraction_m626(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C" void Bounds_set_min_m706 (Bounds_t160 * __this, Vector3_t70  ___value, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___value;
		Vector3_t70  L_1 = Bounds_get_max_m707(__this, /*hidden argument*/NULL);
		Bounds_SetMinMax_m709(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t70  Bounds_get_max_m707 (Bounds_t160 * __this, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Bounds_get_center_m699(__this, /*hidden argument*/NULL);
		Vector3_t70  L_1 = Bounds_get_extents_m703(__this, /*hidden argument*/NULL);
		Vector3_t70  L_2 = Vector3_op_Addition_m625(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C" void Bounds_set_max_m708 (Bounds_t160 * __this, Vector3_t70  ___value, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Bounds_get_min_m705(__this, /*hidden argument*/NULL);
		Vector3_t70  L_1 = ___value;
		Bounds_SetMinMax_m709(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m709 (Bounds_t160 * __this, Vector3_t70  ___min, Vector3_t70  ___max, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___max;
		Vector3_t70  L_1 = ___min;
		Vector3_t70  L_2 = Vector3_op_Subtraction_m626(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t70  L_3 = Vector3_op_Multiply_m269(NULL /*static, unused*/, L_2, (0.5f), /*hidden argument*/NULL);
		Bounds_set_extents_m704(__this, L_3, /*hidden argument*/NULL);
		Vector3_t70  L_4 = ___min;
		Vector3_t70  L_5 = Bounds_get_extents_m703(__this, /*hidden argument*/NULL);
		Vector3_t70  L_6 = Vector3_op_Addition_m625(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Bounds_set_center_m700(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m710 (Bounds_t160 * __this, Vector3_t70  ___point, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Bounds_get_min_m705(__this, /*hidden argument*/NULL);
		Vector3_t70  L_1 = ___point;
		Vector3_t70  L_2 = Vector3_Min_m621(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t70  L_3 = Bounds_get_max_m707(__this, /*hidden argument*/NULL);
		Vector3_t70  L_4 = ___point;
		Vector3_t70  L_5 = Vector3_Max_m622(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_SetMinMax_m709(__this, L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern "C" void Bounds_Encapsulate_m711 (Bounds_t160 * __this, Bounds_t160  ___bounds, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Bounds_get_center_m699((&___bounds), /*hidden argument*/NULL);
		Vector3_t70  L_1 = Bounds_get_extents_m703((&___bounds), /*hidden argument*/NULL);
		Vector3_t70  L_2 = Vector3_op_Subtraction_m626(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Bounds_Encapsulate_m710(__this, L_2, /*hidden argument*/NULL);
		Vector3_t70  L_3 = Bounds_get_center_m699((&___bounds), /*hidden argument*/NULL);
		Vector3_t70  L_4 = Bounds_get_extents_m703((&___bounds), /*hidden argument*/NULL);
		Vector3_t70  L_5 = Vector3_op_Addition_m625(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Bounds_Encapsulate_m710(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern "C" void Bounds_Expand_m712 (Bounds_t160 * __this, float ___amount, const MethodInfo* method)
{
	{
		float L_0 = ___amount;
		___amount = ((float)((float)L_0*(float)(0.5f)));
		Vector3_t70  L_1 = Bounds_get_extents_m703(__this, /*hidden argument*/NULL);
		float L_2 = ___amount;
		float L_3 = ___amount;
		float L_4 = ___amount;
		Vector3_t70  L_5 = {0};
		Vector3__ctor_m257(&L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t70  L_6 = Vector3_op_Addition_m625(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/NULL);
		Bounds_set_extents_m704(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" void Bounds_Expand_m713 (Bounds_t160 * __this, Vector3_t70  ___amount, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Bounds_get_extents_m703(__this, /*hidden argument*/NULL);
		Vector3_t70  L_1 = ___amount;
		Vector3_t70  L_2 = Vector3_op_Multiply_m269(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		Vector3_t70  L_3 = Vector3_op_Addition_m625(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Bounds_set_extents_m704(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" bool Bounds_Intersects_m714 (Bounds_t160 * __this, Bounds_t160  ___bounds, const MethodInfo* method)
{
	Vector3_t70  V_0 = {0};
	Vector3_t70  V_1 = {0};
	Vector3_t70  V_2 = {0};
	Vector3_t70  V_3 = {0};
	Vector3_t70  V_4 = {0};
	Vector3_t70  V_5 = {0};
	Vector3_t70  V_6 = {0};
	Vector3_t70  V_7 = {0};
	Vector3_t70  V_8 = {0};
	Vector3_t70  V_9 = {0};
	Vector3_t70  V_10 = {0};
	Vector3_t70  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		Vector3_t70  L_0 = Bounds_get_min_m705(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_0);
		Vector3_t70  L_2 = Bounds_get_max_m707((&___bounds), /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_0);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t70  L_4 = Bounds_get_max_m707(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_0);
		Vector3_t70  L_6 = Bounds_get_min_m705((&___bounds), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_0);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t70  L_8 = Bounds_get_min_m705(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_1);
		Vector3_t70  L_10 = Bounds_get_max_m707((&___bounds), /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = ((&V_5)->___y_1);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t70  L_12 = Bounds_get_max_m707(__this, /*hidden argument*/NULL);
		V_6 = L_12;
		float L_13 = ((&V_6)->___y_1);
		Vector3_t70  L_14 = Bounds_get_min_m705((&___bounds), /*hidden argument*/NULL);
		V_7 = L_14;
		float L_15 = ((&V_7)->___y_1);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t70  L_16 = Bounds_get_min_m705(__this, /*hidden argument*/NULL);
		V_8 = L_16;
		float L_17 = ((&V_8)->___z_2);
		Vector3_t70  L_18 = Bounds_get_max_m707((&___bounds), /*hidden argument*/NULL);
		V_9 = L_18;
		float L_19 = ((&V_9)->___z_2);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t70  L_20 = Bounds_get_max_m707(__this, /*hidden argument*/NULL);
		V_10 = L_20;
		float L_21 = ((&V_10)->___z_2);
		Vector3_t70  L_22 = Bounds_get_min_m705((&___bounds), /*hidden argument*/NULL);
		V_11 = L_22;
		float L_23 = ((&V_11)->___z_2);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m715 (Object_t * __this /* static, unused */, Bounds_t160  ___m, Vector3_t70  ___point, const MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m716(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m716 (Object_t * __this /* static, unused */, Bounds_t160 * ___m, Vector3_t70 * ___point, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m716_ftn) (Bounds_t160 *, Vector3_t70 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m716_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m716_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" bool Bounds_Contains_m717 (Bounds_t160 * __this, Vector3_t70  ___point, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___point;
		bool L_1 = Bounds_Internal_Contains_m715(NULL /*static, unused*/, (*(Bounds_t160 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m718 (Object_t * __this /* static, unused */, Bounds_t160  ___m, Vector3_t70  ___point, const MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m719(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m719 (Object_t * __this /* static, unused */, Bounds_t160 * ___m, Vector3_t70 * ___point, const MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m719_ftn) (Bounds_t160 *, Vector3_t70 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C" float Bounds_SqrDistance_m720 (Bounds_t160 * __this, Vector3_t70  ___point, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = ___point;
		float L_1 = Bounds_Internal_SqrDistance_m718(NULL /*static, unused*/, (*(Bounds_t160 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m721 (Object_t * __this /* static, unused */, Ray_t162 * ___ray, Bounds_t160 * ___bounds, float* ___distance, const MethodInfo* method)
{
	{
		Ray_t162 * L_0 = ___ray;
		Bounds_t160 * L_1 = ___bounds;
		float* L_2 = ___distance;
		bool L_3 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m722(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m722 (Object_t * __this /* static, unused */, Ray_t162 * ___ray, Bounds_t160 * ___bounds, float* ___distance, const MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m722_ftn) (Ray_t162 *, Bounds_t160 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern "C" bool Bounds_IntersectRay_m723 (Bounds_t160 * __this, Ray_t162  ___ray, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m721(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" bool Bounds_IntersectRay_m724 (Bounds_t160 * __this, Ray_t162  ___ray, float* ___distance, const MethodInfo* method)
{
	{
		float* L_0 = ___distance;
		bool L_1 = Bounds_Internal_IntersectRay_m721(NULL /*static, unused*/, (&___ray), __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t70  Bounds_Internal_GetClosestPoint_m725 (Object_t * __this /* static, unused */, Bounds_t160 * ___bounds, Vector3_t70 * ___point, const MethodInfo* method)
{
	{
		Bounds_t160 * L_0 = ___bounds;
		Vector3_t70 * L_1 = ___point;
		Vector3_t70  L_2 = Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m726(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t70  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m726 (Object_t * __this /* static, unused */, Bounds_t160 * ___bounds, Vector3_t70 * ___point, const MethodInfo* method)
{
	typedef Vector3_t70  (*Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m726_ftn) (Bounds_t160 *, Vector3_t70 *);
	static Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m726_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m726_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___bounds, ___point);
}
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern "C" Vector3_t70  Bounds_ClosestPoint_m727 (Bounds_t160 * __this, Vector3_t70  ___point, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Bounds_Internal_GetClosestPoint_m725(NULL /*static, unused*/, __this, (&___point), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t70_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral109;
extern "C" String_t* Bounds_ToString_m728 (Bounds_t160 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Vector3_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 2));
		Vector3_t70  L_1 = (__this->___m_Center_0);
		Vector3_t70  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t70_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		Vector3_t70  L_5 = (__this->___m_Extents_1);
		Vector3_t70  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t70_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral109, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral109;
extern "C" String_t* Bounds_ToString_m729 (Bounds_t160 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		_stringLiteral109 = il2cpp_codegen_string_literal_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 2));
		Vector3_t70 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Vector3_ToString_m619(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		Vector3_t70 * L_5 = &(__this->___m_Extents_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Vector3_ToString_m619(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral109, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m730 (Object_t * __this /* static, unused */, Bounds_t160  ___lhs, Bounds_t160  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t70  L_0 = Bounds_get_center_m699((&___lhs), /*hidden argument*/NULL);
		Vector3_t70  L_1 = Bounds_get_center_m699((&___rhs), /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Equality_m627(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t70  L_3 = Bounds_get_extents_m703((&___lhs), /*hidden argument*/NULL);
		Vector3_t70  L_4 = Bounds_get_extents_m703((&___rhs), /*hidden argument*/NULL);
		bool L_5 = Vector3_op_Equality_m627(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m731 (Object_t * __this /* static, unused */, Bounds_t160  ___lhs, Bounds_t160  ___rhs, const MethodInfo* method)
{
	{
		Bounds_t160  L_0 = ___lhs;
		Bounds_t160  L_1 = ___rhs;
		bool L_2 = Bounds_op_Equality_m730(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m732 (Vector4_t161 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		float L_3 = ___w;
		__this->___w_3 = L_3;
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m733 (Vector4_t161 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m1465(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m1465(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m1465(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m1465(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern TypeInfo* Vector4_t161_il2cpp_TypeInfo_var;
extern "C" bool Vector4_Equals_m734 (Vector4_t161 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t161  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, Vector4_t161_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t161 *)((Vector4_t161 *)UnBox (L_1, Vector4_t161_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m1480(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m1480(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m1480(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m1480(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral104;
extern "C" String_t* Vector4_ToString_m735 (Vector4_t161 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		_stringLiteral104 = il2cpp_codegen_string_literal_from_index(104);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t78_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t78_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t270* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t78_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t270* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t78_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral104, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m736 (Object_t * __this /* static, unused */, Vector4_t161  ___a, Vector4_t161  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m737 (Object_t * __this /* static, unused */, Vector4_t161  ___a, const MethodInfo* method)
{
	{
		Vector4_t161  L_0 = ___a;
		Vector4_t161  L_1 = ___a;
		float L_2 = Vector4_Dot_m736(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t161  Vector4_op_Subtraction_m738 (Object_t * __this /* static, unused */, Vector4_t161  ___a, Vector4_t161  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		Vector4_t161  L_8 = {0};
		Vector4__ctor_m732(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m739 (Object_t * __this /* static, unused */, Vector4_t161  ___lhs, Vector4_t161  ___rhs, const MethodInfo* method)
{
	{
		Vector4_t161  L_0 = ___lhs;
		Vector4_t161  L_1 = ___rhs;
		Vector4_t161  L_2 = Vector4_op_Subtraction_m738(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector4_SqrMagnitude_m737(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t70  Ray_get_direction_m740 (Ray_t162 * __this, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// System.String UnityEngine.Ray::ToString()
extern TypeInfo* ObjectU5BU5D_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t70_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral110;
extern "C" String_t* Ray_ToString_m741 (Ray_t162 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Vector3_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral110 = il2cpp_codegen_string_literal_from_index(110);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t270* L_0 = ((ObjectU5BU5D_t270*)SZArrayNew(ObjectU5BU5D_t270_il2cpp_TypeInfo_var, 2));
		Vector3_t70  L_1 = (__this->___m_Origin_0);
		Vector3_t70  L_2 = L_1;
		Object_t * L_3 = Box(Vector3_t70_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t270* L_4 = L_0;
		Vector3_t70  L_5 = (__this->___m_Direction_1);
		Vector3_t70  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t70_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m813(NULL /*static, unused*/, _stringLiteral110, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternal.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternalMethodDeclarations.h"



// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern TypeInfo* MathfInternal_t163_il2cpp_TypeInfo_var;
extern "C" void MathfInternal__cctor_m742 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t163_StaticFields*)MathfInternal_t163_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t163_StaticFields*)MathfInternal_t163_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		float L_0 = ((MathfInternal_t163_StaticFields*)MathfInternal_t163_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t163_StaticFields*)MathfInternal_t163_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
#ifndef _MSC_VER
#else
#endif

// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"


// System.Void UnityEngine.Mathf::.cctor()
extern TypeInfo* MathfInternal_t163_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern "C" void Mathf__cctor_m743 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MathfInternal_t163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t163_il2cpp_TypeInfo_var);
		bool L_0 = ((MathfInternal_t163_StaticFields*)MathfInternal_t163_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t163_il2cpp_TypeInfo_var);
		float L_1 = ((MathfInternal_t163_StaticFields*)MathfInternal_t163_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t163_il2cpp_TypeInfo_var);
		float L_2 = ((MathfInternal_t163_StaticFields*)MathfInternal_t163_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t79_StaticFields*)Mathf_t79_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0 = G_B3_0;
		return;
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m744 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m745 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" int32_t Mathf_Min_m746 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m747 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m748 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m749 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m750 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___min;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = ___value;
		float L_4 = ___max;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		float L_6 = ___value;
		return L_6;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m751 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = ___value;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern "C" float Mathf_Lerp_m283 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___from;
		float L_1 = ___to;
		float L_2 = ___from;
		float L_3 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m751(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern "C" bool Mathf_Approximately_m752 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___b;
		float L_1 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___a;
		float L_4 = fabsf(L_3);
		float L_5 = ___b;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m747(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = ((Mathf_t79_StaticFields*)Mathf_t79_il2cpp_TypeInfo_var->static_fields)->___Epsilon_0;
		float L_9 = Mathf_Max_m747(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), /*hidden argument*/NULL);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"


// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern "C" void ReapplyDrivenProperties__ctor_m753 (ReapplyDrivenProperties_t165 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern "C" void ReapplyDrivenProperties_Invoke_m754 (ReapplyDrivenProperties_t165 * __this, RectTransform_t164 * ___driven, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReapplyDrivenProperties_Invoke_m754((ReapplyDrivenProperties_t165 *)__this->___prev_9,___driven, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RectTransform_t164 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RectTransform_t164 * ___driven, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t165(Il2CppObject* delegate, RectTransform_t164 * ___driven)
{
	// Marshaling of parameter '___driven' to native representation
	RectTransform_t164 * ____driven_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m755 (ReapplyDrivenProperties_t165 * __this, RectTransform_t164 * ___driven, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m756 (ReapplyDrivenProperties_t165 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"



// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
extern TypeInfo* RectTransform_t164_il2cpp_TypeInfo_var;
extern "C" void RectTransform_SendReapplyDrivenProperties_m757 (Object_t * __this /* static, unused */, RectTransform_t164 * ___driven, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		s_Il2CppMethodIntialized = true;
	}
	{
		ReapplyDrivenProperties_t165 * L_0 = ((RectTransform_t164_StaticFields*)RectTransform_t164_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReapplyDrivenProperties_t165 * L_1 = ((RectTransform_t164_StaticFields*)RectTransform_t164_il2cpp_TypeInfo_var->static_fields)->___reapplyDrivenProperties_2;
		RectTransform_t164 * L_2 = ___driven;
		NullCheck(L_1);
		ReapplyDrivenProperties_Invoke_m754(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequestMethodDeclarations.h"

// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"


// System.Void UnityEngine.ResourceRequest::.ctor()
extern "C" void ResourceRequest__ctor_m758 (ResourceRequest_t166 * __this, const MethodInfo* method)
{
	{
		AsyncOperation__ctor_m814(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
extern "C" Object_t71 * ResourceRequest_get_asset_m759 (ResourceRequest_t166 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Path_1);
		Type_t * L_1 = (__this->___m_Type_2);
		Object_t71 * L_2 = Resources_Load_m760(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
#ifndef _MSC_VER
#else
#endif

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"


// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern const Il2CppType* Object_t71_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Object_t71 * Resources_Load_m251 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t71_0_0_0_var = il2cpp_codegen_type_from_index(123);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1483(NULL /*static, unused*/, LoadTypeToken(Object_t71_0_0_0_var), /*hidden argument*/NULL);
		Object_t71 * L_2 = Resources_Load_m760(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t71 * Resources_Load_m760 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method)
{
	typedef Object_t71 * (*Resources_Load_m760_ftn) (String_t*, Type_t *);
	static Resources_Load_m760_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m760_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(___path, ___systemTypeInstance);
}
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"



// System.String UnityEngine.TextAsset::get_text()
extern "C" String_t* TextAsset_get_text_m252 (TextAsset_t55 * __this, const MethodInfo* method)
{
	typedef String_t* (*TextAsset_get_text_m252_ftn) (TextAsset_t55 *);
	static TextAsset_get_text_m252_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextAsset_get_text_m252_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextAsset::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.TextAsset::ToString()
extern "C" String_t* TextAsset_ToString_m761 (TextAsset_t55 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = TextAsset_get_text_m252(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.SerializePrivateVariables::.ctor()
extern "C" void SerializePrivateVariables__ctor_m762 (SerializePrivateVariables_t168 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1484(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"



// System.Void UnityEngine.SerializeField::.ctor()
extern "C" void SerializeField__ctor_m763 (SerializeField_t170 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1484(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"



// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern "C" void SphericalHarmonicsL2_Clear_m764 (SphericalHarmonicsL2_t171 * __this, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m765(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m765 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t171 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t171 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m766(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m766 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t171 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m766_ftn) (SphericalHarmonicsL2_t171 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m767 (SphericalHarmonicsL2_t171 * __this, Color_t60  ___color, const MethodInfo* method)
{
	{
		Color_t60  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m768(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m768 (Object_t * __this /* static, unused */, Color_t60  ___color, SphericalHarmonicsL2_t171 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t171 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m769(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m769 (Object_t * __this /* static, unused */, Color_t60 * ___color, SphericalHarmonicsL2_t171 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m769_ftn) (Color_t60 *, SphericalHarmonicsL2_t171 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m769_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m770 (SphericalHarmonicsL2_t171 * __this, Vector3_t70  ___direction, Color_t60  ___color, float ___intensity, const MethodInfo* method)
{
	Color_t60  V_0 = {0};
	{
		Color_t60  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t60  L_2 = Color_op_Multiply_m634(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t70  L_3 = ___direction;
		Color_t60  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m771(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m771 (Object_t * __this /* static, unused */, Vector3_t70  ___direction, Color_t60  ___color, SphericalHarmonicsL2_t171 * ___sh, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t171 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m772(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m772 (Object_t * __this /* static, unused */, Vector3_t70 * ___direction, Color_t60 * ___color, SphericalHarmonicsL2_t171 * ___sh, const MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m772_ftn) (Vector3_t70 *, Color_t60 *, SphericalHarmonicsL2_t171 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m772_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m772_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern TypeInfo* IndexOutOfRangeException_t393_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral111;
extern "C" float SphericalHarmonicsL2_get_Item_m773 (SphericalHarmonicsL2_t171 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t393 * L_31 = (IndexOutOfRangeException_t393 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t393_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m1482(L_31, _stringLiteral111, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern TypeInfo* IndexOutOfRangeException_t393_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral111;
extern "C" void SphericalHarmonicsL2_set_Item_m774 (SphericalHarmonicsL2_t171 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IndexOutOfRangeException_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		_stringLiteral111 = il2cpp_codegen_string_literal_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t393 * L_31 = (IndexOutOfRangeException_t393 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t393_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m1482(L_31, _stringLiteral111, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m775 (SphericalHarmonicsL2_t171 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m1465(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m1465(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m1465(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m1465(L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m1465(L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m1465(L_16, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m1465(L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m1465(L_22, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m1465(L_25, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m1465(L_28, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m1465(L_31, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m1465(L_34, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m1465(L_37, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m1465(L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m1465(L_43, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m1465(L_46, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m1465(L_49, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m1465(L_52, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m1465(L_55, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m1465(L_58, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m1465(L_61, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m1465(L_64, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m1465(L_67, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m1465(L_70, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m1465(L_73, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m1465(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m1465(L_79, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern TypeInfo* SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var;
extern "C" bool SphericalHarmonicsL2_Equals_m776 (SphericalHarmonicsL2_t171 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t171  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t171 *)((SphericalHarmonicsL2_t171 *)UnBox (L_1, SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var))));
		SphericalHarmonicsL2_t171  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m780(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t171 *)__this), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern TypeInfo* SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t171  SphericalHarmonicsL2_op_Multiply_m777 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t171  ___lhs, float ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t171  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t171  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t171  SphericalHarmonicsL2_op_Multiply_m778 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t171  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t171  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t171  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern TypeInfo* SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var;
extern "C" SphericalHarmonicsL2_t171  SphericalHarmonicsL2_op_Addition_m779 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t171  ___lhs, SphericalHarmonicsL2_t171  ___rhs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(125);
		s_Il2CppMethodIntialized = true;
	}
	SphericalHarmonicsL2_t171  V_0 = {0};
	{
		Initobj (SphericalHarmonicsL2_t171_il2cpp_TypeInfo_var, (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t171  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m780 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t171  ___lhs, SphericalHarmonicsL2_t171  ___rhs, const MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m781 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t171  ___lhs, SphericalHarmonicsL2_t171  ___rhs, const MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t171  L_0 = ___lhs;
		SphericalHarmonicsL2_t171  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m780(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"



// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C" Color_t60  SpriteRenderer_get_color_m242 (SpriteRenderer_t50 * __this, const MethodInfo* method)
{
	Color_t60  V_0 = {0};
	{
		SpriteRenderer_INTERNAL_get_color_m782(__this, (&V_0), /*hidden argument*/NULL);
		Color_t60  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C" void SpriteRenderer_set_color_m276 (SpriteRenderer_t50 * __this, Color_t60  ___value, const MethodInfo* method)
{
	{
		SpriteRenderer_INTERNAL_set_color_m783(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpriteRenderer::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void SpriteRenderer_INTERNAL_get_color_m782 (SpriteRenderer_t50 * __this, Color_t60 * ___value, const MethodInfo* method)
{
	typedef void (*SpriteRenderer_INTERNAL_get_color_m782_ftn) (SpriteRenderer_t50 *, Color_t60 *);
	static SpriteRenderer_INTERNAL_get_color_m782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_INTERNAL_get_color_m782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.SpriteRenderer::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void SpriteRenderer_INTERNAL_set_color_m783 (SpriteRenderer_t50 * __this, Color_t60 * ___value, const MethodInfo* method)
{
	typedef void (*SpriteRenderer_INTERNAL_set_color_m783_ftn) (SpriteRenderer_t50 *, Color_t60 *);
	static SpriteRenderer_INTERNAL_set_color_m783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRenderer_INTERNAL_set_color_m783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpriteRenderer::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"


// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m784 (WWW_t172 * __this, String_t* ___url, WWWForm_t175 * ___form, const MethodInfo* method)
{
	StringU5BU5D_t45* V_0 = {0};
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		WWWForm_t175 * L_0 = ___form;
		NullCheck(L_0);
		Dictionary_2_t349 * L_1 = WWWForm_get_headers_m803(L_0, /*hidden argument*/NULL);
		StringU5BU5D_t45* L_2 = WWW_FlattenedHeadersFrom_m797(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___url;
		WWWForm_t175 * L_4 = ___form;
		NullCheck(L_4);
		ByteU5BU5D_t36* L_5 = WWWForm_get_data_m804(L_4, /*hidden argument*/NULL);
		StringU5BU5D_t45* L_6 = V_0;
		WWW_InitWWW_m788(__this, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m785 (WWW_t172 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m787(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m786 (WWW_t172 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		WWW_DestroyWWW_m787(__this, 0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m787 (WWW_t172 * __this, bool ___cancel, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m787_ftn) (WWW_t172 *, bool);
	static WWW_DestroyWWW_m787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel);
}
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m788 (WWW_t172 * __this, String_t* ___url, ByteU5BU5D_t36* ___postData, StringU5BU5D_t45* ___iHeaders, const MethodInfo* method)
{
	typedef void (*WWW_InitWWW_m788_ftn) (WWW_t172 *, String_t*, ByteU5BU5D_t36*, StringU5BU5D_t45*);
	static WWW_InitWWW_m788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_InitWWW_m788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, ___url, ___postData, ___iHeaders);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern TypeInfo* UnityException_t318_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral112;
extern "C" Dictionary_2_t349 * WWW_get_responseHeaders_m789 (WWW_t172 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		_stringLiteral112 = il2cpp_codegen_string_literal_from_index(112);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = WWW_get_isDone_m796(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t318 * L_1 = (UnityException_t318 *)il2cpp_codegen_object_new (UnityException_t318_il2cpp_TypeInfo_var);
		UnityException__ctor_m1405(L_1, _stringLiteral112, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		String_t* L_2 = WWW_get_responseHeadersString_m790(__this, /*hidden argument*/NULL);
		Dictionary_2_t349 * L_3 = WWW_ParseHTTPHeaderString_m798(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m790 (WWW_t172 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_responseHeadersString_m790_ftn) (WWW_t172 *);
	static WWW_get_responseHeadersString_m790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_responseHeadersString_m790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_text()
extern TypeInfo* UnityException_t318_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral113;
extern "C" String_t* WWW_get_text_m791 (WWW_t172 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityException_t318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		_stringLiteral113 = il2cpp_codegen_string_literal_from_index(113);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t36* V_0 = {0};
	{
		bool L_0 = WWW_get_isDone_m796(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t318 * L_1 = (UnityException_t318 *)il2cpp_codegen_object_new (UnityException_t318_il2cpp_TypeInfo_var);
		UnityException__ctor_m1405(L_1, _stringLiteral113, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ByteU5BU5D_t36* L_2 = WWW_get_bytes_m794(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Encoding_t350 * L_3 = WWW_GetTextEncoder_m793(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t36* L_4 = V_0;
		ByteU5BU5D_t36* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		return L_6;
	}
}
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern TypeInfo* Encoding_t350_il2cpp_TypeInfo_var;
extern "C" Encoding_t350 * WWW_get_DefaultEncoding_m792 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
		Encoding_t350 * L_0 = Encoding_get_ASCII_m1485(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern TypeInfo* CharU5BU5D_t369_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t350_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral114;
extern Il2CppCodeGenString* _stringLiteral115;
extern Il2CppCodeGenString* _stringLiteral116;
extern Il2CppCodeGenString* _stringLiteral117;
extern "C" Encoding_t350 * WWW_GetTextEncoder_m793 (WWW_t172 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(128);
		Encoding_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral114 = il2cpp_codegen_string_literal_from_index(114);
		_stringLiteral115 = il2cpp_codegen_string_literal_from_index(115);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		_stringLiteral117 = il2cpp_codegen_string_literal_from_index(117);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	Encoding_t350 * V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_t349 * L_0 = WWW_get_responseHeaders_m789(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker2< bool, String_t*, String_t** >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&) */, L_0, _stringLiteral114, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m1486(L_2, _stringLiteral115, 5, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = String_IndexOf_m1487(L_5, ((int32_t)61), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m1488(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m179(L_11, /*hidden argument*/NULL);
		CharU5BU5D_t369* L_13 = ((CharU5BU5D_t369*)SZArrayNew(CharU5BU5D_t369_il2cpp_TypeInfo_var, 2));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		CharU5BU5D_t369* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		NullCheck(L_12);
		String_t* L_15 = String_Trim_m1489(L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Trim_m179(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = String_IndexOf_m1490(L_17, ((int32_t)59), /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m184(L_20, 0, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_24 = Encoding_GetEncoding_m1491(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			V_5 = L_24;
			goto IL_00b6;
		}

IL_0090:
		{
			; // IL_0090: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t27_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		String_t* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m222(NULL /*static, unused*/, _stringLiteral116, L_25, _stringLiteral117, /*hidden argument*/NULL);
		Debug_Log_m254(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
		Encoding_t350 * L_27 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_27;
	}

IL_00b6:
	{
		Encoding_t350 * L_28 = V_5;
		return L_28;
	}
}
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t36* WWW_get_bytes_m794 (WWW_t172 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t36* (*WWW_get_bytes_m794_ftn) (WWW_t172 *);
	static WWW_get_bytes_m794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_bytes_m794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m795 (WWW_t172 * __this, const MethodInfo* method)
{
	typedef String_t* (*WWW_get_error_m795_ftn) (WWW_t172 *);
	static WWW_get_error_m795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_error_m795_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m796 (WWW_t172 * __this, const MethodInfo* method)
{
	typedef bool (*WWW_get_isDone_m796_ftn) (WWW_t172 *);
	static WWW_get_isDone_m796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_isDone_m796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t395_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m1493_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1494_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m1495_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1497_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1498_MethodInfo_var;
extern "C" StringU5BU5D_t45* WWW_FlattenedHeadersFrom_m797 (Object_t * __this /* static, unused */, Dictionary_2_t349 * ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m1493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		Enumerator_get_Current_m1494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		KeyValuePair_2_get_Key_m1495_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		KeyValuePair_2_get_Value_m1497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		Enumerator_MoveNext_m1498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t45* V_0 = {0};
	int32_t V_1 = 0;
	KeyValuePair_2_t394  V_2 = {0};
	Enumerator_t395  V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t349 * L_0 = ___headers;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (StringU5BU5D_t45*)NULL;
	}

IL_0008:
	{
		Dictionary_2_t349 * L_1 = ___headers;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_1);
		V_0 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		Dictionary_2_t349 * L_3 = ___headers;
		NullCheck(L_3);
		Enumerator_t395  L_4 = Dictionary_2_GetEnumerator_m1493(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m1493_MethodInfo_var);
		V_3 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			KeyValuePair_2_t394  L_5 = Enumerator_get_Current_m1494((&V_3), /*hidden argument*/Enumerator_get_Current_m1494_MethodInfo_var);
			V_2 = L_5;
			StringU5BU5D_t45* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			String_t* L_9 = KeyValuePair_2_get_Key_m1495((&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m1495_MethodInfo_var);
			NullCheck(L_9);
			String_t* L_10 = String_ToString_m1496(L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			ArrayElementTypeCheck (L_6, L_10);
			*((String_t**)(String_t**)SZArrayLdElema(L_6, L_8)) = (String_t*)L_10;
			StringU5BU5D_t45* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			String_t* L_14 = KeyValuePair_2_get_Value_m1497((&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1497_MethodInfo_var);
			NullCheck(L_14);
			String_t* L_15 = String_ToString_m1496(L_14, /*hidden argument*/NULL);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
			ArrayElementTypeCheck (L_11, L_15);
			*((String_t**)(String_t**)SZArrayLdElema(L_11, L_13)) = (String_t*)L_15;
		}

IL_0052:
		{
			bool L_16 = Enumerator_MoveNext_m1498((&V_3), /*hidden argument*/Enumerator_MoveNext_m1498_MethodInfo_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_t395  L_17 = V_3;
		Enumerator_t395  L_18 = L_17;
		Object_t * L_19 = Box(Enumerator_t395_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_19);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_006f:
	{
		StringU5BU5D_t45* L_20 = V_0;
		return L_20;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern TypeInfo* ArgumentException_t382_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t349_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t396_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1499_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral118;
extern Il2CppCodeGenString* _stringLiteral119;
extern Il2CppCodeGenString* _stringLiteral120;
extern Il2CppCodeGenString* _stringLiteral121;
extern "C" Dictionary_2_t349 * WWW_ParseHTTPHeaderString_m798 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		Dictionary_2_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		StringReader_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(131);
		Dictionary_2__ctor_m1499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		_stringLiteral119 = il2cpp_codegen_string_literal_from_index(119);
		_stringLiteral120 = il2cpp_codegen_string_literal_from_index(120);
		_stringLiteral121 = il2cpp_codegen_string_literal_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t349 * V_0 = {0};
	StringReader_t396 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	{
		String_t* L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t382 * L_1 = (ArgumentException_t382 *)il2cpp_codegen_object_new (ArgumentException_t382_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1453(L_1, _stringLiteral118, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Dictionary_2_t349 * L_2 = (Dictionary_2_t349 *)il2cpp_codegen_object_new (Dictionary_2_t349_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1499(L_2, /*hidden argument*/Dictionary_2__ctor_m1499_MethodInfo_var);
		V_0 = L_2;
		String_t* L_3 = ___input;
		StringReader_t396 * L_4 = (StringReader_t396 *)il2cpp_codegen_object_new (StringReader_t396_il2cpp_TypeInfo_var);
		StringReader__ctor_m1500(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		StringReader_t396 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.IO.StringReader::ReadLine() */, L_5);
		V_3 = L_6;
		String_t* L_7 = V_3;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = V_3;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m1501(L_10, _stringLiteral119, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t349 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_12, _stringLiteral120, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		String_t* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_m1502(L_14, _stringLiteral121, /*hidden argument*/NULL);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0020;
	}

IL_0077:
	{
		String_t* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m184(L_17, 0, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = String_ToUpper_m1503(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23 = String_Substring_m1488(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), /*hidden argument*/NULL);
		V_6 = L_23;
		Dictionary_2_t349 * L_24 = V_0;
		String_t* L_25 = V_5;
		String_t* L_26 = V_6;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		Dictionary_2_t349 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoderMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"


// System.Void UnityEngine.WWWForm::.ctor()
extern TypeInfo* List_1_t173_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t174_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t36_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1504_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1505_MethodInfo_var;
extern "C" void WWWForm__ctor_m799 (WWWForm_t175 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		List_1_t174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		ByteU5BU5D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		List_1__ctor_m1504_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		List_1__ctor_m1505_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		List_1_t173 * L_0 = (List_1_t173 *)il2cpp_codegen_object_new (List_1_t173_il2cpp_TypeInfo_var);
		List_1__ctor_m1504(L_0, /*hidden argument*/List_1__ctor_m1504_MethodInfo_var);
		__this->___formData_0 = L_0;
		List_1_t174 * L_1 = (List_1_t174 *)il2cpp_codegen_object_new (List_1_t174_il2cpp_TypeInfo_var);
		List_1__ctor_m1505(L_1, /*hidden argument*/List_1__ctor_m1505_MethodInfo_var);
		__this->___fieldNames_1 = L_1;
		List_1_t174 * L_2 = (List_1_t174 *)il2cpp_codegen_object_new (List_1_t174_il2cpp_TypeInfo_var);
		List_1__ctor_m1505(L_2, /*hidden argument*/List_1__ctor_m1505_MethodInfo_var);
		__this->___fileNames_2 = L_2;
		List_1_t174 * L_3 = (List_1_t174 *)il2cpp_codegen_object_new (List_1_t174_il2cpp_TypeInfo_var);
		List_1__ctor_m1505(L_3, /*hidden argument*/List_1__ctor_m1505_MethodInfo_var);
		__this->___types_3 = L_3;
		__this->___boundary_4 = ((ByteU5BU5D_t36*)SZArrayNew(ByteU5BU5D_t36_il2cpp_TypeInfo_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = Random_Range_m921(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)7));
	}

IL_005c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)6));
	}

IL_0068:
	{
		ByteU5BU5D_t36* L_9 = (__this->___boundary_4);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10)) = (uint8_t)(((uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)40))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern TypeInfo* Encoding_t350_il2cpp_TypeInfo_var;
extern "C" void WWWForm_AddField_m800 (WWWForm_t175 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		s_Il2CppMethodIntialized = true;
	}
	Encoding_t350 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
		Encoding_t350 * L_0 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___fieldName;
		String_t* L_2 = ___value;
		Encoding_t350 * L_3 = V_0;
		WWWForm_AddField_m801(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral122;
extern Il2CppCodeGenString* _stringLiteral21;
extern "C" void WWWForm_AddField_m801 (WWWForm_t175 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t350 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral122 = il2cpp_codegen_string_literal_from_index(122);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t174 * L_0 = (__this->___fieldNames_1);
		String_t* L_1 = ___fieldName;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		List_1_t174 * L_2 = (__this->___fileNames_2);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_2, (String_t*)NULL);
		List_1_t173 * L_3 = (__this->___formData_0);
		Encoding_t350 * L_4 = ___e;
		String_t* L_5 = ___value;
		NullCheck(L_4);
		ByteU5BU5D_t36* L_6 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t36* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0) */, L_3, L_6);
		List_1_t174 * L_7 = (__this->___types_3);
		Encoding_t350 * L_8 = ___e;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m222(NULL /*static, unused*/, _stringLiteral122, L_9, _stringLiteral21, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_7, L_10);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m802 (WWWForm_t175 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method)
{
	{
		String_t* L_0 = ___fieldName;
		String_t* L_1 = Int32_ToString_m164((&___i), /*hidden argument*/NULL);
		WWWForm_AddField_m800(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern TypeInfo* Dictionary_2_t349_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t350_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1499_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral123;
extern Il2CppCodeGenString* _stringLiteral124;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral125;
extern "C" Dictionary_2_t349 * WWWForm_get_headers_m803 (WWWForm_t175 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(130);
		Encoding_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2__ctor_m1499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		_stringLiteral123 = il2cpp_codegen_string_literal_from_index(123);
		_stringLiteral124 = il2cpp_codegen_string_literal_from_index(124);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral125 = il2cpp_codegen_string_literal_from_index(125);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t349 * V_0 = {0};
	{
		Dictionary_2_t349 * L_0 = (Dictionary_2_t349 *)il2cpp_codegen_object_new (Dictionary_2_t349_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1499(L_0, /*hidden argument*/Dictionary_2__ctor_m1499_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = (__this->___containsFiles_5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t349 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
		Encoding_t350 * L_3 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t36* L_4 = (__this->___boundary_4);
		ByteU5BU5D_t36* L_5 = (__this->___boundary_4);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m222(NULL /*static, unused*/, _stringLiteral124, L_6, _stringLiteral21, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_2, _stringLiteral123, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		Dictionary_2_t349 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(20 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, _stringLiteral123, _stringLiteral125);
	}

IL_0059:
	{
		Dictionary_2_t349 * L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
extern TypeInfo* MemoryStream_t35_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t350_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t176_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral127;
extern Il2CppCodeGenString* _stringLiteral128;
extern Il2CppCodeGenString* _stringLiteral129;
extern Il2CppCodeGenString* _stringLiteral21;
extern Il2CppCodeGenString* _stringLiteral130;
extern Il2CppCodeGenString* _stringLiteral131;
extern Il2CppCodeGenString* _stringLiteral132;
extern Il2CppCodeGenString* _stringLiteral133;
extern Il2CppCodeGenString* _stringLiteral134;
extern Il2CppCodeGenString* _stringLiteral135;
extern "C" ByteU5BU5D_t36* WWWForm_get_data_m804 (WWWForm_t175 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Encoding_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(127);
		WWWTranscoder_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral127 = il2cpp_codegen_string_literal_from_index(127);
		_stringLiteral128 = il2cpp_codegen_string_literal_from_index(128);
		_stringLiteral129 = il2cpp_codegen_string_literal_from_index(129);
		_stringLiteral21 = il2cpp_codegen_string_literal_from_index(21);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		_stringLiteral131 = il2cpp_codegen_string_literal_from_index(131);
		_stringLiteral132 = il2cpp_codegen_string_literal_from_index(132);
		_stringLiteral133 = il2cpp_codegen_string_literal_from_index(133);
		_stringLiteral134 = il2cpp_codegen_string_literal_from_index(134);
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t36* V_0 = {0};
	ByteU5BU5D_t36* V_1 = {0};
	ByteU5BU5D_t36* V_2 = {0};
	ByteU5BU5D_t36* V_3 = {0};
	ByteU5BU5D_t36* V_4 = {0};
	ByteU5BU5D_t36* V_5 = {0};
	MemoryStream_t35 * V_6 = {0};
	int32_t V_7 = 0;
	ByteU5BU5D_t36* V_8 = {0};
	String_t* V_9 = {0};
	String_t* V_10 = {0};
	ByteU5BU5D_t36* V_11 = {0};
	String_t* V_12 = {0};
	ByteU5BU5D_t36* V_13 = {0};
	ByteU5BU5D_t36* V_14 = {0};
	ByteU5BU5D_t36* V_15 = {0};
	ByteU5BU5D_t36* V_16 = {0};
	MemoryStream_t35 * V_17 = {0};
	int32_t V_18 = 0;
	ByteU5BU5D_t36* V_19 = {0};
	ByteU5BU5D_t36* V_20 = {0};
	ByteU5BU5D_t36* V_21 = {0};
	ByteU5BU5D_t36* V_22 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___containsFiles_5);
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		Encoding_t350 * L_1 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t36* L_2 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, _stringLiteral126);
		V_0 = L_2;
		Encoding_t350 * L_3 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t36* L_4 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral127);
		V_1 = L_4;
		Encoding_t350 * L_5 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t36* L_6 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, _stringLiteral128);
		V_2 = L_6;
		Encoding_t350 * L_7 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t36* L_8 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, _stringLiteral129);
		V_3 = L_8;
		Encoding_t350 * L_9 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t36* L_10 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, _stringLiteral21);
		V_4 = L_10;
		Encoding_t350 * L_11 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t36* L_12 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, _stringLiteral130);
		V_5 = L_12;
		MemoryStream_t35 * L_13 = (MemoryStream_t35 *)il2cpp_codegen_object_new (MemoryStream_t35_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1506(L_13, ((int32_t)1024), /*hidden argument*/NULL);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			MemoryStream_t35 * L_14 = V_6;
			ByteU5BU5D_t36* L_15 = V_1;
			ByteU5BU5D_t36* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)(((Array_t *)L_16)->max_length))));
			MemoryStream_t35 * L_17 = V_6;
			ByteU5BU5D_t36* L_18 = V_0;
			ByteU5BU5D_t36* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)(((Array_t *)L_19)->max_length))));
			MemoryStream_t35 * L_20 = V_6;
			ByteU5BU5D_t36* L_21 = (__this->___boundary_4);
			ByteU5BU5D_t36* L_22 = (__this->___boundary_4);
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)(((Array_t *)L_22)->max_length))));
			MemoryStream_t35 * L_23 = V_6;
			ByteU5BU5D_t36* L_24 = V_1;
			ByteU5BU5D_t36* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)(((Array_t *)L_25)->max_length))));
			MemoryStream_t35 * L_26 = V_6;
			ByteU5BU5D_t36* L_27 = V_2;
			ByteU5BU5D_t36* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)(((Array_t *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_29 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t174 * L_30 = (__this->___types_3);
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_30, L_31);
			NullCheck(L_29);
			ByteU5BU5D_t36* L_33 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t35 * L_34 = V_6;
			ByteU5BU5D_t36* L_35 = V_8;
			ByteU5BU5D_t36* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)(((Array_t *)L_36)->max_length))));
			MemoryStream_t35 * L_37 = V_6;
			ByteU5BU5D_t36* L_38 = V_1;
			ByteU5BU5D_t36* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)(((Array_t *)L_39)->max_length))));
			MemoryStream_t35 * L_40 = V_6;
			ByteU5BU5D_t36* L_41 = V_3;
			ByteU5BU5D_t36* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)(((Array_t *)L_42)->max_length))));
			Encoding_t350 * L_43 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(21 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			List_1_t174 * L_45 = (__this->___fieldNames_1);
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_45, L_46);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t350 * L_49 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			bool L_50 = WWWTranscoder_SevenBitClean_m811(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m1502(L_51, _stringLiteral131, /*hidden argument*/NULL);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			StringU5BU5D_t45* L_53 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
			NullCheck(L_53);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
			ArrayElementTypeCheck (L_53, _stringLiteral131);
			*((String_t**)(String_t**)SZArrayLdElema(L_53, 0)) = (String_t*)_stringLiteral131;
			StringU5BU5D_t45* L_54 = L_53;
			String_t* L_55 = V_9;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 1);
			ArrayElementTypeCheck (L_54, L_55);
			*((String_t**)(String_t**)SZArrayLdElema(L_54, 1)) = (String_t*)L_55;
			StringU5BU5D_t45* L_56 = L_54;
			NullCheck(L_56);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
			ArrayElementTypeCheck (L_56, _stringLiteral132);
			*((String_t**)(String_t**)SZArrayLdElema(L_56, 2)) = (String_t*)_stringLiteral132;
			StringU5BU5D_t45* L_57 = L_56;
			String_t* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_59 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			String_t* L_60 = WWWTranscoder_QPEncode_m808(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
			NullCheck(L_57);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
			ArrayElementTypeCheck (L_57, L_60);
			*((String_t**)(String_t**)SZArrayLdElema(L_57, 3)) = (String_t*)L_60;
			StringU5BU5D_t45* L_61 = L_57;
			NullCheck(L_61);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 4);
			ArrayElementTypeCheck (L_61, _stringLiteral133);
			*((String_t**)(String_t**)SZArrayLdElema(L_61, 4)) = (String_t*)_stringLiteral133;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_62 = String_Concat_m217(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_63 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_64 = V_10;
			NullCheck(L_63);
			ByteU5BU5D_t36* L_65 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_63, L_64);
			V_11 = L_65;
			MemoryStream_t35 * L_66 = V_6;
			ByteU5BU5D_t36* L_67 = V_11;
			ByteU5BU5D_t36* L_68 = V_11;
			NullCheck(L_68);
			NullCheck(L_66);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, (((int32_t)(((Array_t *)L_68)->max_length))));
			MemoryStream_t35 * L_69 = V_6;
			ByteU5BU5D_t36* L_70 = V_4;
			ByteU5BU5D_t36* L_71 = V_4;
			NullCheck(L_71);
			NullCheck(L_69);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_70, 0, (((int32_t)(((Array_t *)L_71)->max_length))));
			List_1_t174 * L_72 = (__this->___fileNames_2);
			int32_t L_73 = V_7;
			NullCheck(L_72);
			String_t* L_74 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			List_1_t174 * L_75 = (__this->___fileNames_2);
			int32_t L_76 = V_7;
			NullCheck(L_75);
			String_t* L_77 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_75, L_76);
			V_12 = L_77;
			String_t* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_79 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			bool L_80 = WWWTranscoder_SevenBitClean_m811(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			String_t* L_81 = V_12;
			NullCheck(L_81);
			int32_t L_82 = String_IndexOf_m1502(L_81, _stringLiteral131, /*hidden argument*/NULL);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			StringU5BU5D_t45* L_83 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 5));
			NullCheck(L_83);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 0);
			ArrayElementTypeCheck (L_83, _stringLiteral131);
			*((String_t**)(String_t**)SZArrayLdElema(L_83, 0)) = (String_t*)_stringLiteral131;
			StringU5BU5D_t45* L_84 = L_83;
			String_t* L_85 = V_9;
			NullCheck(L_84);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 1);
			ArrayElementTypeCheck (L_84, L_85);
			*((String_t**)(String_t**)SZArrayLdElema(L_84, 1)) = (String_t*)L_85;
			StringU5BU5D_t45* L_86 = L_84;
			NullCheck(L_86);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 2);
			ArrayElementTypeCheck (L_86, _stringLiteral132);
			*((String_t**)(String_t**)SZArrayLdElema(L_86, 2)) = (String_t*)_stringLiteral132;
			StringU5BU5D_t45* L_87 = L_86;
			String_t* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_89 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			String_t* L_90 = WWWTranscoder_QPEncode_m808(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
			NullCheck(L_87);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 3);
			ArrayElementTypeCheck (L_87, L_90);
			*((String_t**)(String_t**)SZArrayLdElema(L_87, 3)) = (String_t*)L_90;
			StringU5BU5D_t45* L_91 = L_87;
			NullCheck(L_91);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 4);
			ArrayElementTypeCheck (L_91, _stringLiteral133);
			*((String_t**)(String_t**)SZArrayLdElema(L_91, 4)) = (String_t*)_stringLiteral133;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m217(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_93 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_94 = V_12;
			NullCheck(L_93);
			ByteU5BU5D_t36* L_95 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_93, L_94);
			V_13 = L_95;
			MemoryStream_t35 * L_96 = V_6;
			ByteU5BU5D_t36* L_97 = V_5;
			ByteU5BU5D_t36* L_98 = V_5;
			NullCheck(L_98);
			NullCheck(L_96);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_96, L_97, 0, (((int32_t)(((Array_t *)L_98)->max_length))));
			MemoryStream_t35 * L_99 = V_6;
			ByteU5BU5D_t36* L_100 = V_13;
			ByteU5BU5D_t36* L_101 = V_13;
			NullCheck(L_101);
			NullCheck(L_99);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_99, L_100, 0, (((int32_t)(((Array_t *)L_101)->max_length))));
			MemoryStream_t35 * L_102 = V_6;
			ByteU5BU5D_t36* L_103 = V_4;
			ByteU5BU5D_t36* L_104 = V_4;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, (((int32_t)(((Array_t *)L_104)->max_length))));
		}

IL_025c:
		{
			MemoryStream_t35 * L_105 = V_6;
			ByteU5BU5D_t36* L_106 = V_1;
			ByteU5BU5D_t36* L_107 = V_1;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)(((Array_t *)L_107)->max_length))));
			MemoryStream_t35 * L_108 = V_6;
			ByteU5BU5D_t36* L_109 = V_1;
			ByteU5BU5D_t36* L_110 = V_1;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, (((int32_t)(((Array_t *)L_110)->max_length))));
			List_1_t173 * L_111 = (__this->___formData_0);
			int32_t L_112 = V_7;
			NullCheck(L_111);
			ByteU5BU5D_t36* L_113 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_111, L_112);
			V_14 = L_113;
			MemoryStream_t35 * L_114 = V_6;
			ByteU5BU5D_t36* L_115 = V_14;
			ByteU5BU5D_t36* L_116 = V_14;
			NullCheck(L_116);
			NullCheck(L_114);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_114, L_115, 0, (((int32_t)(((Array_t *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			List_1_t173 * L_119 = (__this->___formData_0);
			NullCheck(L_119);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			MemoryStream_t35 * L_121 = V_6;
			ByteU5BU5D_t36* L_122 = V_1;
			ByteU5BU5D_t36* L_123 = V_1;
			NullCheck(L_123);
			NullCheck(L_121);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, (((int32_t)(((Array_t *)L_123)->max_length))));
			MemoryStream_t35 * L_124 = V_6;
			ByteU5BU5D_t36* L_125 = V_0;
			ByteU5BU5D_t36* L_126 = V_0;
			NullCheck(L_126);
			NullCheck(L_124);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, (((int32_t)(((Array_t *)L_126)->max_length))));
			MemoryStream_t35 * L_127 = V_6;
			ByteU5BU5D_t36* L_128 = (__this->___boundary_4);
			ByteU5BU5D_t36* L_129 = (__this->___boundary_4);
			NullCheck(L_129);
			NullCheck(L_127);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, (((int32_t)(((Array_t *)L_129)->max_length))));
			MemoryStream_t35 * L_130 = V_6;
			ByteU5BU5D_t36* L_131 = V_0;
			ByteU5BU5D_t36* L_132 = V_0;
			NullCheck(L_132);
			NullCheck(L_130);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, (((int32_t)(((Array_t *)L_132)->max_length))));
			MemoryStream_t35 * L_133 = V_6;
			ByteU5BU5D_t36* L_134 = V_1;
			ByteU5BU5D_t36* L_135 = V_1;
			NullCheck(L_135);
			NullCheck(L_133);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_133, L_134, 0, (((int32_t)(((Array_t *)L_135)->max_length))));
			MemoryStream_t35 * L_136 = V_6;
			NullCheck(L_136);
			ByteU5BU5D_t36* L_137 = (ByteU5BU5D_t36*)VirtFuncInvoker0< ByteU5BU5D_t36* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t35 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			MemoryStream_t35 * L_139 = V_6;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0311:
	{
		Encoding_t350 * L_140 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_140);
		ByteU5BU5D_t36* L_141 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_140, _stringLiteral134);
		V_15 = L_141;
		Encoding_t350 * L_142 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_142);
		ByteU5BU5D_t36* L_143 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, _stringLiteral135);
		V_16 = L_143;
		MemoryStream_t35 * L_144 = (MemoryStream_t35 *)il2cpp_codegen_object_new (MemoryStream_t35_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1506(L_144, ((int32_t)1024), /*hidden argument*/NULL);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t350_il2cpp_TypeInfo_var);
			Encoding_t350 * L_145 = Encoding_get_UTF8_m1492(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t174 * L_146 = (__this->___fieldNames_1);
			int32_t L_147 = V_18;
			NullCheck(L_146);
			String_t* L_148 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_146, L_147);
			NullCheck(L_145);
			ByteU5BU5D_t36* L_149 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			ByteU5BU5D_t36* L_150 = WWWTranscoder_URLEncode_m807(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
			V_19 = L_150;
			List_1_t173 * L_151 = (__this->___formData_0);
			int32_t L_152 = V_18;
			NullCheck(L_151);
			ByteU5BU5D_t36* L_153 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32) */, L_151, L_152);
			V_20 = L_153;
			ByteU5BU5D_t36* L_154 = V_20;
			ByteU5BU5D_t36* L_155 = WWWTranscoder_URLEncode_m807(NULL /*static, unused*/, L_154, /*hidden argument*/NULL);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			MemoryStream_t35 * L_157 = V_17;
			ByteU5BU5D_t36* L_158 = V_15;
			ByteU5BU5D_t36* L_159 = V_15;
			NullCheck(L_159);
			NullCheck(L_157);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_157, L_158, 0, (((int32_t)(((Array_t *)L_159)->max_length))));
		}

IL_0393:
		{
			MemoryStream_t35 * L_160 = V_17;
			ByteU5BU5D_t36* L_161 = V_19;
			ByteU5BU5D_t36* L_162 = V_19;
			NullCheck(L_162);
			NullCheck(L_160);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_160, L_161, 0, (((int32_t)(((Array_t *)L_162)->max_length))));
			MemoryStream_t35 * L_163 = V_17;
			ByteU5BU5D_t36* L_164 = V_16;
			ByteU5BU5D_t36* L_165 = V_16;
			NullCheck(L_165);
			NullCheck(L_163);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_163, L_164, 0, (((int32_t)(((Array_t *)L_165)->max_length))));
			MemoryStream_t35 * L_166 = V_17;
			ByteU5BU5D_t36* L_167 = V_21;
			ByteU5BU5D_t36* L_168 = V_21;
			NullCheck(L_168);
			NullCheck(L_166);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_166, L_167, 0, (((int32_t)(((Array_t *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			List_1_t173 * L_171 = (__this->___formData_0);
			NullCheck(L_171);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count() */, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			MemoryStream_t35 * L_173 = V_17;
			NullCheck(L_173);
			ByteU5BU5D_t36* L_174 = (ByteU5BU5D_t36*)VirtFuncInvoker0< ByteU5BU5D_t36* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t35 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			MemoryStream_t35 * L_176 = V_17;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_03f7:
	{
		ByteU5BU5D_t36* L_177 = V_22;
		return L_177;
	}
}
// UnityEngine.WWWTranscoder
#include "UnityEngine_UnityEngine_WWWTranscoder.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.WWWTranscoder::.cctor()
extern TypeInfo* WWWTranscoder_t176_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral136;
extern Il2CppCodeGenString* _stringLiteral137;
extern Il2CppCodeGenString* _stringLiteral138;
extern Il2CppCodeGenString* _stringLiteral139;
extern "C" void WWWTranscoder__cctor_m805 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		_stringLiteral136 = il2cpp_codegen_string_literal_from_index(136);
		_stringLiteral137 = il2cpp_codegen_string_literal_from_index(137);
		_stringLiteral138 = il2cpp_codegen_string_literal_from_index(138);
		_stringLiteral139 = il2cpp_codegen_string_literal_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t350 * L_0 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t36* L_1 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral136);
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0 = L_1;
		Encoding_t350 * L_2 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t36* L_3 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral137);
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1 = L_3;
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2 = ((int32_t)37);
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3 = ((int32_t)43);
		Encoding_t350 * L_4 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t36* L_5 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral138);
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4 = L_5;
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5 = ((int32_t)61);
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6 = ((int32_t)95);
		Encoding_t350 * L_6 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t36* L_7 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral139);
		((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7 = L_7;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern TypeInfo* ByteU5BU5D_t36_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t36* WWWTranscoder_Byte2Hex_m806 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t36* ___hexChars, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t36* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t36*)SZArrayNew(ByteU5BU5D_t36_il2cpp_TypeInfo_var, 2));
		ByteU5BU5D_t36* L_0 = V_0;
		ByteU5BU5D_t36* L_1 = ___hexChars;
		uint8_t L_2 = ___b;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2>>(int32_t)4)));
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t36* L_4 = V_0;
		ByteU5BU5D_t36* L_5 = ___hexChars;
		uint8_t L_6 = ___b;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))));
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		ByteU5BU5D_t36* L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern TypeInfo* WWWTranscoder_t176_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t36* WWWTranscoder_URLEncode_m807 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___toEncode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t36* L_0 = ___toEncode;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___urlEscapeChar_2;
		uint8_t L_2 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___urlSpace_3;
		ByteU5BU5D_t36* L_3 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___urlForbidden_4;
		ByteU5BU5D_t36* L_4 = WWWTranscoder_Encode_m809(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t176_il2cpp_TypeInfo_var;
extern "C" String_t* WWWTranscoder_QPEncode_m808 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t350 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t36* V_0 = {0};
	{
		Encoding_t350 * L_0 = ___e;
		String_t* L_1 = ___toEncode;
		NullCheck(L_0);
		ByteU5BU5D_t36* L_2 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___qpEscapeChar_5;
		uint8_t L_4 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___qpSpace_6;
		ByteU5BU5D_t36* L_5 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___qpForbidden_7;
		ByteU5BU5D_t36* L_6 = WWWTranscoder_Encode_m809(NULL /*static, unused*/, L_2, L_3, L_4, L_5, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t350 * L_7 = WWW_get_DefaultEncoding_m792(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t36* L_8 = V_0;
		ByteU5BU5D_t36* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(19 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)(((Array_t *)L_9)->max_length))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern TypeInfo* MemoryStream_t35_il2cpp_TypeInfo_var;
extern TypeInfo* WWWTranscoder_t176_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t36* WWWTranscoder_Encode_m809 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t36* ___forbidden, bool ___uppercase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		WWWTranscoder_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t35 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t36* V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t35 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	MemoryStream_t35 * G_B8_1 = {0};
	ByteU5BU5D_t36* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	MemoryStream_t35 * G_B10_2 = {0};
	{
		ByteU5BU5D_t36* L_0 = ___input;
		NullCheck(L_0);
		MemoryStream_t35 * L_1 = (MemoryStream_t35 *)il2cpp_codegen_object_new (MemoryStream_t35_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1506(L_1, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			ByteU5BU5D_t36* L_2 = ___input;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			MemoryStream_t35 * L_5 = V_0;
			uint8_t L_6 = ___space;
			NullCheck(L_5);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			ByteU5BU5D_t36* L_7 = ___input;
			int32_t L_8 = V_1;
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			ByteU5BU5D_t36* L_10 = ___input;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			ByteU5BU5D_t36* L_13 = ___forbidden;
			ByteU5BU5D_t36* L_14 = ___input;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			bool L_17 = WWWTranscoder_ByteArrayContains_m810(NULL /*static, unused*/, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t35 * L_18 = V_0;
			uint8_t L_19 = ___escapeChar;
			NullCheck(L_18);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_18, L_19);
			MemoryStream_t35 * L_20 = V_0;
			ByteU5BU5D_t36* L_21 = ___input;
			int32_t L_22 = V_1;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
			int32_t L_23 = L_22;
			bool L_24 = ___uppercase;
			G_B8_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
			G_B8_1 = L_20;
			if (!L_24)
			{
				G_B9_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
				G_B9_1 = L_20;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			ByteU5BU5D_t36* L_25 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___ucHexChars_0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			ByteU5BU5D_t36* L_26 = ((WWWTranscoder_t176_StaticFields*)WWWTranscoder_t176_il2cpp_TypeInfo_var->static_fields)->___lcHexChars_1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
			ByteU5BU5D_t36* L_27 = WWWTranscoder_Byte2Hex_m806(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t36*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t35 * L_28 = V_0;
			ByteU5BU5D_t36* L_29 = ___input;
			int32_t L_30 = V_1;
			NullCheck(L_29);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
			int32_t L_31 = L_30;
			NullCheck(L_28);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			ByteU5BU5D_t36* L_34 = ___input;
			NullCheck(L_34);
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			MemoryStream_t35 * L_35 = V_0;
			NullCheck(L_35);
			ByteU5BU5D_t36* L_36 = (ByteU5BU5D_t36*)VirtFuncInvoker0< ByteU5BU5D_t36* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_35);
			V_2 = L_36;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t35 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t35 * L_38 = V_0;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_38);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00b0:
	{
		ByteU5BU5D_t36* L_39 = V_2;
		return L_39;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m810 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___array, uint8_t ___b, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t36* L_0 = ___array;
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		ByteU5BU5D_t36* L_1 = ___array;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = ___b;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3))) == ((uint32_t)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern TypeInfo* WWWTranscoder_t176_il2cpp_TypeInfo_var;
extern "C" bool WWWTranscoder_SevenBitClean_m811 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t350 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWTranscoder_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t350 * L_0 = ___e;
		String_t* L_1 = ___s;
		NullCheck(L_0);
		ByteU5BU5D_t36* L_2 = (ByteU5BU5D_t36*)VirtFuncInvoker1< ByteU5BU5D_t36*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t176_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m812(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m812 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___input, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		ByteU5BU5D_t36* L_0 = ___input;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t36* L_3 = ___input;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_t36* L_8 = ___input;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t177_marshal(const CacheIndex_t177& unmarshaled, CacheIndex_t177_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t177_marshal_back(const CacheIndex_t177_marshaled& marshaled, CacheIndex_t177& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t177_marshal_cleanup(CacheIndex_t177_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif



// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityString_Format_m813 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t270* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t270* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1507(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m814 (AsyncOperation_t82 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m923(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m815 (AsyncOperation_t82 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m815_ftn) (AsyncOperation_t82 *);
	static AsyncOperation_InternalDestroy_m815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m816 (AsyncOperation_t82 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m815(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1454(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t82_marshal(const AsyncOperation_t82& unmarshaled, AsyncOperation_t82_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
void AsyncOperation_t82_marshal_back(const AsyncOperation_t82_marshaled& marshaled, AsyncOperation_t82& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t82_marshal_cleanup(AsyncOperation_t82_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"



// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LogCallback__ctor_m817 (LogCallback_t179 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C" void LogCallback_Invoke_m818 (LogCallback_t179 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m818((LogCallback_t179 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t179(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern TypeInfo* LogType_t87_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m819 (LogCallback_t179 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t87_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m820 (LogCallback_t179 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"



// System.String UnityEngine.Application::get_cloudProjectId()
extern "C" String_t* Application_get_cloudProjectId_m821 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_cloudProjectId_m821_ftn) ();
	static Application_get_cloudProjectId_m821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_cloudProjectId_m821_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_cloudProjectId()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" void Application_set_targetFrameRate_m249 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Application_set_targetFrameRate_m249_ftn) (int32_t);
	static Application_set_targetFrameRate_m249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_targetFrameRate_m249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_targetFrameRate(System.Int32)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern TypeInfo* Application_t180_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m822 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t180_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t179 * V_0 = {0};
	LogCallback_t179 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t179 * L_1 = ((Application_t180_StaticFields*)Application_t180_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t179 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t179 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		LogCallback_Invoke_m818(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001b:
	{
		LogCallback_t179 * L_7 = ((Application_t180_StaticFields*)Application_t180_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t179 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t179 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		LogCallback_Invoke_m818(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"


// System.Void UnityEngine.Behaviour::.ctor()
extern "C" void Behaviour__ctor_m823 (Behaviour_t114 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m905(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m824 (CameraCallback_t181 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m825 (CameraCallback_t181 * __this, Camera_t57 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m825((CameraCallback_t181 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t57 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t57 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t181(Il2CppObject* delegate, Camera_t57 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t57 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m826 (CameraCallback_t181 * __this, Camera_t57 * ___cam, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m827 (CameraCallback_t181 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"


// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m828 (Camera_t57 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m828_ftn) (Camera_t57 *);
	static Camera_get_nearClipPlane_m828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m829 (Camera_t57 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m829_ftn) (Camera_t57 *);
	static Camera_get_farClipPlane_m829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m830 (Camera_t57 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m830_ftn) (Camera_t57 *);
	static Camera_get_cullingMask_m830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m831 (Camera_t57 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m831_ftn) (Camera_t57 *);
	static Camera_get_eventMask_m831_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m831_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t121  Camera_get_pixelRect_m832 (Camera_t57 * __this, const MethodInfo* method)
{
	Rect_t121  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m833(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t121  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m833 (Camera_t57 * __this, Rect_t121 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m833_ftn) (Camera_t57 *, Rect_t121 *);
	static Camera_INTERNAL_get_pixelRect_m833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t112 * Camera_get_targetTexture_m834 (Camera_t57 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t112 * (*Camera_get_targetTexture_m834_ftn) (Camera_t57 *);
	static Camera_get_targetTexture_m834_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m834_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m835 (Camera_t57 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m835_ftn) (Camera_t57 *);
	static Camera_get_clearFlags_m835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t70  Camera_ScreenToWorldPoint_m258 (Camera_t57 * __this, Vector3_t70  ___position, const MethodInfo* method)
{
	{
		Vector3_t70  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m836(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t70  Camera_INTERNAL_CALL_ScreenToWorldPoint_m836 (Object_t * __this /* static, unused */, Camera_t57 * ___self, Vector3_t70 * ___position, const MethodInfo* method)
{
	typedef Vector3_t70  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m836_ftn) (Camera_t57 *, Vector3_t70 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t162  Camera_ScreenPointToRay_m837 (Camera_t57 * __this, Vector3_t70  ___position, const MethodInfo* method)
{
	{
		Ray_t162  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m838(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t162  Camera_INTERNAL_CALL_ScreenPointToRay_m838 (Object_t * __this /* static, unused */, Camera_t57 * ___self, Vector3_t70 * ___position, const MethodInfo* method)
{
	typedef Ray_t162  (*Camera_INTERNAL_CALL_ScreenPointToRay_m838_ftn) (Camera_t57 *, Vector3_t70 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m839 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m839_ftn) ();
	static Camera_get_allCamerasCount_m839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m840 (Object_t * __this /* static, unused */, CameraU5BU5D_t311* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m840_ftn) (CameraU5BU5D_t311*);
	static Camera_GetAllCameras_m840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern TypeInfo* Camera_t57_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m841 (Object_t * __this /* static, unused */, Camera_t57 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t181 * L_0 = ((Camera_t57_StaticFields*)Camera_t57_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t181 * L_1 = ((Camera_t57_StaticFields*)Camera_t57_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t57 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m825(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t57_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m842 (Object_t * __this /* static, unused */, Camera_t57 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t181 * L_0 = ((Camera_t57_StaticFields*)Camera_t57_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t181 * L_1 = ((Camera_t57_StaticFields*)Camera_t57_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t57 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m825(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t57_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m843 (Object_t * __this /* static, unused */, Camera_t57 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t181 * L_0 = ((Camera_t57_StaticFields*)Camera_t57_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t181 * L_1 = ((Camera_t57_StaticFields*)Camera_t57_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t57 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m825(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t58 * Camera_RaycastTry_m844 (Camera_t57 * __this, Ray_t162  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t58 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m845(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t58 * Camera_INTERNAL_CALL_RaycastTry_m845 (Object_t * __this /* static, unused */, Camera_t57 * ___self, Ray_t162 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t58 * (*Camera_INTERNAL_CALL_RaycastTry_m845_ftn) (Camera_t57 *, Ray_t162 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m845_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t58 * Camera_RaycastTry2D_m846 (Camera_t57 * __this, Ray_t162  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t58 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m847(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t58 * Camera_INTERNAL_CALL_RaycastTry2D_m847 (Object_t * __this /* static, unused */, Camera_t57 * ___self, Ray_t162 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t58 * (*Camera_INTERNAL_CALL_RaycastTry2D_m847_ftn) (Camera_t57 *, Ray_t162 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m848 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t71 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m848_ftn) (int32_t, String_t*, Object_t71 *);
	static Debug_Internal_Log_m848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern Il2CppCodeGenString* _stringLiteral140;
extern "C" void Debug_Log_m254 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral140;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m848(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t71 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern Il2CppCodeGenString* _stringLiteral140;
extern "C" void Debug_LogError_m849 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral140 = il2cpp_codegen_string_literal_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral140;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m848(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t71 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m850 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m848(NULL /*static, unused*/, 1, L_1, (Object_t71 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DisplaysUpdatedDelegate__ctor_m851 (DisplaysUpdatedDelegate_t183 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m852 (DisplaysUpdatedDelegate_t183 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m852((DisplaysUpdatedDelegate_t183 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t183(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m853 (DisplaysUpdatedDelegate_t183 * __this, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m854 (DisplaysUpdatedDelegate_t183 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m855 (Display_t185 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m1508(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m856 (Display_t185 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern TypeInfo* DisplayU5BU5D_t184_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m857 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t184* L_0 = ((DisplayU5BU5D_t184*)SZArrayNew(DisplayU5BU5D_t184_il2cpp_TypeInfo_var, 1));
		Display_t185 * L_1 = (Display_t185 *)il2cpp_codegen_object_new (Display_t185_il2cpp_TypeInfo_var);
		Display__ctor_m855(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t185 **)(Display_t185 **)SZArrayLdElema(L_0, 0)) = (Display_t185 *)L_1;
		((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t184* L_2 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t185 **)(Display_t185 **)SZArrayLdElema(L_2, L_3));
		((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t183 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t183_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m858 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t183 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		DisplaysUpdatedDelegate_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t183 * L_0 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t183 * L_1 = ___value;
		Delegate_t397 * L_2 = Delegate_Combine_m1509(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t183 *)Castclass(L_2, DisplaysUpdatedDelegate_t183_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t183_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m859 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t183 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		DisplaysUpdatedDelegate_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t183 * L_0 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t183 * L_1 = ___value;
		Delegate_t397 * L_2 = Delegate_Remove_m1510(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t183 *)Castclass(L_2, DisplaysUpdatedDelegate_t183_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m860 (Display_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m876(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m861 (Display_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m876(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m862 (Display_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m875(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m863 (Display_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m875(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t297  Display_get_colorBuffer_m864 (Display_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t297  V_0 = {0};
	RenderBuffer_t297  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m877(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t297  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t297  Display_get_depthBuffer_m865 (Display_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t297  V_0 = {0};
	RenderBuffer_t297  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m877(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t297  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m866 (Display_t185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m879(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m867 (Display_t185 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m879(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m868 (Display_t185 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m880(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m869 (Display_t185 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m878(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m870 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m881(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" Vector3_t70  Display_RelativeMouseAt_m871 (Object_t * __this /* static, unused */, Vector3_t70  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t70  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_0);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_1);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m882(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_2 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_0 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_1 = (((float)L_6));
		Vector3_t70  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" Display_t185 * Display_get_main_m872 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		Display_t185 * L_0 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern TypeInfo* DisplayU5BU5D_t184_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m873 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t351* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t351* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t184*)SZArrayNew(DisplayU5BU5D_t184_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t184* L_1 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t351* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t185 * L_6 = (Display_t185 *)il2cpp_codegen_object_new (Display_t185_il2cpp_TypeInfo_var);
		Display__ctor_m856(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t185 **)(Display_t185 **)SZArrayLdElema(L_1, L_2)) = (Display_t185 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t351* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t184* L_10 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t185 **)(Display_t185 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern TypeInfo* Display_t185_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m874 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t183 * L_0 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t185_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t183 * L_1 = ((Display_t185_StaticFields*)Display_t185_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		DisplaysUpdatedDelegate_Invoke_m852(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m875 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m875_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m876 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m876_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m877 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t297 * ___color, RenderBuffer_t297 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m877_ftn) (IntPtr_t, RenderBuffer_t297 *, RenderBuffer_t297 *);
	static Display_GetRenderingBuffersImpl_m877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m878 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m878_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m879 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m879_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m880 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m880_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m880_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m880_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m881 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m881_ftn) ();
	static Display_MultiDisplayLicenseImpl_m881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m882 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m882_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m239 (MonoBehaviour_t52 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m823(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t93 * MonoBehaviour_StartCoroutine_m883 (MonoBehaviour_t52 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t93 * L_1 = MonoBehaviour_StartCoroutine_Auto_m884(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t93 * MonoBehaviour_StartCoroutine_Auto_m884 (MonoBehaviour_t52 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t93 * (*MonoBehaviour_StartCoroutine_Auto_m884_ftn) (MonoBehaviour_t52 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"



// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t66  Touch_get_position_m279 (Touch_t76 * __this, const MethodInfo* method)
{
	{
		Vector2_t66  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m281 (Touch_t76 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t76_marshal(const Touch_t76& unmarshaled, Touch_t76_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t76_marshal_back(const Touch_t76_marshaled& marshaled, Touch_t76& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t76_marshal_cleanup(Touch_t76_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"



// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m885 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m886 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m886_ftn) (int32_t);
	static Input_GetMouseButton_m886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m887 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m887_ftn) (int32_t);
	static Input_GetMouseButtonDown_m887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern TypeInfo* Input_t77_il2cpp_TypeInfo_var;
extern "C" Vector3_t70  Input_get_mousePosition_m888 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t70  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t77_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mousePosition_m889(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t70  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_mousePosition_m889 (Object_t * __this /* static, unused */, Vector3_t70 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mousePosition_m889_ftn) (Vector3_t70 *);
	static Input_INTERNAL_get_mousePosition_m889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mousePosition_m889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t76  Input_GetTouch_m278 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t76  (*Input_GetTouch_m278_ftn) (int32_t);
	static Input_GetTouch_m278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m282 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m282_ftn) ();
	static Input_get_touchCount_m282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m890 (Object_t71 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t71 * Object_Internal_InstantiateSingle_m891 (Object_t * __this /* static, unused */, Object_t71 * ___data, Vector3_t70  ___pos, Quaternion_t75  ___rot, const MethodInfo* method)
{
	{
		Object_t71 * L_0 = ___data;
		Object_t71 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m892(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t71 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m892 (Object_t * __this /* static, unused */, Object_t71 * ___data, Vector3_t70 * ___pos, Quaternion_t75 * ___rot, const MethodInfo* method)
{
	typedef Object_t71 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m892_ftn) (Object_t71 *, Vector3_t70 *, Quaternion_t75 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m893 (Object_t71 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m893_ftn) (Object_t71 *);
	static Object_get_name_m893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m894 (Object_t71 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m894_ftn) (Object_t71 *);
	static Object_ToString_m894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern TypeInfo* Object_t71_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m895 (Object_t71 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t71_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(123);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m897(NULL /*static, unused*/, __this, ((Object_t71 *)IsInst(L_0, Object_t71_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m896 (Object_t71 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m899(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m897 (Object_t * __this /* static, unused */, Object_t71 * ___lhs, Object_t71 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t71 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t71 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t71 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t71 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t71 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m898(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t71 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m898(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t71 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t71 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m898 (Object_t * __this /* static, unused */, Object_t71 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(82);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t71 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m900(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m1511(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m899 (Object_t71 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m900 (Object_t71 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern Il2CppCodeGenString* _stringLiteral141;
extern "C" Object_t71 * Object_Instantiate_m267 (Object_t * __this /* static, unused */, Object_t71 * ___original, Vector3_t70  ___position, Quaternion_t75  ___rotation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t71 * L_0 = ___original;
		Object_CheckNullArgument_m901(NULL /*static, unused*/, L_0, _stringLiteral141, /*hidden argument*/NULL);
		Object_t71 * L_1 = ___original;
		Vector3_t70  L_2 = ___position;
		Quaternion_t75  L_3 = ___rotation;
		Object_t71 * L_4 = Object_Internal_InstantiateSingle_m891(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern TypeInfo* ArgumentException_t382_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m901 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t382 * L_2 = (ArgumentException_t382 *)il2cpp_codegen_object_new (ArgumentException_t382_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1453(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m902 (Object_t * __this /* static, unused */, Object_t71 * ___exists, const MethodInfo* method)
{
	{
		Object_t71 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m897(NULL /*static, unused*/, L_0, (Object_t71 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m903 (Object_t * __this /* static, unused */, Object_t71 * ___x, Object_t71 * ___y, const MethodInfo* method)
{
	{
		Object_t71 * L_0 = ___x;
		Object_t71 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m897(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m904 (Object_t * __this /* static, unused */, Object_t71 * ___x, Object_t71 * ___y, const MethodInfo* method)
{
	{
		Object_t71 * L_0 = ___x;
		Object_t71 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m897(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t71_marshal(const Object_t71& unmarshaled, Object_t71_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = reinterpret_cast<intptr_t>((unmarshaled.___m_CachedPtr_1).___m_value_0);
}
void Object_t71_marshal_back(const Object_t71_marshaled& marshaled, Object_t71& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	(unmarshaled.___m_CachedPtr_1).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_CachedPtr_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t71_marshal_cleanup(Object_t71_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m905 (Component_t69 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m890(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t73 * Component_get_transform_m255 (Component_t69 * __this, const MethodInfo* method)
{
	typedef Transform_t73 * (*Component_get_transform_m255_ftn) (Component_t69 *);
	static Component_get_transform_m255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m255_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t58 * Component_get_gameObject_m240 (Component_t69 * __this, const MethodInfo* method)
{
	typedef GameObject_t58 * (*Component_get_gameObject_m240_ftn) (Component_t69 *);
	static Component_get_gameObject_m240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m906 (Component_t69 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m906_ftn) (Component_t69 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"



// UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
extern "C" Component_t69 * GameObject_GetComponentByName_m907 (GameObject_t58 * __this, String_t* ___type, const MethodInfo* method)
{
	typedef Component_t69 * (*GameObject_GetComponentByName_m907_ftn) (GameObject_t58 *, String_t*);
	static GameObject_GetComponentByName_m907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentByName_m907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentByName(System.String)");
	return _il2cpp_icall_func(__this, ___type);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
extern "C" Component_t69 * GameObject_GetComponent_m241 (GameObject_t58 * __this, String_t* ___type, const MethodInfo* method)
{
	{
		String_t* L_0 = ___type;
		Component_t69 * L_1 = GameObject_GetComponentByName_m907(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t73 * GameObject_get_transform_m264 (GameObject_t58 * __this, const MethodInfo* method)
{
	typedef Transform_t73 * (*GameObject_get_transform_m264_ftn) (GameObject_t58 *);
	static GameObject_get_transform_m264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m908 (GameObject_t58 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m908_ftn) (GameObject_t58 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m908_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t69 * GameObject_Internal_AddComponentWithType_m909 (GameObject_t58 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t69 * (*GameObject_Internal_AddComponentWithType_m909_ftn) (GameObject_t58 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m909_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m909_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t69 * GameObject_AddComponent_m910 (GameObject_t58 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t69 * L_1 = GameObject_Internal_AddComponentWithType_m909(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m911 (Enumerator_t187 * __this, Transform_t73 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		Transform_t73 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m912 (Enumerator_t187 * __this, const MethodInfo* method)
{
	{
		Transform_t73 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t73 * L_2 = Transform_GetChild_m920(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m913 (Enumerator_t187 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t73 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m918(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t70  Transform_get_position_m256 (Transform_t73 * __this, const MethodInfo* method)
{
	Vector3_t70  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m914(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t70  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m271 (Transform_t73 * __this, Vector3_t70  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m915(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m914 (Transform_t73 * __this, Vector3_t70 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m914_ftn) (Transform_t73 *, Vector3_t70 *);
	static Transform_INTERNAL_get_position_m914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m915 (Transform_t73 * __this, Vector3_t70 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m915_ftn) (Transform_t73 *, Vector3_t70 *);
	static Transform_INTERNAL_set_position_m915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t70  Transform_get_localScale_m270 (Transform_t73 * __this, const MethodInfo* method)
{
	Vector3_t70  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m916(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t70  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m265 (Transform_t73 * __this, Vector3_t70  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m917(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m916 (Transform_t73 * __this, Vector3_t70 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m916_ftn) (Transform_t73 *, Vector3_t70 *);
	static Transform_INTERNAL_get_localScale_m916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m917 (Transform_t73 * __this, Vector3_t70 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m917_ftn) (Transform_t73 *, Vector3_t70 *);
	static Transform_INTERNAL_set_localScale_m917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m918 (Transform_t73 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m918_ftn) (Transform_t73 *);
	static Transform_get_childCount_m918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m918_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern TypeInfo* Enumerator_t187_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m919 (Transform_t73 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t187_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t187 * L_0 = (Enumerator_t187 *)il2cpp_codegen_object_new (Enumerator_t187_il2cpp_TypeInfo_var);
		Enumerator__ctor_m911(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t73 * Transform_GetChild_m920 (Transform_t73 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t73 * (*Transform_GetChild_m920_ftn) (Transform_t73 *, int32_t);
	static Transform_GetChild_m920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m920_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern "C" float Time_get_timeSinceLevelLoad_m277 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeSinceLevelLoad_m277_ftn) ();
	static Time_get_timeSinceLevelLoad_m277_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeSinceLevelLoad_m277_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeSinceLevelLoad()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Random::set_seed(System.Int32)
extern "C" void Random_set_seed_m250 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Random_set_seed_m250_ftn) (int32_t);
	static Random_set_seed_m250_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_set_seed_m250_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::set_seed(System.Int32)");
	_il2cpp_icall_func(___value);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" float Random_Range_m272 (Object_t * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method)
{
	typedef float (*Random_Range_m272_ftn) (float, float);
	static Random_Range_m272_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m272_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m921 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m922(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m922 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m922_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m922_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m922_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m923 (YieldInstruction_t90 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t90_marshal(const YieldInstruction_t90& unmarshaled, YieldInstruction_t90_marshaled& marshaled)
{
}
void YieldInstruction_t90_marshal_back(const YieldInstruction_t90_marshaled& marshaled, YieldInstruction_t90& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t90_marshal_cleanup(YieldInstruction_t90_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
