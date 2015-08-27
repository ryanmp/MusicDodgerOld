#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2137;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2131;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15532_gshared (Enumerator_t2137 * __this, Dictionary_2_t2131 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15532(__this, ___dictionary, method) (( void (*) (Enumerator_t2137 *, Dictionary_2_t2131 *, const MethodInfo*))Enumerator__ctor_m15532_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15533_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15533(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15533_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t897  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15534_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15534(__this, method) (( DictionaryEntry_t897  (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15534_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15535_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15535(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15535_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15536_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15536(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15536_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15537_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15537(__this, method) (( bool (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_MoveNext_m15537_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2132  Enumerator_get_Current_m15538_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15538(__this, method) (( KeyValuePair_2_t2132  (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_get_Current_m15538_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15539_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15539(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_get_CurrentKey_m15539_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m15540_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15540(__this, method) (( int64_t (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_get_CurrentValue_m15540_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m15541_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15541(__this, method) (( void (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_VerifyState_m15541_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15542_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15542(__this, method) (( void (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_VerifyCurrent_m15542_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m15543_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15543(__this, method) (( void (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_Dispose_m15543_gshared)(__this, method)
