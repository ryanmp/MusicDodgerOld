﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int32>
struct Comparison_1_t1833;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m11114_gshared (Comparison_1_t1833 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m11114(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1833 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m11114_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11115_gshared (Comparison_1_t1833 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11115(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1833 *, int32_t, int32_t, const MethodInfo*))Comparison_1_Invoke_m11115_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11116_gshared (Comparison_1_t1833 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11116(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1833 *, int32_t, int32_t, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11116_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11117_gshared (Comparison_1_t1833 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11117(__this, ___result, method) (( int32_t (*) (Comparison_1_t1833 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11117_gshared)(__this, ___result, method)
