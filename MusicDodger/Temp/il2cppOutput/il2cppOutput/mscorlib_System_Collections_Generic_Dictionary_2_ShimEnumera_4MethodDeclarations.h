#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t1707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1698;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11346_gshared (ShimEnumerator_t1707 * __this, Dictionary_2_t1698 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11346(__this, ___host, method) (( void (*) (ShimEnumerator_t1707 *, Dictionary_2_t1698 *, const MethodInfo*))ShimEnumerator__ctor_m11346_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11347_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11347(__this, method) (( bool (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_MoveNext_m11347_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m11348_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11348(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Entry_m11348_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11349_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11349(__this, method) (( Object_t * (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Key_m11349_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11350_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11350(__this, method) (( Object_t * (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Value_m11350_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11351_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11351(__this, method) (( Object_t * (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Current_m11351_gshared)(__this, method)
