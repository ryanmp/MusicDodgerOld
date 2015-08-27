#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2030;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m13918_gshared (UnityAction_1_t2030 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m13918(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2030 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13918_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13919_gshared (UnityAction_1_t2030 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13919(__this, ___arg0, method) (( void (*) (UnityAction_1_t2030 *, bool, const MethodInfo*))UnityAction_1_Invoke_m13919_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13920_gshared (UnityAction_1_t2030 * __this, bool ___arg0, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13920(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2030 *, bool, AsyncCallback_t195 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13920_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13921_gshared (UnityAction_1_t2030 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13921(__this, ___result, method) (( void (*) (UnityAction_1_t2030 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13921_gshared)(__this, ___result, method)
