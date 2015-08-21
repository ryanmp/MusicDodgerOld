#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1877;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12660_gshared (DefaultComparer_t1877 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12660(__this, method) (( void (*) (DefaultComparer_t1877 *, const MethodInfo*))DefaultComparer__ctor_m12660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12661_gshared (DefaultComparer_t1877 * __this, TimeSpan_t523  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12661(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1877 *, TimeSpan_t523 , const MethodInfo*))DefaultComparer_GetHashCode_m12661_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12662_gshared (DefaultComparer_t1877 * __this, TimeSpan_t523  ___x, TimeSpan_t523  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12662(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1877 *, TimeSpan_t523 , TimeSpan_t523 , const MethodInfo*))DefaultComparer_Equals_m12662_gshared)(__this, ___x, ___y, method)
