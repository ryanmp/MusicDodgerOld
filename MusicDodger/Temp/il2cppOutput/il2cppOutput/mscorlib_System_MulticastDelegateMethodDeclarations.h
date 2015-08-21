#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t125;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1448;
// System.Delegate
struct Delegate_t397;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m4190 (MulticastDelegate_t125 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m4191 (MulticastDelegate_t125 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m4192 (MulticastDelegate_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1448* MulticastDelegate_GetInvocationList_m4193 (MulticastDelegate_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t397 * MulticastDelegate_CombineImpl_m4194 (MulticastDelegate_t125 * __this, Delegate_t397 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4195 (MulticastDelegate_t125 * __this, MulticastDelegate_t125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t125 * MulticastDelegate_KPM_m4196 (Object_t * __this /* static, unused */, MulticastDelegate_t125 * ___needle, MulticastDelegate_t125 * ___haystack, MulticastDelegate_t125 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t397 * MulticastDelegate_RemoveImpl_m4197 (MulticastDelegate_t125 * __this, Delegate_t397 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
