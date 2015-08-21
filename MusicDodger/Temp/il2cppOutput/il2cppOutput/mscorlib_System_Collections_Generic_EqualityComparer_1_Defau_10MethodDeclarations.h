#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1867;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12616_gshared (DefaultComparer_t1867 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12616(__this, method) (( void (*) (DefaultComparer_t1867 *, const MethodInfo*))DefaultComparer__ctor_m12616_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12617_gshared (DefaultComparer_t1867 * __this, DateTime_t129  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12617(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1867 *, DateTime_t129 , const MethodInfo*))DefaultComparer_GetHashCode_m12617_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12618_gshared (DefaultComparer_t1867 * __this, DateTime_t129  ___x, DateTime_t129  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12618(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1867 *, DateTime_t129 , DateTime_t129 , const MethodInfo*))DefaultComparer_Equals_m12618_gshared)(__this, ___x, ___y, method)
