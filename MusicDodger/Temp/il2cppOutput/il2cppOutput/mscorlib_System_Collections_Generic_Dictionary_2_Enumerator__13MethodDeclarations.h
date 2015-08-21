#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t1701;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1698;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11300_gshared (Enumerator_t1701 * __this, Dictionary_2_t1698 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11300(__this, ___dictionary, method) (( void (*) (Enumerator_t1701 *, Dictionary_2_t1698 *, const MethodInfo*))Enumerator__ctor_m11300_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11301_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11301(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11301_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t620  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11302_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11302(__this, method) (( DictionaryEntry_t620  (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11303_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11303(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11304_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11304(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11304_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11305_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11305(__this, method) (( bool (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_MoveNext_m11305_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1672  Enumerator_get_Current_m11306_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11306(__this, method) (( KeyValuePair_2_t1672  (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_get_Current_m11306_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11307_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11307(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_get_CurrentKey_m11307_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m11308_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11308(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_get_CurrentValue_m11308_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11309_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11309(__this, method) (( void (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_VerifyState_m11309_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11310_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11310(__this, method) (( void (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_VerifyCurrent_m11310_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11311_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11311(__this, method) (( void (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_Dispose_m11311_gshared)(__this, method)
