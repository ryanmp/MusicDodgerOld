﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2330;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t832;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17805_gshared (ShimEnumerator_t2330 * __this, Dictionary_2_t832 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17805(__this, ___host, method) (( void (*) (ShimEnumerator_t2330 *, Dictionary_2_t832 *, const MethodInfo*))ShimEnumerator__ctor_m17805_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17806_gshared (ShimEnumerator_t2330 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17806(__this, method) (( bool (*) (ShimEnumerator_t2330 *, const MethodInfo*))ShimEnumerator_MoveNext_m17806_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m17807_gshared (ShimEnumerator_t2330 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17807(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t2330 *, const MethodInfo*))ShimEnumerator_get_Entry_m17807_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17808_gshared (ShimEnumerator_t2330 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17808(__this, method) (( Object_t * (*) (ShimEnumerator_t2330 *, const MethodInfo*))ShimEnumerator_get_Key_m17808_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17809_gshared (ShimEnumerator_t2330 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17809(__this, method) (( Object_t * (*) (ShimEnumerator_t2330 *, const MethodInfo*))ShimEnumerator_get_Value_m17809_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17810_gshared (ShimEnumerator_t2330 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17810(__this, method) (( Object_t * (*) (ShimEnumerator_t2330 *, const MethodInfo*))ShimEnumerator_get_Current_m17810_gshared)(__this, method)
