#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t318;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t85;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m11452_gshared (EventFunction_1_t318 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m11452(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t318 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m11452_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m11454_gshared (EventFunction_1_t318 * __this, Object_t * ___handler, BaseEventData_t85 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m11454(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t318 *, Object_t *, BaseEventData_t85 *, const MethodInfo*))EventFunction_1_Invoke_m11454_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m11456_gshared (EventFunction_1_t318 * __this, Object_t * ___handler, BaseEventData_t85 * ___eventData, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m11456(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t318 *, Object_t *, BaseEventData_t85 *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m11456_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m11458_gshared (EventFunction_1_t318 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m11458(__this, ___result, method) (( void (*) (EventFunction_1_t318 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m11458_gshared)(__this, ___result, method)
