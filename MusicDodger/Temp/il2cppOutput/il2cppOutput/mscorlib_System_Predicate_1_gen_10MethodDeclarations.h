﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1881;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11809_gshared (Predicate_1_t1881 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11809(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1881 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11809_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11810_gshared (Predicate_1_t1881 * __this, RaycastResult_t120  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11810(__this, ___obj, method) (( bool (*) (Predicate_1_t1881 *, RaycastResult_t120 , const MethodInfo*))Predicate_1_Invoke_m11810_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11811_gshared (Predicate_1_t1881 * __this, RaycastResult_t120  ___obj, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11811(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1881 *, RaycastResult_t120 , AsyncCallback_t195 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11811_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11812_gshared (Predicate_1_t1881 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11812(__this, ___result, method) (( bool (*) (Predicate_1_t1881 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11812_gshared)(__this, ___result, method)
