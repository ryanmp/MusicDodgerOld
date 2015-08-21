#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t1857;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12539_gshared (InternalEnumerator_1_t1857 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12539(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1857 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12539_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12540_gshared (InternalEnumerator_1_t1857 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12540(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1857 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12540_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12541_gshared (InternalEnumerator_1_t1857 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12541(__this, method) (( void (*) (InternalEnumerator_1_t1857 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12541_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12542_gshared (InternalEnumerator_1_t1857 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12542(__this, method) (( bool (*) (InternalEnumerator_1_t1857 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12542_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t129  InternalEnumerator_1_get_Current_m12543_gshared (InternalEnumerator_1_t1857 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12543(__this, method) (( DateTime_t129  (*) (InternalEnumerator_1_t1857 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12543_gshared)(__this, method)
