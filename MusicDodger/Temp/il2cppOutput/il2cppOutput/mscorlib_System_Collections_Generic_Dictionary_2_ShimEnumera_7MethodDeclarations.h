#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t1794;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t555;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12209_gshared (ShimEnumerator_t1794 * __this, Dictionary_2_t555 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12209(__this, ___host, method) (( void (*) (ShimEnumerator_t1794 *, Dictionary_2_t555 *, const MethodInfo*))ShimEnumerator__ctor_m12209_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12210_gshared (ShimEnumerator_t1794 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12210(__this, method) (( bool (*) (ShimEnumerator_t1794 *, const MethodInfo*))ShimEnumerator_MoveNext_m12210_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m12211_gshared (ShimEnumerator_t1794 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12211(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1794 *, const MethodInfo*))ShimEnumerator_get_Entry_m12211_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12212_gshared (ShimEnumerator_t1794 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12212(__this, method) (( Object_t * (*) (ShimEnumerator_t1794 *, const MethodInfo*))ShimEnumerator_get_Key_m12212_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12213_gshared (ShimEnumerator_t1794 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12213(__this, method) (( Object_t * (*) (ShimEnumerator_t1794 *, const MethodInfo*))ShimEnumerator_get_Value_m12213_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12214_gshared (ShimEnumerator_t1794 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12214(__this, method) (( Object_t * (*) (ShimEnumerator_t1794 *, const MethodInfo*))ShimEnumerator_get_Current_m12214_gshared)(__this, method)
