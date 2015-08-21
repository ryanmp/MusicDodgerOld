﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t1587;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1582;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9711_gshared (Enumerator_t1587 * __this, Dictionary_2_t1582 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9711(__this, ___dictionary, method) (( void (*) (Enumerator_t1587 *, Dictionary_2_t1582 *, const MethodInfo*))Enumerator__ctor_m9711_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9712_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9712(__this, method) (( Object_t * (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9712_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t622  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9713_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9713(__this, method) (( DictionaryEntry_t622  (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9714_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9714(__this, method) (( Object_t * (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9714_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9715_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9715(__this, method) (( Object_t * (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9715_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9716_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9716(__this, method) (( bool (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_MoveNext_m9716_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1583  Enumerator_get_Current_m9717_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9717(__this, method) (( KeyValuePair_2_t1583  (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_get_Current_m9717_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9718_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9718(__this, method) (( Object_t * (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_get_CurrentKey_m9718_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m9719_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9719(__this, method) (( int32_t (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_get_CurrentValue_m9719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m9720_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9720(__this, method) (( void (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_VerifyState_m9720_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9721_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9721(__this, method) (( void (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_VerifyCurrent_m9721_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m9722_gshared (Enumerator_t1587 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9722(__this, method) (( void (*) (Enumerator_t1587 *, const MethodInfo*))Enumerator_Dispose_m9722_gshared)(__this, method)
