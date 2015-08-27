﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t388;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m14166_gshared (Action_1_t388 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m14166(__this, ___object, ___method, method) (( void (*) (Action_1_t388 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m14166_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m3258_gshared (Action_1_t388 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3258(__this, ___obj, method) (( void (*) (Action_1_t388 *, bool, const MethodInfo*))Action_1_Invoke_m3258_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m14167_gshared (Action_1_t388 * __this, bool ___obj, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m14167(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t388 *, bool, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m14167_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m14168_gshared (Action_1_t388 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m14168(__this, ___result, method) (( void (*) (Action_1_t388 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m14168_gshared)(__this, ___result, method)
