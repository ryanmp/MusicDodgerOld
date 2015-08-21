﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t1855;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12528_gshared (InternalEnumerator_1_t1855 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12528(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1855 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12528_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12529_gshared (InternalEnumerator_1_t1855 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12529(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1855 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12529_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12530_gshared (InternalEnumerator_1_t1855 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12530(__this, method) (( void (*) (InternalEnumerator_1_t1855 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12530_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12531_gshared (InternalEnumerator_1_t1855 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12531(__this, method) (( bool (*) (InternalEnumerator_1_t1855 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12531_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t125  InternalEnumerator_1_get_Current_m12532_gshared (InternalEnumerator_1_t1855 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12532(__this, method) (( DateTime_t125  (*) (InternalEnumerator_1_t1855 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12532_gshared)(__this, method)
