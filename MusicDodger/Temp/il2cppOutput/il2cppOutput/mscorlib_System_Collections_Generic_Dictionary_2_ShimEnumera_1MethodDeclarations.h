﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1945;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1932;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12661_gshared (ShimEnumerator_t1945 * __this, Dictionary_2_t1932 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12661(__this, ___host, method) (( void (*) (ShimEnumerator_t1945 *, Dictionary_2_t1932 *, const MethodInfo*))ShimEnumerator__ctor_m12661_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12662_gshared (ShimEnumerator_t1945 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12662(__this, method) (( bool (*) (ShimEnumerator_t1945 *, const MethodInfo*))ShimEnumerator_MoveNext_m12662_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m12663_gshared (ShimEnumerator_t1945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12663(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t1945 *, const MethodInfo*))ShimEnumerator_get_Entry_m12663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12664_gshared (ShimEnumerator_t1945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12664(__this, method) (( Object_t * (*) (ShimEnumerator_t1945 *, const MethodInfo*))ShimEnumerator_get_Key_m12664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12665_gshared (ShimEnumerator_t1945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12665(__this, method) (( Object_t * (*) (ShimEnumerator_t1945 *, const MethodInfo*))ShimEnumerator_get_Value_m12665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12666_gshared (ShimEnumerator_t1945 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12666(__this, method) (( Object_t * (*) (ShimEnumerator_t1945 *, const MethodInfo*))ShimEnumerator_get_Current_m12666_gshared)(__this, method)
