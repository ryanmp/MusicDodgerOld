#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OverflowException
struct OverflowException_t1401;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OverflowException::.ctor()
extern "C" void OverflowException__ctor_m8387 (OverflowException_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String)
extern "C" void OverflowException__ctor_m8388 (OverflowException_t1401 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OverflowException__ctor_m8389 (OverflowException_t1401 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
