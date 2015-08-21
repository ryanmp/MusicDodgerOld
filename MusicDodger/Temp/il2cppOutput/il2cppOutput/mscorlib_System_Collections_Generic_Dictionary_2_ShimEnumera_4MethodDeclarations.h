#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t1709;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1700;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11357_gshared (ShimEnumerator_t1709 * __this, Dictionary_2_t1700 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11357(__this, ___host, method) (( void (*) (ShimEnumerator_t1709 *, Dictionary_2_t1700 *, const MethodInfo*))ShimEnumerator__ctor_m11357_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11358_gshared (ShimEnumerator_t1709 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11358(__this, method) (( bool (*) (ShimEnumerator_t1709 *, const MethodInfo*))ShimEnumerator_MoveNext_m11358_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m11359_gshared (ShimEnumerator_t1709 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11359(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1709 *, const MethodInfo*))ShimEnumerator_get_Entry_m11359_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11360_gshared (ShimEnumerator_t1709 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11360(__this, method) (( Object_t * (*) (ShimEnumerator_t1709 *, const MethodInfo*))ShimEnumerator_get_Key_m11360_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11361_gshared (ShimEnumerator_t1709 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11361(__this, method) (( Object_t * (*) (ShimEnumerator_t1709 *, const MethodInfo*))ShimEnumerator_get_Value_m11361_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11362_gshared (ShimEnumerator_t1709 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11362(__this, method) (( Object_t * (*) (ShimEnumerator_t1709 *, const MethodInfo*))ShimEnumerator_get_Current_m11362_gshared)(__this, method)
