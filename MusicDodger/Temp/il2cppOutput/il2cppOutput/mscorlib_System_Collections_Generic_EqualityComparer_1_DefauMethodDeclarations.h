﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t1786;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m10629_gshared (DefaultComparer_t1786 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10629(__this, method) (( void (*) (DefaultComparer_t1786 *, const MethodInfo*))DefaultComparer__ctor_m10629_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10630_gshared (DefaultComparer_t1786 * __this, Object_t * ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10630(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1786 *, Object_t *, const MethodInfo*))DefaultComparer_GetHashCode_m10630_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10631_gshared (DefaultComparer_t1786 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10631(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1786 *, Object_t *, Object_t *, const MethodInfo*))DefaultComparer_Equals_m10631_gshared)(__this, ___x, ___y, method)
