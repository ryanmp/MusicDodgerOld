#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1875;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12651_gshared (DefaultComparer_t1875 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12651(__this, method) (( void (*) (DefaultComparer_t1875 *, const MethodInfo*))DefaultComparer__ctor_m12651_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12652_gshared (DefaultComparer_t1875 * __this, TimeSpan_t523  ___x, TimeSpan_t523  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12652(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1875 *, TimeSpan_t523 , TimeSpan_t523 , const MethodInfo*))DefaultComparer_Compare_m12652_gshared)(__this, ___x, ___y, method)
