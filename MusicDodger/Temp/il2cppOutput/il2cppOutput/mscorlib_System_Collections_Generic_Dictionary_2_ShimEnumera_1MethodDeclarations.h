#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1591;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1580;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9746_gshared (ShimEnumerator_t1591 * __this, Dictionary_2_t1580 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9746(__this, ___host, method) (( void (*) (ShimEnumerator_t1591 *, Dictionary_2_t1580 *, const MethodInfo*))ShimEnumerator__ctor_m9746_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9747_gshared (ShimEnumerator_t1591 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9747(__this, method) (( bool (*) (ShimEnumerator_t1591 *, const MethodInfo*))ShimEnumerator_MoveNext_m9747_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m9748_gshared (ShimEnumerator_t1591 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9748(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1591 *, const MethodInfo*))ShimEnumerator_get_Entry_m9748_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9749_gshared (ShimEnumerator_t1591 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9749(__this, method) (( Object_t * (*) (ShimEnumerator_t1591 *, const MethodInfo*))ShimEnumerator_get_Key_m9749_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9750_gshared (ShimEnumerator_t1591 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9750(__this, method) (( Object_t * (*) (ShimEnumerator_t1591 *, const MethodInfo*))ShimEnumerator_get_Value_m9750_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9751_gshared (ShimEnumerator_t1591 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9751(__this, method) (( Object_t * (*) (ShimEnumerator_t1591 *, const MethodInfo*))ShimEnumerator_get_Current_m9751_gshared)(__this, method)
