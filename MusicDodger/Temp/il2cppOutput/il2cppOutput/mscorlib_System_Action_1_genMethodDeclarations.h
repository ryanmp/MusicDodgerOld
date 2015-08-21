#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t95;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m9111_gshared (Action_1_t95 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m9111(__this, ___object, ___method, method) (( void (*) (Action_1_t95 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9111_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m1457_gshared (Action_1_t95 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1457(__this, ___obj, method) (( void (*) (Action_1_t95 *, bool, const MethodInfo*))Action_1_Invoke_m1457_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m9112_gshared (Action_1_t95 * __this, bool ___obj, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m9112(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t95 *, bool, AsyncCallback_t123 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9112_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m9113_gshared (Action_1_t95 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m9113(__this, ___result, method) (( void (*) (Action_1_t95 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9113_gshared)(__this, ___result, method)
