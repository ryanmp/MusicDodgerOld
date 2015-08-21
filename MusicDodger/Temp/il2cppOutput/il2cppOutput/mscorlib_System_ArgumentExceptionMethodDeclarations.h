#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentException
struct ArgumentException_t382;
// System.String
struct String_t;
// System.Exception
struct Exception_t27;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
extern "C" void ArgumentException__ctor_m7750 (ArgumentException_t382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" void ArgumentException__ctor_m1453 (ArgumentException_t382 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C" void ArgumentException__ctor_m2615 (ArgumentException_t382 * __this, String_t* ___message, Exception_t27 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" void ArgumentException__ctor_m2513 (ArgumentException_t382 * __this, String_t* ___message, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C" void ArgumentException__ctor_m7751 (ArgumentException_t382 * __this, String_t* ___message, String_t* ___paramName, Exception_t27 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException__ctor_m7752 (ArgumentException_t382 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
extern "C" String_t* ArgumentException_get_ParamName_m7753 (ArgumentException_t382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
extern "C" String_t* ArgumentException_get_Message_m7754 (ArgumentException_t382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException_GetObjectData_m7755 (ArgumentException_t382 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
