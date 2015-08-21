#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1525;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1512;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m8894_gshared (ShimEnumerator_t1525 * __this, Dictionary_2_t1512 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m8894(__this, ___host, method) (( void (*) (ShimEnumerator_t1525 *, Dictionary_2_t1512 *, const MethodInfo*))ShimEnumerator__ctor_m8894_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m8895_gshared (ShimEnumerator_t1525 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m8895(__this, method) (( bool (*) (ShimEnumerator_t1525 *, const MethodInfo*))ShimEnumerator_MoveNext_m8895_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m8896_gshared (ShimEnumerator_t1525 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m8896(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1525 *, const MethodInfo*))ShimEnumerator_get_Entry_m8896_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m8897_gshared (ShimEnumerator_t1525 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m8897(__this, method) (( Object_t * (*) (ShimEnumerator_t1525 *, const MethodInfo*))ShimEnumerator_get_Key_m8897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m8898_gshared (ShimEnumerator_t1525 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m8898(__this, method) (( Object_t * (*) (ShimEnumerator_t1525 *, const MethodInfo*))ShimEnumerator_get_Value_m8898_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m8899_gshared (ShimEnumerator_t1525 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m8899(__this, method) (( Object_t * (*) (ShimEnumerator_t1525 *, const MethodInfo*))ShimEnumerator_get_Current_m8899_gshared)(__this, method)
