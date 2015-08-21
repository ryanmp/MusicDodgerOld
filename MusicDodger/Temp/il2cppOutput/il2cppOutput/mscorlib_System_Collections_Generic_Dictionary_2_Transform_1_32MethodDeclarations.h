#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t1697;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11338_gshared (Transform_1_t1697 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11338(__this, ___object, ___method, method) (( void (*) (Transform_1_t1697 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11338_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t620  Transform_1_Invoke_m11339_gshared (Transform_1_t1697 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11339(__this, ___key, ___value, method) (( DictionaryEntry_t620  (*) (Transform_1_t1697 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Transform_1_Invoke_m11339_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11340_gshared (Transform_1_t1697 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11340(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1697 *, Object_t *, KeyValuePair_2_t40 , AsyncCallback_t119 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11340_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t620  Transform_1_EndInvoke_m11341_gshared (Transform_1_t1697 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11341(__this, ___result, method) (( DictionaryEntry_t620  (*) (Transform_1_t1697 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11341_gshared)(__this, ___result, method)
