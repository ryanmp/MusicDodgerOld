#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Delegate
struct Delegate_t397;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Delegate[]
struct DelegateU5BU5D_t1448;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" MethodInfo_t * Delegate_get_Method_m4198 (Delegate_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C" Object_t * Delegate_get_Target_m4199 (Delegate_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t397 * Delegate_CreateDelegate_internal_m4200 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t * ___info, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
extern "C" void Delegate_SetMulticastInvoke_m4201 (Delegate_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
extern "C" bool Delegate_arg_type_match_m4202 (Object_t * __this /* static, unused */, Type_t * ___delArgType, Type_t * ___argType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
extern "C" bool Delegate_return_type_match_m4203 (Object_t * __this /* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4204 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4205 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4206 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4207 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
extern "C" MethodInfo_t * Delegate_GetCandidateMethod_m4208 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4209 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4210 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4211 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
extern "C" Delegate_t397 * Delegate_CreateDelegate_m4212 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
extern "C" Object_t * Delegate_Clone_m4213 (Delegate_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
extern "C" bool Delegate_Equals_m4214 (Delegate_t397 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
extern "C" int32_t Delegate_GetHashCode_m4215 (Delegate_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Delegate_GetObjectData_m4216 (Delegate_t397 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1448* Delegate_GetInvocationList_m4217 (Delegate_t397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" Delegate_t397 * Delegate_Combine_m1509 (Object_t * __this /* static, unused */, Delegate_t397 * ___a, Delegate_t397 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
extern "C" Delegate_t397 * Delegate_Combine_m4218 (Object_t * __this /* static, unused */, DelegateU5BU5D_t1448* ___delegates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
extern "C" Delegate_t397 * Delegate_CombineImpl_m4219 (Delegate_t397 * __this, Delegate_t397 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" Delegate_t397 * Delegate_Remove_m1510 (Object_t * __this /* static, unused */, Delegate_t397 * ___source, Delegate_t397 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t397 * Delegate_RemoveImpl_m4220 (Delegate_t397 * __this, Delegate_t397 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
