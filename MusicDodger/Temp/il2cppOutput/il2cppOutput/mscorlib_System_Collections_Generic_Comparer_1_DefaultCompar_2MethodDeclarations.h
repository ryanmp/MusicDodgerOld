#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1867;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12613_gshared (DefaultComparer_t1867 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12613(__this, method) (( void (*) (DefaultComparer_t1867 *, const MethodInfo*))DefaultComparer__ctor_m12613_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12614_gshared (DefaultComparer_t1867 * __this, DateTimeOffset_t424  ___x, DateTimeOffset_t424  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12614(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1867 *, DateTimeOffset_t424 , DateTimeOffset_t424 , const MethodInfo*))DefaultComparer_Compare_m12614_gshared)(__this, ___x, ___y, method)
