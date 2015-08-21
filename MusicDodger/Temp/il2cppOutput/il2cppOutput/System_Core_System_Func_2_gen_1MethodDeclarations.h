﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t1802;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m12244_gshared (Func_2_t1802 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m12244(__this, ___object, ___method, method) (( void (*) (Func_2_t1802 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m12244_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C" bool Func_2_Invoke_m12245_gshared (Func_2_t1802 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m12245(__this, ___arg1, method) (( bool (*) (Func_2_t1802 *, Object_t *, const MethodInfo*))Func_2_Invoke_m12245_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m12246_gshared (Func_2_t1802 * __this, Object_t * ___arg1, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m12246(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1802 *, Object_t *, AsyncCallback_t123 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m12246_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_2_EndInvoke_m12247_gshared (Func_2_t1802 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m12247(__this, ___result, method) (( bool (*) (Func_2_t1802 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m12247_gshared)(__this, ___result, method)
