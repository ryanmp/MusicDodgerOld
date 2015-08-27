#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
struct DefaultComparer_t1845;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::.ctor()
extern "C" void DefaultComparer__ctor_m11338_gshared (DefaultComparer_t1845 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11338(__this, method) (( void (*) (DefaultComparer_t1845 *, const MethodInfo*))DefaultComparer__ctor_m11338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11339_gshared (DefaultComparer_t1845 * __this, float ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11339(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1845 *, float, const MethodInfo*))DefaultComparer_GetHashCode_m11339_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11340_gshared (DefaultComparer_t1845 * __this, float ___x, float ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11340(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1845 *, float, float, const MethodInfo*))DefaultComparer_Equals_m11340_gshared)(__this, ___x, ___y, method)
