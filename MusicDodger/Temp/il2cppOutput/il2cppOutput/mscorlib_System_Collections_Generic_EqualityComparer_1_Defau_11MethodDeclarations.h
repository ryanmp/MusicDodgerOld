#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1869;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12622_gshared (DefaultComparer_t1869 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12622(__this, method) (( void (*) (DefaultComparer_t1869 *, const MethodInfo*))DefaultComparer__ctor_m12622_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12623_gshared (DefaultComparer_t1869 * __this, DateTimeOffset_t424  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12623(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1869 *, DateTimeOffset_t424 , const MethodInfo*))DefaultComparer_GetHashCode_m12623_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12624_gshared (DefaultComparer_t1869 * __this, DateTimeOffset_t424  ___x, DateTimeOffset_t424  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12624(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1869 *, DateTimeOffset_t424 , DateTimeOffset_t424 , const MethodInfo*))DefaultComparer_Equals_m12624_gshared)(__this, ___x, ___y, method)
