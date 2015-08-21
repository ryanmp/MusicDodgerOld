#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1879;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12671_gshared (DefaultComparer_t1879 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12671(__this, method) (( void (*) (DefaultComparer_t1879 *, const MethodInfo*))DefaultComparer__ctor_m12671_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12672_gshared (DefaultComparer_t1879 * __this, TimeSpan_t525  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12672(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1879 *, TimeSpan_t525 , const MethodInfo*))DefaultComparer_GetHashCode_m12672_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12673_gshared (DefaultComparer_t1879 * __this, TimeSpan_t525  ___x, TimeSpan_t525  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12673(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1879 *, TimeSpan_t525 , TimeSpan_t525 , const MethodInfo*))DefaultComparer_Equals_m12673_gshared)(__this, ___x, ___y, method)
