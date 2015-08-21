#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1561;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1556;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9335_gshared (Enumerator_t1561 * __this, Dictionary_2_t1556 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9335(__this, ___dictionary, method) (( void (*) (Enumerator_t1561 *, Dictionary_2_t1556 *, const MethodInfo*))Enumerator__ctor_m9335_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9336_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9336(__this, method) (( Object_t * (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9336_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t620  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9337_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9337(__this, method) (( DictionaryEntry_t620  (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9337_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9338_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9338(__this, method) (( Object_t * (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9338_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9339_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9339(__this, method) (( Object_t * (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9339_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9340_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9340(__this, method) (( bool (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_MoveNext_m9340_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1557  Enumerator_get_Current_m9341_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9341(__this, method) (( KeyValuePair_2_t1557  (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_get_Current_m9341_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m9342_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9342(__this, method) (( int32_t (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_get_CurrentKey_m9342_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9343_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9343(__this, method) (( Object_t * (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_get_CurrentValue_m9343_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9344_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9344(__this, method) (( void (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_VerifyState_m9344_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9345_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9345(__this, method) (( void (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_VerifyCurrent_m9345_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9346_gshared (Enumerator_t1561 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9346(__this, method) (( void (*) (Enumerator_t1561 *, const MethodInfo*))Enumerator_Dispose_m9346_gshared)(__this, method)
