#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastNotSupportedException
struct MulticastNotSupportedException_t1394;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t377;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastNotSupportedException::.ctor()
extern "C" void MulticastNotSupportedException__ctor_m8259 (MulticastNotSupportedException_t1394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MulticastNotSupportedException::.ctor(System.String)
extern "C" void MulticastNotSupportedException__ctor_m8260 (MulticastNotSupportedException_t1394 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MulticastNotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastNotSupportedException__ctor_m8261 (MulticastNotSupportedException_t1394 * __this, SerializationInfo_t377 * ___info, StreamingContext_t378  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
