#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t2263;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2251;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17119_gshared (ShimEnumerator_t2263 * __this, Dictionary_2_t2251 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17119(__this, ___host, method) (( void (*) (ShimEnumerator_t2263 *, Dictionary_2_t2251 *, const MethodInfo*))ShimEnumerator__ctor_m17119_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17120_gshared (ShimEnumerator_t2263 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17120(__this, method) (( bool (*) (ShimEnumerator_t2263 *, const MethodInfo*))ShimEnumerator_MoveNext_m17120_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m17121_gshared (ShimEnumerator_t2263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17121(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t2263 *, const MethodInfo*))ShimEnumerator_get_Entry_m17121_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17122_gshared (ShimEnumerator_t2263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17122(__this, method) (( Object_t * (*) (ShimEnumerator_t2263 *, const MethodInfo*))ShimEnumerator_get_Key_m17122_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17123_gshared (ShimEnumerator_t2263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17123(__this, method) (( Object_t * (*) (ShimEnumerator_t2263 *, const MethodInfo*))ShimEnumerator_get_Value_m17123_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17124_gshared (ShimEnumerator_t2263 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17124(__this, method) (( Object_t * (*) (ShimEnumerator_t2263 *, const MethodInfo*))ShimEnumerator_get_Current_m17124_gshared)(__this, method)
