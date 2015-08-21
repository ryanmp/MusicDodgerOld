#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1869;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12624_gshared (DefaultComparer_t1869 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12624(__this, method) (( void (*) (DefaultComparer_t1869 *, const MethodInfo*))DefaultComparer__ctor_m12624_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12625_gshared (DefaultComparer_t1869 * __this, DateTimeOffset_t426  ___x, DateTimeOffset_t426  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12625(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1869 *, DateTimeOffset_t426 , DateTimeOffset_t426 , const MethodInfo*))DefaultComparer_Compare_m12625_gshared)(__this, ___x, ___y, method)
