#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t1806;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m12254_gshared (Func_2_t1806 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m12254(__this, ___object, ___method, method) (( void (*) (Func_2_t1806 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m12254_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m12255_gshared (Func_2_t1806 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m12255(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1806 *, Object_t *, const MethodInfo*))Func_2_Invoke_m12255_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m12256_gshared (Func_2_t1806 * __this, Object_t * ___arg1, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m12256(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1806 *, Object_t *, AsyncCallback_t119 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m12256_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m12257_gshared (Func_2_t1806 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m12257(__this, ___result, method) (( Object_t * (*) (Func_2_t1806 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m12257_gshared)(__this, ___result, method)
