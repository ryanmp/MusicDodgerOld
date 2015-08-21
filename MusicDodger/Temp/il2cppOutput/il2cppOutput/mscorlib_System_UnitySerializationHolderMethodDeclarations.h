#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1418;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1360;
// System.Reflection.Module
struct Module_t1023;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m8489 (UnitySerializationHolder_t1418 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m8490 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t379 * ___info, StreamingContext_t380  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m8491 (Object_t * __this /* static, unused */, DBNull_t1360 * ___instance, SerializationInfo_t379 * ___info, StreamingContext_t380  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m8492 (Object_t * __this /* static, unused */, Module_t1023 * ___instance, SerializationInfo_t379 * ___info, StreamingContext_t380  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m8493 (UnitySerializationHolder_t1418 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m8494 (UnitySerializationHolder_t1418 * __this, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
