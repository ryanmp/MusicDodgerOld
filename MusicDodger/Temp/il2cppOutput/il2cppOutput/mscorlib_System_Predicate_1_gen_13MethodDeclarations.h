#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t1901;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t74;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m12146(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1901 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m10632_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::Invoke(T)
#define Predicate_1_Invoke_m12147(__this, ___obj, method) (( bool (*) (Predicate_1_t1901 *, Transform_t74 *, const MethodInfo*))Predicate_1_Invoke_m10633_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Transform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12148(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1901 *, Transform_t74 *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m10634_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12149(__this, ___result, method) (( bool (*) (Predicate_1_t1901 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m10635_gshared)(__this, ___result, method)
