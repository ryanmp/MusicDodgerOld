#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Enumerator_t1736;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1730;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11634_gshared (Enumerator_t1736 * __this, Dictionary_2_t1730 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11634(__this, ___dictionary, method) (( void (*) (Enumerator_t1736 *, Dictionary_2_t1730 *, const MethodInfo*))Enumerator__ctor_m11634_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11635_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11635(__this, method) (( Object_t * (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11635_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t620  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11636_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11636(__this, method) (( DictionaryEntry_t620  (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11636_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11637_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11637(__this, method) (( Object_t * (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11637_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11638_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11638(__this, method) (( Object_t * (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11638_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11639_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11639(__this, method) (( bool (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_MoveNext_m11639_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t1731  Enumerator_get_Current_m11640_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11640(__this, method) (( KeyValuePair_2_t1731  (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_get_Current_m11640_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11641_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11641(__this, method) (( Object_t * (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_get_CurrentKey_m11641_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11642_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11642(__this, method) (( int32_t (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_get_CurrentValue_m11642_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m11643_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11643(__this, method) (( void (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_VerifyState_m11643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11644_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11644(__this, method) (( void (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_VerifyCurrent_m11644_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m11645_gshared (Enumerator_t1736 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11645(__this, method) (( void (*) (Enumerator_t1736 *, const MethodInfo*))Enumerator_Dispose_m11645_gshared)(__this, method)
