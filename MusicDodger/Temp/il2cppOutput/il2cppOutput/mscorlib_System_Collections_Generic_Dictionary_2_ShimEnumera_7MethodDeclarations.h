#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t1796;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t557;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12220_gshared (ShimEnumerator_t1796 * __this, Dictionary_2_t557 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12220(__this, ___host, method) (( void (*) (ShimEnumerator_t1796 *, Dictionary_2_t557 *, const MethodInfo*))ShimEnumerator__ctor_m12220_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12221_gshared (ShimEnumerator_t1796 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12221(__this, method) (( bool (*) (ShimEnumerator_t1796 *, const MethodInfo*))ShimEnumerator_MoveNext_m12221_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m12222_gshared (ShimEnumerator_t1796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12222(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1796 *, const MethodInfo*))ShimEnumerator_get_Entry_m12222_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12223_gshared (ShimEnumerator_t1796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12223(__this, method) (( Object_t * (*) (ShimEnumerator_t1796 *, const MethodInfo*))ShimEnumerator_get_Key_m12223_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12224_gshared (ShimEnumerator_t1796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12224(__this, method) (( Object_t * (*) (ShimEnumerator_t1796 *, const MethodInfo*))ShimEnumerator_get_Value_m12224_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12225_gshared (ShimEnumerator_t1796 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12225(__this, method) (( Object_t * (*) (ShimEnumerator_t1796 *, const MethodInfo*))ShimEnumerator_get_Current_m12225_gshared)(__this, method)
