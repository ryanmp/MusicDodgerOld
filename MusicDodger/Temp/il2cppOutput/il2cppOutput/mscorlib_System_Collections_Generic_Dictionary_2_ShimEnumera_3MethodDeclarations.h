#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t1663;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1651;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10650_gshared (ShimEnumerator_t1663 * __this, Dictionary_2_t1651 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10650(__this, ___host, method) (( void (*) (ShimEnumerator_t1663 *, Dictionary_2_t1651 *, const MethodInfo*))ShimEnumerator__ctor_m10650_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10651_gshared (ShimEnumerator_t1663 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10651(__this, method) (( bool (*) (ShimEnumerator_t1663 *, const MethodInfo*))ShimEnumerator_MoveNext_m10651_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t620  ShimEnumerator_get_Entry_m10652_gshared (ShimEnumerator_t1663 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10652(__this, method) (( DictionaryEntry_t620  (*) (ShimEnumerator_t1663 *, const MethodInfo*))ShimEnumerator_get_Entry_m10652_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10653_gshared (ShimEnumerator_t1663 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10653(__this, method) (( Object_t * (*) (ShimEnumerator_t1663 *, const MethodInfo*))ShimEnumerator_get_Key_m10653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10654_gshared (ShimEnumerator_t1663 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10654(__this, method) (( Object_t * (*) (ShimEnumerator_t1663 *, const MethodInfo*))ShimEnumerator_get_Value_m10654_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10655_gshared (ShimEnumerator_t1663 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10655(__this, method) (( Object_t * (*) (ShimEnumerator_t1663 *, const MethodInfo*))ShimEnumerator_get_Current_m10655_gshared)(__this, method)
