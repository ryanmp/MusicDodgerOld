#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Comparer
struct Comparer_t933;
// System.Globalization.CultureInfo
struct CultureInfo_t405;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Comparer::.ctor()
extern "C" void Comparer__ctor_m5142 (Comparer_t933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
extern "C" void Comparer__ctor_m5143 (Comparer_t933 * __this, CultureInfo_t405 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.cctor()
extern "C" void Comparer__cctor_m5144 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Comparer::Compare(System.Object,System.Object)
extern "C" int32_t Comparer_Compare_m5145 (Comparer_t933 * __this, Object_t * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Comparer_GetObjectData_m5146 (Comparer_t933 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
