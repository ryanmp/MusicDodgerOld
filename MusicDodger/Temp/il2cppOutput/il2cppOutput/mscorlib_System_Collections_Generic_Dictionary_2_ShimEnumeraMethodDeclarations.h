#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1815;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1803;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10888_gshared (ShimEnumerator_t1815 * __this, Dictionary_2_t1803 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10888(__this, ___host, method) (( void (*) (ShimEnumerator_t1815 *, Dictionary_2_t1803 *, const MethodInfo*))ShimEnumerator__ctor_m10888_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10889_gshared (ShimEnumerator_t1815 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10889(__this, method) (( bool (*) (ShimEnumerator_t1815 *, const MethodInfo*))ShimEnumerator_MoveNext_m10889_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m10890_gshared (ShimEnumerator_t1815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10890(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t1815 *, const MethodInfo*))ShimEnumerator_get_Entry_m10890_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10891_gshared (ShimEnumerator_t1815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10891(__this, method) (( Object_t * (*) (ShimEnumerator_t1815 *, const MethodInfo*))ShimEnumerator_get_Key_m10891_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10892_gshared (ShimEnumerator_t1815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10892(__this, method) (( Object_t * (*) (ShimEnumerator_t1815 *, const MethodInfo*))ShimEnumerator_get_Value_m10892_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10893_gshared (ShimEnumerator_t1815 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10893(__this, method) (( Object_t * (*) (ShimEnumerator_t1815 *, const MethodInfo*))ShimEnumerator_get_Current_m10893_gshared)(__this, method)
