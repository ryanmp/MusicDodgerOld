#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t1628;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1622;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10284_gshared (Enumerator_t1628 * __this, Dictionary_2_t1622 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10284(__this, ___dictionary, method) (( void (*) (Enumerator_t1628 *, Dictionary_2_t1622 *, const MethodInfo*))Enumerator__ctor_m10284_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10285_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10285(__this, method) (( Object_t * (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10285_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t620  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10286_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10286(__this, method) (( DictionaryEntry_t620  (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10286_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10287_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10287(__this, method) (( Object_t * (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10287_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10288_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10288(__this, method) (( Object_t * (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10289_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10289(__this, method) (( bool (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_MoveNext_m10289_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t1623  Enumerator_get_Current_m10290_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10290(__this, method) (( KeyValuePair_2_t1623  (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_get_Current_m10290_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10291_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10291(__this, method) (( Object_t * (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_get_CurrentKey_m10291_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m10292_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10292(__this, method) (( int64_t (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_get_CurrentValue_m10292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m10293_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10293(__this, method) (( void (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_VerifyState_m10293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10294_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10294(__this, method) (( void (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_VerifyCurrent_m10294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10295_gshared (Enumerator_t1628 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10295(__this, method) (( void (*) (Enumerator_t1628 *, const MethodInfo*))Enumerator_Dispose_m10295_gshared)(__this, method)
