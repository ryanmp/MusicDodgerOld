#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1914;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1909;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12287_gshared (Enumerator_t1914 * __this, Dictionary_2_t1909 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12287(__this, ___dictionary, method) (( void (*) (Enumerator_t1914 *, Dictionary_2_t1909 *, const MethodInfo*))Enumerator__ctor_m12287_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12288_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12288(__this, method) (( Object_t * (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12288_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t897  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12289_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12289(__this, method) (( DictionaryEntry_t897  (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12289_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12290_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12290(__this, method) (( Object_t * (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12290_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12291_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12291(__this, method) (( Object_t * (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12291_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12292_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12292(__this, method) (( bool (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_MoveNext_m12292_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1910  Enumerator_get_Current_m12293_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12293(__this, method) (( KeyValuePair_2_t1910  (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_get_Current_m12293_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12294_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12294(__this, method) (( int32_t (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_get_CurrentKey_m12294_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12295_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12295(__this, method) (( Object_t * (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_get_CurrentValue_m12295_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12296_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12296(__this, method) (( void (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_VerifyState_m12296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12297_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12297(__this, method) (( void (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_VerifyCurrent_m12297_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12298_gshared (Enumerator_t1914 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12298(__this, method) (( void (*) (Enumerator_t1914 *, const MethodInfo*))Enumerator_Dispose_m12298_gshared)(__this, method)
