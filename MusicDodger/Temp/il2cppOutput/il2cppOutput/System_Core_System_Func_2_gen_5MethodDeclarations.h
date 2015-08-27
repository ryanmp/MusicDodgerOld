#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t2335;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m17831_gshared (Func_2_t2335 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m17831(__this, ___object, ___method, method) (( void (*) (Func_2_t2335 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m17831_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m17832_gshared (Func_2_t2335 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m17832(__this, ___arg1, method) (( Object_t * (*) (Func_2_t2335 *, Object_t *, const MethodInfo*))Func_2_Invoke_m17832_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m17833_gshared (Func_2_t2335 * __this, Object_t * ___arg1, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m17833(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2335 *, Object_t *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m17833_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m17834_gshared (Func_2_t2335 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m17834(__this, ___result, method) (( Object_t * (*) (Func_2_t2335 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m17834_gshared)(__this, ___result, method)
