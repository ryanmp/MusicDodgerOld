#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ApplicationException
struct ApplicationException_t1351;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t377;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationException::.ctor()
extern "C" void ApplicationException__ctor_m7734 (ApplicationException_t1351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" void ApplicationException__ctor_m7735 (ApplicationException_t1351 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ApplicationException__ctor_m7736 (ApplicationException_t1351 * __this, SerializationInfo_t377 * ___info, StreamingContext_t378  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
