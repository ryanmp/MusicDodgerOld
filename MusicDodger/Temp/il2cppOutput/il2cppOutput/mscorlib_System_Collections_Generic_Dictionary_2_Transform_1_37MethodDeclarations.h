#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t2214;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16716_gshared (Transform_1_t2214 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16716(__this, ___object, ___method, method) (( void (*) (Transform_1_t2214 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16716_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t897  Transform_1_Invoke_m16717_gshared (Transform_1_t2214 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16717(__this, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Transform_1_t2214 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Transform_1_Invoke_m16717_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16718_gshared (Transform_1_t2214 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16718(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2214 *, Object_t *, KeyValuePair_2_t40 , AsyncCallback_t195 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16718_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t897  Transform_1_EndInvoke_m16719_gshared (Transform_1_t2214 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16719(__this, ___result, method) (( DictionaryEntry_t897  (*) (Transform_1_t2214 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16719_gshared)(__this, ___result, method)
