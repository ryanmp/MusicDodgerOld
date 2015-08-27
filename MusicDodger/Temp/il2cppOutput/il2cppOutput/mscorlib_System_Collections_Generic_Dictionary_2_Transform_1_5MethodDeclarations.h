﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1908;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12326_gshared (Transform_1_t1908 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12326(__this, ___object, ___method, method) (( void (*) (Transform_1_t1908 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12326_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t897  Transform_1_Invoke_m12327_gshared (Transform_1_t1908 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12327(__this, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Transform_1_t1908 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m12327_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12328_gshared (Transform_1_t1908 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12328(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1908 *, int32_t, Object_t *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12328_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t897  Transform_1_EndInvoke_m12329_gshared (Transform_1_t1908 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12329(__this, ___result, method) (( DictionaryEntry_t897  (*) (Transform_1_t1908 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12329_gshared)(__this, ___result, method)