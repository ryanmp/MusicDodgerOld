#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1511;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m8881_gshared (Transform_1_t1511 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m8881(__this, ___object, ___method, method) (( void (*) (Transform_1_t1511 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m8881_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t622  Transform_1_Invoke_m8882_gshared (Transform_1_t1511 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m8882(__this, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Transform_1_t1511 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m8882_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m8883_gshared (Transform_1_t1511 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m8883(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1511 *, Object_t *, Object_t *, AsyncCallback_t123 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m8883_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t622  Transform_1_EndInvoke_m8884_gshared (Transform_1_t1511 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m8884(__this, ___result, method) (( DictionaryEntry_t622  (*) (Transform_1_t1511 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m8884_gshared)(__this, ___result, method)
