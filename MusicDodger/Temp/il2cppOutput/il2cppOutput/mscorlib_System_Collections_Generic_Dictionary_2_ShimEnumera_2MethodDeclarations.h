#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2143;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2131;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15579_gshared (ShimEnumerator_t2143 * __this, Dictionary_2_t2131 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15579(__this, ___host, method) (( void (*) (ShimEnumerator_t2143 *, Dictionary_2_t2131 *, const MethodInfo*))ShimEnumerator__ctor_m15579_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15580_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15580(__this, method) (( bool (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_MoveNext_m15580_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m15581_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15581(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Entry_m15581_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15582_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15582(__this, method) (( Object_t * (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Key_m15582_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15583_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15583(__this, method) (( Object_t * (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Value_m15583_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15584_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15584(__this, method) (( Object_t * (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Current_m15584_gshared)(__this, method)
