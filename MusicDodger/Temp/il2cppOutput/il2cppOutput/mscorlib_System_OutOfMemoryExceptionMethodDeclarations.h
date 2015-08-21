#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OutOfMemoryException
struct OutOfMemoryException_t1400;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OutOfMemoryException::.ctor()
extern "C" void OutOfMemoryException__ctor_m8385 (OutOfMemoryException_t1400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OutOfMemoryException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OutOfMemoryException__ctor_m8386 (OutOfMemoryException_t1400 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
