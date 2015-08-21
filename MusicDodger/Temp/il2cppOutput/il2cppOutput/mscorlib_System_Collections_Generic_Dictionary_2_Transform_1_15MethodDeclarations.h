#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
struct Transform_1_t1629;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10296_gshared (Transform_1_t1629 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m10296(__this, ___object, ___method, method) (( void (*) (Transform_1_t1629 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10296_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m10297_gshared (Transform_1_t1629 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m10297(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1629 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m10297_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m10298_gshared (Transform_1_t1629 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m10298(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1629 *, Object_t *, int64_t, AsyncCallback_t119 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10298_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m10299_gshared (Transform_1_t1629 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m10299(__this, ___result, method) (( Object_t * (*) (Transform_1_t1629 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10299_gshared)(__this, ___result, method)
