#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Single>
struct Predicate_1_t1846;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11341_gshared (Predicate_1_t1846 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11341(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1846 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11341_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11342_gshared (Predicate_1_t1846 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11342(__this, ___obj, method) (( bool (*) (Predicate_1_t1846 *, float, const MethodInfo*))Predicate_1_Invoke_m11342_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11343_gshared (Predicate_1_t1846 * __this, float ___obj, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11343(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1846 *, float, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11343_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11344_gshared (Predicate_1_t1846 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11344(__this, ___result, method) (( bool (*) (Predicate_1_t1846 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11344_gshared)(__this, ___result, method)
