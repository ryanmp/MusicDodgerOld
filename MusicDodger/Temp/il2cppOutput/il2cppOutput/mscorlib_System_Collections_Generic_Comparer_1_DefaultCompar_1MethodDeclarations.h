#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1863;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12596_gshared (DefaultComparer_t1863 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12596(__this, method) (( void (*) (DefaultComparer_t1863 *, const MethodInfo*))DefaultComparer__ctor_m12596_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12597_gshared (DefaultComparer_t1863 * __this, DateTime_t125  ___x, DateTime_t125  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12597(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1863 *, DateTime_t125 , DateTime_t125 , const MethodInfo*))DefaultComparer_Compare_m12597_gshared)(__this, ___x, ___y, method)
