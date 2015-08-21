#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1865;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12607_gshared (DefaultComparer_t1865 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12607(__this, method) (( void (*) (DefaultComparer_t1865 *, const MethodInfo*))DefaultComparer__ctor_m12607_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12608_gshared (DefaultComparer_t1865 * __this, DateTime_t129  ___x, DateTime_t129  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12608(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1865 *, DateTime_t129 , DateTime_t129 , const MethodInfo*))DefaultComparer_Compare_m12608_gshared)(__this, ___x, ___y, method)
