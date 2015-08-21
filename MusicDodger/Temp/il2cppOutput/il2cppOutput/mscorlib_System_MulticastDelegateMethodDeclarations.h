#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t121;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t377;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1446;
// System.Delegate
struct Delegate_t395;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m4179 (MulticastDelegate_t121 * __this, SerializationInfo_t377 * ___info, StreamingContext_t378  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m4180 (MulticastDelegate_t121 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m4181 (MulticastDelegate_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1446* MulticastDelegate_GetInvocationList_m4182 (MulticastDelegate_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t395 * MulticastDelegate_CombineImpl_m4183 (MulticastDelegate_t121 * __this, Delegate_t395 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4184 (MulticastDelegate_t121 * __this, MulticastDelegate_t121 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t121 * MulticastDelegate_KPM_m4185 (Object_t * __this /* static, unused */, MulticastDelegate_t121 * ___needle, MulticastDelegate_t121 * ___haystack, MulticastDelegate_t121 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t395 * MulticastDelegate_RemoveImpl_m4186 (MulticastDelegate_t121 * __this, Delegate_t395 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
