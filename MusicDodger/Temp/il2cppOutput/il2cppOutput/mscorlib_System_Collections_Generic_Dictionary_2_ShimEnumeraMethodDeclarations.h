#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1523;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1510;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m8883_gshared (ShimEnumerator_t1523 * __this, Dictionary_2_t1510 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m8883(__this, ___host, method) (( void (*) (ShimEnumerator_t1523 *, Dictionary_2_t1510 *, const MethodInfo*))ShimEnumerator__ctor_m8883_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m8884_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m8884(__this, method) (( bool (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_MoveNext_m8884_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m8885_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m8885(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Entry_m8885_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m8886_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m8886(__this, method) (( Object_t * (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Key_m8886_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m8887_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m8887(__this, method) (( Object_t * (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Value_m8887_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m8888_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m8888(__this, method) (( Object_t * (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Current_m8888_gshared)(__this, method)
