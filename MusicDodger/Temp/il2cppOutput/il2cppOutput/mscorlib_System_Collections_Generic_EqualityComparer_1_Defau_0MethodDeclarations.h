﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
struct DefaultComparer_t1828;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m11099_gshared (DefaultComparer_t1828 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11099(__this, method) (( void (*) (DefaultComparer_t1828 *, const MethodInfo*))DefaultComparer__ctor_m11099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11100_gshared (DefaultComparer_t1828 * __this, int32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11100(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1828 *, int32_t, const MethodInfo*))DefaultComparer_GetHashCode_m11100_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11101_gshared (DefaultComparer_t1828 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11101(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1828 *, int32_t, int32_t, const MethodInfo*))DefaultComparer_Equals_m11101_gshared)(__this, ___x, ___y, method)
