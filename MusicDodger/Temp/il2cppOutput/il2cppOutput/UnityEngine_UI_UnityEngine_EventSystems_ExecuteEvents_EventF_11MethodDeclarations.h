﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t105;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t295;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t85;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m1522(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t105 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m11452_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m12053(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t105 *, Object_t *, BaseEventData_t85 *, const MethodInfo*))EventFunction_1_Invoke_m11454_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m12054(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t105 *, Object_t *, BaseEventData_t85 *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m11456_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m12055(__this, ___result, method) (( void (*) (EventFunction_1_t105 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m11458_gshared)(__this, ___result, method)