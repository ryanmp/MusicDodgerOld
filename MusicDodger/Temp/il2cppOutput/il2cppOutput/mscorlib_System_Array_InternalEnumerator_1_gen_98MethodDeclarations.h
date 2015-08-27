#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t2376;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18028_gshared (InternalEnumerator_1_t2376 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18028(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2376 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18028_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18029_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18029(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18029_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18030_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18030(__this, method) (( void (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18030_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18031_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18031(__this, method) (( bool (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18031_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t415  InternalEnumerator_1_get_Current_m18032_gshared (InternalEnumerator_1_t2376 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18032(__this, method) (( DateTime_t415  (*) (InternalEnumerator_1_t2376 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18032_gshared)(__this, method)
