﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1877;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12662_gshared (DefaultComparer_t1877 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12662(__this, method) (( void (*) (DefaultComparer_t1877 *, const MethodInfo*))DefaultComparer__ctor_m12662_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12663_gshared (DefaultComparer_t1877 * __this, TimeSpan_t525  ___x, TimeSpan_t525  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12663(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1877 *, TimeSpan_t525 , TimeSpan_t525 , const MethodInfo*))DefaultComparer_Compare_m12663_gshared)(__this, ___x, ___y, method)
