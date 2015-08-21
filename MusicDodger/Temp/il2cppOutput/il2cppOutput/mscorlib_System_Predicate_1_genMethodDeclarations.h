﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t1815;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12297_gshared (Predicate_1_t1815 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12297(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1815 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12297_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12298_gshared (Predicate_1_t1815 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12298(__this, ___obj, method) (( bool (*) (Predicate_1_t1815 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m12298_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12299_gshared (Predicate_1_t1815 * __this, Object_t * ___obj, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12299(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1815 *, Object_t *, AsyncCallback_t119 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12299_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12300_gshared (Predicate_1_t1815 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12300(__this, ___result, method) (( bool (*) (Predicate_1_t1815 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12300_gshared)(__this, ___result, method)
