#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t1665;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1653;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10661_gshared (ShimEnumerator_t1665 * __this, Dictionary_2_t1653 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10661(__this, ___host, method) (( void (*) (ShimEnumerator_t1665 *, Dictionary_2_t1653 *, const MethodInfo*))ShimEnumerator__ctor_m10661_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10662_gshared (ShimEnumerator_t1665 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10662(__this, method) (( bool (*) (ShimEnumerator_t1665 *, const MethodInfo*))ShimEnumerator_MoveNext_m10662_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t622  ShimEnumerator_get_Entry_m10663_gshared (ShimEnumerator_t1665 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10663(__this, method) (( DictionaryEntry_t622  (*) (ShimEnumerator_t1665 *, const MethodInfo*))ShimEnumerator_get_Entry_m10663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10664_gshared (ShimEnumerator_t1665 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10664(__this, method) (( Object_t * (*) (ShimEnumerator_t1665 *, const MethodInfo*))ShimEnumerator_get_Key_m10664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10665_gshared (ShimEnumerator_t1665 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10665(__this, method) (( Object_t * (*) (ShimEnumerator_t1665 *, const MethodInfo*))ShimEnumerator_get_Value_m10665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10666_gshared (ShimEnumerator_t1665 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10666(__this, method) (( Object_t * (*) (ShimEnumerator_t1665 *, const MethodInfo*))ShimEnumerator_get_Current_m10666_gshared)(__this, method)
