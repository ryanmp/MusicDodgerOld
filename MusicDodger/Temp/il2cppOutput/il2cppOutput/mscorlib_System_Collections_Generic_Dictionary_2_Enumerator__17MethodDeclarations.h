#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t1766;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1760;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11958_gshared (Enumerator_t1766 * __this, Dictionary_2_t1760 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11958(__this, ___dictionary, method) (( void (*) (Enumerator_t1766 *, Dictionary_2_t1760 *, const MethodInfo*))Enumerator__ctor_m11958_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11959_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11959(__this, method) (( Object_t * (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11959_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t620  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11960_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11960(__this, method) (( DictionaryEntry_t620  (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11961_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11961(__this, method) (( Object_t * (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11961_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11962_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11962(__this, method) (( Object_t * (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11963_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11963(__this, method) (( bool (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_MoveNext_m11963_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1761  Enumerator_get_Current_m11964_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11964(__this, method) (( KeyValuePair_2_t1761  (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_get_Current_m11964_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11965_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11965(__this, method) (( Object_t * (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_get_CurrentKey_m11965_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m11966_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11966(__this, method) (( bool (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_get_CurrentValue_m11966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m11967_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11967(__this, method) (( void (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_VerifyState_m11967_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11968_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11968(__this, method) (( void (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_VerifyCurrent_m11968_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m11969_gshared (Enumerator_t1766 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11969(__this, method) (( void (*) (Enumerator_t1766 *, const MethodInfo*))Enumerator_Dispose_m11969_gshared)(__this, method)
