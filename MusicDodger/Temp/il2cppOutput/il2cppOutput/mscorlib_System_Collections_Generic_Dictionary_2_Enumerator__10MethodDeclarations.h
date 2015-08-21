#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Enumerator_t1657;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1651;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10604_gshared (Enumerator_t1657 * __this, Dictionary_2_t1651 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10604(__this, ___dictionary, method) (( void (*) (Enumerator_t1657 *, Dictionary_2_t1651 *, const MethodInfo*))Enumerator__ctor_m10604_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10605_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10605(__this, method) (( Object_t * (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10605_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t620  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10606_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10606(__this, method) (( DictionaryEntry_t620  (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10606_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10607_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10607(__this, method) (( Object_t * (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10607_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10608_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10608(__this, method) (( Object_t * (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10608_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10609_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10609(__this, method) (( bool (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_MoveNext_m10609_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1652  Enumerator_get_Current_m10610_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10610(__this, method) (( KeyValuePair_2_t1652  (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_get_Current_m10610_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10611_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10611(__this, method) (( uint64_t (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_get_CurrentKey_m10611_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10612_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10612(__this, method) (( Object_t * (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_get_CurrentValue_m10612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10613_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10613(__this, method) (( void (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_VerifyState_m10613_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10614_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10614(__this, method) (( void (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_VerifyCurrent_m10614_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10615_gshared (Enumerator_t1657 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10615(__this, method) (( void (*) (Enumerator_t1657 *, const MethodInfo*))Enumerator_Dispose_m10615_gshared)(__this, method)
