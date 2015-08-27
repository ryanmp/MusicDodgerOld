#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1772;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m10412_gshared (GenericComparer_1_t1772 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m10412(__this, method) (( void (*) (GenericComparer_1_t1772 *, const MethodInfo*))GenericComparer_1__ctor_m10412_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m18200_gshared (GenericComparer_1_t1772 * __this, TimeSpan_t800  ___x, TimeSpan_t800  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m18200(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1772 *, TimeSpan_t800 , TimeSpan_t800 , const MethodInfo*))GenericComparer_1_Compare_m18200_gshared)(__this, ___x, ___y, method)
