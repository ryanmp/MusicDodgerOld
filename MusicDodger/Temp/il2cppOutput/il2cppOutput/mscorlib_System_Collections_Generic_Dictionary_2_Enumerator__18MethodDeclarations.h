#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2218;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2215;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16677_gshared (Enumerator_t2218 * __this, Dictionary_2_t2215 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16677(__this, ___dictionary, method) (( void (*) (Enumerator_t2218 *, Dictionary_2_t2215 *, const MethodInfo*))Enumerator__ctor_m16677_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16678_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16678(__this, method) (( Object_t * (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16678_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t897  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16679_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16679(__this, method) (( DictionaryEntry_t897  (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16679_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16680_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16680(__this, method) (( Object_t * (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16680_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16681_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16681(__this, method) (( Object_t * (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16681_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16682_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16682(__this, method) (( bool (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_MoveNext_m16682_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2189  Enumerator_get_Current_m16683_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16683(__this, method) (( KeyValuePair_2_t2189  (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_get_Current_m16683_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16684_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16684(__this, method) (( Object_t * (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_get_CurrentKey_m16684_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t40  Enumerator_get_CurrentValue_m16685_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16685(__this, method) (( KeyValuePair_2_t40  (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_get_CurrentValue_m16685_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m16686_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16686(__this, method) (( void (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_VerifyState_m16686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16687_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16687(__this, method) (( void (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_VerifyCurrent_m16687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m16688_gshared (Enumerator_t2218 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16688(__this, method) (( void (*) (Enumerator_t2218 *, const MethodInfo*))Enumerator_Dispose_m16688_gshared)(__this, method)
