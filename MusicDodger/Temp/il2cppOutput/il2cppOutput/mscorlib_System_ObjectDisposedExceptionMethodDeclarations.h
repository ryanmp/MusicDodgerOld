#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ObjectDisposedException
struct ObjectDisposedException_t680;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" void ObjectDisposedException__ctor_m2734 (ObjectDisposedException_t680 * __this, String_t* ___objectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern "C" void ObjectDisposedException__ctor_m8377 (ObjectDisposedException_t680 * __this, String_t* ___objectName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectDisposedException__ctor_m8378 (ObjectDisposedException_t680 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ObjectDisposedException::get_Message()
extern "C" String_t* ObjectDisposedException_get_Message_m8379 (ObjectDisposedException_t680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectDisposedException_GetObjectData_m8380 (ObjectDisposedException_t680 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
