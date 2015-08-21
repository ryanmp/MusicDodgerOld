#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1151;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern "C" void LogicalCallContext__ctor_m6518 (LogicalCallContext_t1151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LogicalCallContext__ctor_m6519 (LogicalCallContext_t1151 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LogicalCallContext_GetObjectData_m6520 (LogicalCallContext_t1151 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern "C" void LogicalCallContext_SetData_m6521 (LogicalCallContext_t1151 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
