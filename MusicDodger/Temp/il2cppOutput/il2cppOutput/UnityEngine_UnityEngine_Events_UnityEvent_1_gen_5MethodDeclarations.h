﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t1896;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1865;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t602;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m12003_gshared (UnityEvent_1_t1896 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m12003(__this, method) (( void (*) (UnityEvent_1_t1896 *, const MethodInfo*))UnityEvent_1__ctor_m12003_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m12005_gshared (UnityEvent_1_t1896 * __this, UnityAction_1_t1865 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m12005(__this, ___call, method) (( void (*) (UnityEvent_1_t1896 *, UnityAction_1_t1865 *, const MethodInfo*))UnityEvent_1_AddListener_m12005_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12007_gshared (UnityEvent_1_t1896 * __this, UnityAction_1_t1865 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12007(__this, ___call, method) (( void (*) (UnityEvent_1_t1896 *, UnityAction_1_t1865 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12007_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12009_gshared (UnityEvent_1_t1896 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12009(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1896 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12009_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t602 * UnityEvent_1_GetDelegate_m12011_gshared (UnityEvent_1_t1896 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12011(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t602 * (*) (UnityEvent_1_t1896 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12011_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t602 * UnityEvent_1_GetDelegate_m12013_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1865 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12013(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t602 * (*) (Object_t * /* static, unused */, UnityAction_1_t1865 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12013_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m12014_gshared (UnityEvent_1_t1896 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m12014(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1896 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m12014_gshared)(__this, ___arg0, method)
