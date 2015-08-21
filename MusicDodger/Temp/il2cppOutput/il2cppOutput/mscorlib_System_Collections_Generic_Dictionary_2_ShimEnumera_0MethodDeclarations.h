#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1569;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1558;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9392_gshared (ShimEnumerator_t1569 * __this, Dictionary_2_t1558 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9392(__this, ___host, method) (( void (*) (ShimEnumerator_t1569 *, Dictionary_2_t1558 *, const MethodInfo*))ShimEnumerator__ctor_m9392_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9393_gshared (ShimEnumerator_t1569 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9393(__this, method) (( bool (*) (ShimEnumerator_t1569 *, const MethodInfo*))ShimEnumerator_MoveNext_m9393_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m9394_gshared (ShimEnumerator_t1569 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9394(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1569 *, const MethodInfo*))ShimEnumerator_get_Entry_m9394_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9395_gshared (ShimEnumerator_t1569 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9395(__this, method) (( Object_t * (*) (ShimEnumerator_t1569 *, const MethodInfo*))ShimEnumerator_get_Key_m9395_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9396_gshared (ShimEnumerator_t1569 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9396(__this, method) (( Object_t * (*) (ShimEnumerator_t1569 *, const MethodInfo*))ShimEnumerator_get_Value_m9396_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9397_gshared (ShimEnumerator_t1569 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9397(__this, method) (( Object_t * (*) (ShimEnumerator_t1569 *, const MethodInfo*))ShimEnumerator_get_Current_m9397_gshared)(__this, method)
