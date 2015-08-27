#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t2180;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2168;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16013_gshared (ShimEnumerator_t2180 * __this, Dictionary_2_t2168 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16013(__this, ___host, method) (( void (*) (ShimEnumerator_t2180 *, Dictionary_2_t2168 *, const MethodInfo*))ShimEnumerator__ctor_m16013_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16014_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16014(__this, method) (( bool (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_MoveNext_m16014_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m16015_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16015(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Entry_m16015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16016_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16016(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Key_m16016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16017_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16017(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Value_m16017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16018_gshared (ShimEnumerator_t2180 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16018(__this, method) (( Object_t * (*) (ShimEnumerator_t2180 *, const MethodInfo*))ShimEnumerator_get_Current_m16018_gshared)(__this, method)
