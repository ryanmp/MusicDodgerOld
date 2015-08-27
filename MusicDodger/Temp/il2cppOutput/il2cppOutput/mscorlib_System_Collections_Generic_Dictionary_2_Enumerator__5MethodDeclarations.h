#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t1939;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1932;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12614_gshared (Enumerator_t1939 * __this, Dictionary_2_t1932 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12614(__this, ___dictionary, method) (( void (*) (Enumerator_t1939 *, Dictionary_2_t1932 *, const MethodInfo*))Enumerator__ctor_m12614_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12615_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12615(__this, method) (( Object_t * (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12615_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t897  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12616_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12616(__this, method) (( DictionaryEntry_t897  (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12616_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12617_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12617(__this, method) (( Object_t * (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12617_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12618_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12618(__this, method) (( Object_t * (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12618_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12619_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12619(__this, method) (( bool (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_MoveNext_m12619_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1935  Enumerator_get_Current_m12620_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12620(__this, method) (( KeyValuePair_2_t1935  (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_get_Current_m12620_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12621_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12621(__this, method) (( Object_t * (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_get_CurrentKey_m12621_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12622_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12622(__this, method) (( int32_t (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_get_CurrentValue_m12622_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12623_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12623(__this, method) (( void (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_VerifyState_m12623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12624_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12624(__this, method) (( void (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_VerifyCurrent_m12624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12625_gshared (Enumerator_t1939 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12625(__this, method) (( void (*) (Enumerator_t1939 *, const MethodInfo*))Enumerator_Dispose_m12625_gshared)(__this, method)
