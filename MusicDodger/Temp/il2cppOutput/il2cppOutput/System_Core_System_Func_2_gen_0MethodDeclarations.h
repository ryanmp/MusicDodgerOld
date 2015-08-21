#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t43;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m8943_gshared (Func_2_t43 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m8943(__this, ___object, ___method, method) (( void (*) (Func_2_t43 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m8943_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T)
extern "C" bool Func_2_Invoke_m8945_gshared (Func_2_t43 * __this, KeyValuePair_2_t40  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m8945(__this, ___arg1, method) (( bool (*) (Func_2_t43 *, KeyValuePair_2_t40 , const MethodInfo*))Func_2_Invoke_m8945_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m8947_gshared (Func_2_t43 * __this, KeyValuePair_2_t40  ___arg1, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m8947(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t43 *, KeyValuePair_2_t40 , AsyncCallback_t123 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m8947_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_2_EndInvoke_m8949_gshared (Func_2_t43 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m8949(__this, ___result, method) (( bool (*) (Func_2_t43 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m8949_gshared)(__this, ___result, method)
