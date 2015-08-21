#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t1759;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11996_gshared (Transform_1_t1759 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11996(__this, ___object, ___method, method) (( void (*) (Transform_1_t1759 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11996_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t620  Transform_1_Invoke_m11997_gshared (Transform_1_t1759 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11997(__this, ___key, ___value, method) (( DictionaryEntry_t620  (*) (Transform_1_t1759 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m11997_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11998_gshared (Transform_1_t1759 * __this, Object_t * ___key, bool ___value, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11998(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1759 *, Object_t *, bool, AsyncCallback_t119 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11998_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t620  Transform_1_EndInvoke_m11999_gshared (Transform_1_t1759 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11999(__this, ___result, method) (( DictionaryEntry_t620  (*) (Transform_1_t1759 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11999_gshared)(__this, ___result, method)
