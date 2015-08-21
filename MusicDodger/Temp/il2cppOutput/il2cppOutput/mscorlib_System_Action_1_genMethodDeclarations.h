﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t91;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m9100_gshared (Action_1_t91 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m9100(__this, ___object, ___method, method) (( void (*) (Action_1_t91 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9100_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m1446_gshared (Action_1_t91 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1446(__this, ___obj, method) (( void (*) (Action_1_t91 *, bool, const MethodInfo*))Action_1_Invoke_m1446_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m9101_gshared (Action_1_t91 * __this, bool ___obj, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m9101(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t91 *, bool, AsyncCallback_t119 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9101_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m9102_gshared (Action_1_t91 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m9102(__this, ___result, method) (( void (*) (Action_1_t91 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9102_gshared)(__this, ___result, method)
