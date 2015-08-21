#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t1517;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1510;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m8836_gshared (Enumerator_t1517 * __this, Dictionary_2_t1510 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m8836(__this, ___dictionary, method) (( void (*) (Enumerator_t1517 *, Dictionary_2_t1510 *, const MethodInfo*))Enumerator__ctor_m8836_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m8837_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m8837(__this, method) (( Object_t * (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m8837_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t620  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8838_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8838(__this, method) (( DictionaryEntry_t620  (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8838_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8839_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8839(__this, method) (( Object_t * (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8839_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8840_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8840(__this, method) (( Object_t * (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8840_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m8841_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m8841(__this, method) (( bool (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_MoveNext_m8841_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t40  Enumerator_get_Current_m8842_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m8842(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_get_Current_m8842_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m8843_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m8843(__this, method) (( Object_t * (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_get_CurrentKey_m8843_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m8844_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m8844(__this, method) (( Object_t * (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_get_CurrentValue_m8844_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m8845_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m8845(__this, method) (( void (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_VerifyState_m8845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m8846_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m8846(__this, method) (( void (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_VerifyCurrent_m8846_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m8847_gshared (Enumerator_t1517 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m8847(__this, method) (( void (*) (Enumerator_t1517 *, const MethodInfo*))Enumerator_Dispose_m8847_gshared)(__this, method)
