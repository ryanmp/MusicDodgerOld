#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t1634;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1622;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10330_gshared (ShimEnumerator_t1634 * __this, Dictionary_2_t1622 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10330(__this, ___host, method) (( void (*) (ShimEnumerator_t1634 *, Dictionary_2_t1622 *, const MethodInfo*))ShimEnumerator__ctor_m10330_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10331_gshared (ShimEnumerator_t1634 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10331(__this, method) (( bool (*) (ShimEnumerator_t1634 *, const MethodInfo*))ShimEnumerator_MoveNext_m10331_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m10332_gshared (ShimEnumerator_t1634 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10332(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1634 *, const MethodInfo*))ShimEnumerator_get_Entry_m10332_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10333_gshared (ShimEnumerator_t1634 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10333(__this, method) (( Object_t * (*) (ShimEnumerator_t1634 *, const MethodInfo*))ShimEnumerator_get_Key_m10333_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10334_gshared (ShimEnumerator_t1634 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10334(__this, method) (( Object_t * (*) (ShimEnumerator_t1634 *, const MethodInfo*))ShimEnumerator_get_Value_m10334_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10335_gshared (ShimEnumerator_t1634 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10335(__this, method) (( Object_t * (*) (ShimEnumerator_t1634 *, const MethodInfo*))ShimEnumerator_get_Current_m10335_gshared)(__this, method)
