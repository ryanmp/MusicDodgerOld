#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t1744;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1732;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11691_gshared (ShimEnumerator_t1744 * __this, Dictionary_2_t1732 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11691(__this, ___host, method) (( void (*) (ShimEnumerator_t1744 *, Dictionary_2_t1732 *, const MethodInfo*))ShimEnumerator__ctor_m11691_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11692_gshared (ShimEnumerator_t1744 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11692(__this, method) (( bool (*) (ShimEnumerator_t1744 *, const MethodInfo*))ShimEnumerator_MoveNext_m11692_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m11693_gshared (ShimEnumerator_t1744 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11693(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1744 *, const MethodInfo*))ShimEnumerator_get_Entry_m11693_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11694_gshared (ShimEnumerator_t1744 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11694(__this, method) (( Object_t * (*) (ShimEnumerator_t1744 *, const MethodInfo*))ShimEnumerator_get_Key_m11694_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11695_gshared (ShimEnumerator_t1744 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11695(__this, method) (( Object_t * (*) (ShimEnumerator_t1744 *, const MethodInfo*))ShimEnumerator_get_Value_m11695_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11696_gshared (ShimEnumerator_t1744 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11696(__this, method) (( Object_t * (*) (ShimEnumerator_t1744 *, const MethodInfo*))ShimEnumerator_get_Current_m11696_gshared)(__this, method)
