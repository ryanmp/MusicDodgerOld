#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Transform_1_t1704;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11323_gshared (Transform_1_t1704 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11323(__this, ___object, ___method, method) (( void (*) (Transform_1_t1704 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11323_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m11324_gshared (Transform_1_t1704 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11324(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1704 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Transform_1_Invoke_m11324_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11325_gshared (Transform_1_t1704 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11325(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1704 *, Object_t *, KeyValuePair_2_t40 , AsyncCallback_t123 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11325_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m11326_gshared (Transform_1_t1704 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11326(__this, ___result, method) (( Object_t * (*) (Transform_1_t1704 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11326_gshared)(__this, ___result, method)
