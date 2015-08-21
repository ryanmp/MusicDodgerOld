#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t1768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1762;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11969_gshared (Enumerator_t1768 * __this, Dictionary_2_t1762 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11969(__this, ___dictionary, method) (( void (*) (Enumerator_t1768 *, Dictionary_2_t1762 *, const MethodInfo*))Enumerator__ctor_m11969_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11970_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11970(__this, method) (( Object_t * (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11970_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t622  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11971_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11971(__this, method) (( DictionaryEntry_t622  (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11971_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11972_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11972(__this, method) (( Object_t * (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11972_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11973_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11973(__this, method) (( Object_t * (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11974_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11974(__this, method) (( bool (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_MoveNext_m11974_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1763  Enumerator_get_Current_m11975_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11975(__this, method) (( KeyValuePair_2_t1763  (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_get_Current_m11975_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11976_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11976(__this, method) (( Object_t * (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_get_CurrentKey_m11976_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m11977_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11977(__this, method) (( bool (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_get_CurrentValue_m11977_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m11978_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11978(__this, method) (( void (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_VerifyState_m11978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11979_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11979(__this, method) (( void (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_VerifyCurrent_m11979_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m11980_gshared (Enumerator_t1768 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11980(__this, method) (( void (*) (Enumerator_t1768 *, const MethodInfo*))Enumerator_Dispose_m11980_gshared)(__this, method)
