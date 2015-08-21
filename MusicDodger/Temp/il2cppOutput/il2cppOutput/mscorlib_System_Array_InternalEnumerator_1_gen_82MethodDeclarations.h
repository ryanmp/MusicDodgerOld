#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
struct InternalEnumerator_1_t1842;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12465_gshared (InternalEnumerator_1_t1842 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12465(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1842 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12465_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12466_gshared (InternalEnumerator_1_t1842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12466(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1842 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12466_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12467_gshared (InternalEnumerator_1_t1842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12467(__this, method) (( void (*) (InternalEnumerator_1_t1842 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12467_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12468_gshared (InternalEnumerator_1_t1842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12468(__this, method) (( bool (*) (InternalEnumerator_1_t1842 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12468_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1017  InternalEnumerator_1_get_Current_m12469_gshared (InternalEnumerator_1_t1842 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12469(__this, method) (( LabelData_t1017  (*) (InternalEnumerator_1_t1842 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12469_gshared)(__this, method)
