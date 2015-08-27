#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2308;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2296;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17595_gshared (ShimEnumerator_t2308 * __this, Dictionary_2_t2296 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17595(__this, ___host, method) (( void (*) (ShimEnumerator_t2308 *, Dictionary_2_t2296 *, const MethodInfo*))ShimEnumerator__ctor_m17595_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17596_gshared (ShimEnumerator_t2308 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17596(__this, method) (( bool (*) (ShimEnumerator_t2308 *, const MethodInfo*))ShimEnumerator_MoveNext_m17596_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t897  ShimEnumerator_get_Entry_m17597_gshared (ShimEnumerator_t2308 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17597(__this, method) (( DictionaryEntry_t897  (*) (ShimEnumerator_t2308 *, const MethodInfo*))ShimEnumerator_get_Entry_m17597_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17598_gshared (ShimEnumerator_t2308 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17598(__this, method) (( Object_t * (*) (ShimEnumerator_t2308 *, const MethodInfo*))ShimEnumerator_get_Key_m17598_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17599_gshared (ShimEnumerator_t2308 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17599(__this, method) (( Object_t * (*) (ShimEnumerator_t2308 *, const MethodInfo*))ShimEnumerator_get_Value_m17599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17600_gshared (ShimEnumerator_t2308 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17600(__this, method) (( Object_t * (*) (ShimEnumerator_t2308 *, const MethodInfo*))ShimEnumerator_get_Current_m17600_gshared)(__this, method)
