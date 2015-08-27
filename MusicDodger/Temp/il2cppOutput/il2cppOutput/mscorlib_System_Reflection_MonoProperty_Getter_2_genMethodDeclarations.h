#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t2371;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m18005_gshared (Getter_2_t2371 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m18005(__this, ___object, ___method, method) (( void (*) (Getter_2_t2371 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m18005_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m18006_gshared (Getter_2_t2371 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m18006(__this, ____this, method) (( Object_t * (*) (Getter_2_t2371 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m18006_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m18007_gshared (Getter_2_t2371 * __this, Object_t * ____this, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m18007(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t2371 *, Object_t *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m18007_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m18008_gshared (Getter_2_t2371 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m18008(__this, ___result, method) (( Object_t * (*) (Getter_2_t2371 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m18008_gshared)(__this, ___result, method)
