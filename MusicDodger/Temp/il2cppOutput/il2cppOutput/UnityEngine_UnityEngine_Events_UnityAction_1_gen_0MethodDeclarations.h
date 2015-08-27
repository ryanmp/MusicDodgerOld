﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t305;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1684_gshared (UnityAction_1_t305 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1684(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t305 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1684_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12496_gshared (UnityAction_1_t305 * __this, Color_t60  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12496(__this, ___arg0, method) (( void (*) (UnityAction_1_t305 *, Color_t60 , const MethodInfo*))UnityAction_1_Invoke_m12496_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12497_gshared (UnityAction_1_t305 * __this, Color_t60  ___arg0, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12497(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t305 *, Color_t60 , AsyncCallback_t195 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12497_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12498_gshared (UnityAction_1_t305 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12498(__this, ___result, method) (( void (*) (UnityAction_1_t305 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12498_gshared)(__this, ___result, method)