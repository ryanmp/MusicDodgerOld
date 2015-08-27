#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t197;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1725;
// System.Delegate
struct Delegate_t342;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6002 (MulticastDelegate_t197 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6003 (MulticastDelegate_t197 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6004 (MulticastDelegate_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1725* MulticastDelegate_GetInvocationList_m6005 (MulticastDelegate_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t342 * MulticastDelegate_CombineImpl_m6006 (MulticastDelegate_t197 * __this, Delegate_t342 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6007 (MulticastDelegate_t197 * __this, MulticastDelegate_t197 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t197 * MulticastDelegate_KPM_m6008 (Object_t * __this /* static, unused */, MulticastDelegate_t197 * ___needle, MulticastDelegate_t197 * ___haystack, MulticastDelegate_t197 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t342 * MulticastDelegate_RemoveImpl_m6009 (MulticastDelegate_t197 * __this, Delegate_t342 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
