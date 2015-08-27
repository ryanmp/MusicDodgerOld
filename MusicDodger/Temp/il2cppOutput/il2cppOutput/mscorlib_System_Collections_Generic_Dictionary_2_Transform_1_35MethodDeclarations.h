﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Transform_1_t2219;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16689_gshared (Transform_1_t2219 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16689(__this, ___object, ___method, method) (( void (*) (Transform_1_t2219 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16689_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m16690_gshared (Transform_1_t2219 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16690(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2219 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Transform_1_Invoke_m16690_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16691_gshared (Transform_1_t2219 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16691(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2219 *, Object_t *, KeyValuePair_2_t40 , AsyncCallback_t195 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16691_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m16692_gshared (Transform_1_t2219 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16692(__this, ___result, method) (( Object_t * (*) (Transform_1_t2219 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16692_gshared)(__this, ___result, method)
