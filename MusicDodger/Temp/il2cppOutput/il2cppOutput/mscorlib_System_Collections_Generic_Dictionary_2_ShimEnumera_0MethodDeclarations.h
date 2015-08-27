#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1920;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1909;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12334_gshared (ShimEnumerator_t1920 * __this, Dictionary_2_t1909 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12334(__this, ___host, method) (( void (*) (ShimEnumerator_t1920 *, Dictionary_2_t1909 *, const MethodInfo*))ShimEnumerator__ctor_m12334_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12335_gshared (ShimEnumerator_t1920 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12335(__this, method) (( bool (*) (ShimEnumerator_t1920 *, const MethodInfo*))ShimEnumerator_MoveNext_m12335_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m12336_gshared (ShimEnumerator_t1920 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12336(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t1920 *, const MethodInfo*))ShimEnumerator_get_Entry_m12336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12337_gshared (ShimEnumerator_t1920 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12337(__this, method) (( Object_t * (*) (ShimEnumerator_t1920 *, const MethodInfo*))ShimEnumerator_get_Key_m12337_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12338_gshared (ShimEnumerator_t1920 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12338(__this, method) (( Object_t * (*) (ShimEnumerator_t1920 *, const MethodInfo*))ShimEnumerator_get_Value_m12338_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12339_gshared (ShimEnumerator_t1920 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12339(__this, method) (( Object_t * (*) (ShimEnumerator_t1920 *, const MethodInfo*))ShimEnumerator_get_Current_m12339_gshared)(__this, method)
