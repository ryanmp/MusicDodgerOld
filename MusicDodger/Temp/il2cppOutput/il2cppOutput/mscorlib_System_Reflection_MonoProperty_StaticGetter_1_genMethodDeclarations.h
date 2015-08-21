#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t1851;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m12509_gshared (StaticGetter_1_t1851 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m12509(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t1851 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m12509_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m12510_gshared (StaticGetter_1_t1851 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m12510(__this, method) (( Object_t * (*) (StaticGetter_1_t1851 *, const MethodInfo*))StaticGetter_1_Invoke_m12510_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m12511_gshared (StaticGetter_1_t1851 * __this, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m12511(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t1851 *, AsyncCallback_t119 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m12511_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m12512_gshared (StaticGetter_1_t1851 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m12512(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t1851 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m12512_gshared)(__this, ___result, method)
