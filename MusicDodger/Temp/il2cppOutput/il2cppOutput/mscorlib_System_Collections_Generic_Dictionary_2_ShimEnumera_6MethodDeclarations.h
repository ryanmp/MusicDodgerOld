#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t1774;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1762;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12015_gshared (ShimEnumerator_t1774 * __this, Dictionary_2_t1762 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12015(__this, ___host, method) (( void (*) (ShimEnumerator_t1774 *, Dictionary_2_t1762 *, const MethodInfo*))ShimEnumerator__ctor_m12015_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12016_gshared (ShimEnumerator_t1774 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12016(__this, method) (( bool (*) (ShimEnumerator_t1774 *, const MethodInfo*))ShimEnumerator_MoveNext_m12016_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m12017_gshared (ShimEnumerator_t1774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12017(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1774 *, const MethodInfo*))ShimEnumerator_get_Entry_m12017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12018_gshared (ShimEnumerator_t1774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12018(__this, method) (( Object_t * (*) (ShimEnumerator_t1774 *, const MethodInfo*))ShimEnumerator_get_Key_m12018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12019_gshared (ShimEnumerator_t1774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12019(__this, method) (( Object_t * (*) (ShimEnumerator_t1774 *, const MethodInfo*))ShimEnumerator_get_Value_m12019_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12020_gshared (ShimEnumerator_t1774 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12020(__this, method) (( Object_t * (*) (ShimEnumerator_t1774 *, const MethodInfo*))ShimEnumerator_get_Current_m12020_gshared)(__this, method)
