#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1567;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1556;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9381_gshared (ShimEnumerator_t1567 * __this, Dictionary_2_t1556 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9381(__this, ___host, method) (( void (*) (ShimEnumerator_t1567 *, Dictionary_2_t1556 *, const MethodInfo*))ShimEnumerator__ctor_m9381_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9382_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9382(__this, method) (( bool (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_MoveNext_m9382_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m9383_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9383(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Entry_m9383_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9384_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9384(__this, method) (( Object_t * (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Key_m9384_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9385_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9385(__this, method) (( Object_t * (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Value_m9385_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9386_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9386(__this, method) (( Object_t * (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Current_m9386_gshared)(__this, method)
