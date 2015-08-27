#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2224;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2215;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16724_gshared (ShimEnumerator_t2224 * __this, Dictionary_2_t2215 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16724(__this, ___host, method) (( void (*) (ShimEnumerator_t2224 *, Dictionary_2_t2215 *, const MethodInfo*))ShimEnumerator__ctor_m16724_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16725_gshared (ShimEnumerator_t2224 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16725(__this, method) (( bool (*) (ShimEnumerator_t2224 *, const MethodInfo*))ShimEnumerator_MoveNext_m16725_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m16726_gshared (ShimEnumerator_t2224 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16726(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t2224 *, const MethodInfo*))ShimEnumerator_get_Entry_m16726_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16727_gshared (ShimEnumerator_t2224 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16727(__this, method) (( Object_t * (*) (ShimEnumerator_t2224 *, const MethodInfo*))ShimEnumerator_get_Key_m16727_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16728_gshared (ShimEnumerator_t2224 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16728(__this, method) (( Object_t * (*) (ShimEnumerator_t2224 *, const MethodInfo*))ShimEnumerator_get_Value_m16728_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16729_gshared (ShimEnumerator_t2224 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16729(__this, method) (( Object_t * (*) (ShimEnumerator_t2224 *, const MethodInfo*))ShimEnumerator_get_Current_m16729_gshared)(__this, method)
