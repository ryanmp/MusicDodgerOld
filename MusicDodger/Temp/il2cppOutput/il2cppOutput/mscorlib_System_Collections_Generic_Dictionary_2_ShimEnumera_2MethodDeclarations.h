#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t1636;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1624;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10341_gshared (ShimEnumerator_t1636 * __this, Dictionary_2_t1624 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10341(__this, ___host, method) (( void (*) (ShimEnumerator_t1636 *, Dictionary_2_t1624 *, const MethodInfo*))ShimEnumerator__ctor_m10341_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10342_gshared (ShimEnumerator_t1636 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10342(__this, method) (( bool (*) (ShimEnumerator_t1636 *, const MethodInfo*))ShimEnumerator_MoveNext_m10342_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m10343_gshared (ShimEnumerator_t1636 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10343(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1636 *, const MethodInfo*))ShimEnumerator_get_Entry_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10344_gshared (ShimEnumerator_t1636 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10344(__this, method) (( Object_t * (*) (ShimEnumerator_t1636 *, const MethodInfo*))ShimEnumerator_get_Key_m10344_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10345_gshared (ShimEnumerator_t1636 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10345(__this, method) (( Object_t * (*) (ShimEnumerator_t1636 *, const MethodInfo*))ShimEnumerator_get_Value_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10346_gshared (ShimEnumerator_t1636 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10346(__this, method) (( Object_t * (*) (ShimEnumerator_t1636 *, const MethodInfo*))ShimEnumerator_get_Current_m10346_gshared)(__this, method)
