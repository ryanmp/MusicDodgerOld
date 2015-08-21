#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t1772;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1760;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12004_gshared (ShimEnumerator_t1772 * __this, Dictionary_2_t1760 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12004(__this, ___host, method) (( void (*) (ShimEnumerator_t1772 *, Dictionary_2_t1760 *, const MethodInfo*))ShimEnumerator__ctor_m12004_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12005_gshared (ShimEnumerator_t1772 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12005(__this, method) (( bool (*) (ShimEnumerator_t1772 *, const MethodInfo*))ShimEnumerator_MoveNext_m12005_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m12006_gshared (ShimEnumerator_t1772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12006(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1772 *, const MethodInfo*))ShimEnumerator_get_Entry_m12006_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12007_gshared (ShimEnumerator_t1772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12007(__this, method) (( Object_t * (*) (ShimEnumerator_t1772 *, const MethodInfo*))ShimEnumerator_get_Key_m12007_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12008_gshared (ShimEnumerator_t1772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12008(__this, method) (( Object_t * (*) (ShimEnumerator_t1772 *, const MethodInfo*))ShimEnumerator_get_Value_m12008_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12009_gshared (ShimEnumerator_t1772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12009(__this, method) (( Object_t * (*) (ShimEnumerator_t1772 *, const MethodInfo*))ShimEnumerator_get_Current_m12009_gshared)(__this, method)
