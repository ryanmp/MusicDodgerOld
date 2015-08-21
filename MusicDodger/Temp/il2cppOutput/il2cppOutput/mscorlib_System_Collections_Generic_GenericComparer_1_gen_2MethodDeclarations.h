#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1495;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m8584_gshared (GenericComparer_1_t1495 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8584(__this, method) (( void (*) (GenericComparer_1_t1495 *, const MethodInfo*))GenericComparer_1__ctor_m8584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12657_gshared (GenericComparer_1_t1495 * __this, TimeSpan_t525  ___x, TimeSpan_t525  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12657(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1495 *, TimeSpan_t525 , TimeSpan_t525 , const MethodInfo*))GenericComparer_1_Compare_m12657_gshared)(__this, ___x, ___y, method)
