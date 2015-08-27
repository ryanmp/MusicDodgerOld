﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.DateTime>
struct Comparer_1_t2386;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
extern "C" void Comparer_1__ctor_m18146_gshared (Comparer_1_t2386 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m18146(__this, method) (( void (*) (Comparer_1_t2386 *, const MethodInfo*))Comparer_1__ctor_m18146_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
extern "C" void Comparer_1__cctor_m18147_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m18147(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m18147_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m18148_gshared (Comparer_1_t2386 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m18148(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t2386 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m18148_gshared)(__this, ___x, ___y, method)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
extern "C" Comparer_1_t2386 * Comparer_1_get_Default_m18149_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m18149(__this /* static, unused */, method) (( Comparer_1_t2386 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m18149_gshared)(__this /* static, unused */, method)