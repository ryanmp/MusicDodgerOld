#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Enumerator_t1659;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1653;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10615_gshared (Enumerator_t1659 * __this, Dictionary_2_t1653 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10615(__this, ___dictionary, method) (( void (*) (Enumerator_t1659 *, Dictionary_2_t1653 *, const MethodInfo*))Enumerator__ctor_m10615_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10616_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10616(__this, method) (( Object_t * (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10616_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t622  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10617_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10617(__this, method) (( DictionaryEntry_t622  (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10617_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10618_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10618(__this, method) (( Object_t * (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10618_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10619_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10619(__this, method) (( Object_t * (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10620_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10620(__this, method) (( bool (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_MoveNext_m10620_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1654  Enumerator_get_Current_m10621_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10621(__this, method) (( KeyValuePair_2_t1654  (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_get_Current_m10621_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10622_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10622(__this, method) (( uint64_t (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_get_CurrentKey_m10622_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10623_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10623(__this, method) (( Object_t * (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_get_CurrentValue_m10623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10624_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10624(__this, method) (( void (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_VerifyState_m10624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10625_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10625(__this, method) (( void (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_VerifyCurrent_m10625_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10626_gshared (Enumerator_t1659 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10626(__this, method) (( void (*) (Enumerator_t1659 *, const MethodInfo*))Enumerator_Dispose_m10626_gshared)(__this, method)
