#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t1703;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1700;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11311_gshared (Enumerator_t1703 * __this, Dictionary_2_t1700 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11311(__this, ___dictionary, method) (( void (*) (Enumerator_t1703 *, Dictionary_2_t1700 *, const MethodInfo*))Enumerator__ctor_m11311_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11312_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11312(__this, method) (( Object_t * (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11312_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t622  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11313_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11313(__this, method) (( DictionaryEntry_t622  (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11313_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11314_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11314(__this, method) (( Object_t * (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11314_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11315_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11315(__this, method) (( Object_t * (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11316_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11316(__this, method) (( bool (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_MoveNext_m11316_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1674  Enumerator_get_Current_m11317_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11317(__this, method) (( KeyValuePair_2_t1674  (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_get_Current_m11317_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11318_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11318(__this, method) (( Object_t * (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_get_CurrentKey_m11318_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m11319_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11319(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_get_CurrentValue_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11320_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11320(__this, method) (( void (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_VerifyState_m11320_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11321_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11321(__this, method) (( void (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_VerifyCurrent_m11321_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11322_gshared (Enumerator_t1703 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11322(__this, method) (( void (*) (Enumerator_t1703 *, const MethodInfo*))Enumerator_Dispose_m11322_gshared)(__this, method)
