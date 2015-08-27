#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t2302;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2296;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17548_gshared (Enumerator_t2302 * __this, Dictionary_2_t2296 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17548(__this, ___dictionary, method) (( void (*) (Enumerator_t2302 *, Dictionary_2_t2296 *, const MethodInfo*))Enumerator__ctor_m17548_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17549_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17549(__this, method) (( Object_t * (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17549_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t897  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17550_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17550(__this, method) (( DictionaryEntry_t897  (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17550_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17551_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17551(__this, method) (( Object_t * (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17551_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17552_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17552(__this, method) (( Object_t * (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17553_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17553(__this, method) (( bool (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_MoveNext_m17553_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2297  Enumerator_get_Current_m17554_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17554(__this, method) (( KeyValuePair_2_t2297  (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_get_Current_m17554_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17555_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17555(__this, method) (( Object_t * (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_get_CurrentKey_m17555_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m17556_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17556(__this, method) (( bool (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_get_CurrentValue_m17556_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m17557_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17557(__this, method) (( void (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_VerifyState_m17557_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17558_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17558(__this, method) (( void (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_VerifyCurrent_m17558_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m17559_gshared (Enumerator_t2302 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17559(__this, method) (( void (*) (Enumerator_t2302 *, const MethodInfo*))Enumerator_Dispose_m17559_gshared)(__this, method)
